#include <fstream>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    std::ifstream read("gymnastics.in");
    int session_num;
    int cow_num;
    read >> session_num >> cow_num;

    /*
     * better[c1][c2] = true
     * if c1 was better than c2 in *any* session (0-indexed).
     */
    vector<vector<bool>> better(cow_num, vector<bool>(cow_num));
    for (int s = 0; s < session_num; s++) {
        vector<int> session(cow_num);
        for (int &c : session) {
            read >> c;
            c--;
        }
        for (int i = 0; i < session.size(); i++) {
            for (int j = i + 1; j < session.size(); j++) {
                better[session[j]][session[i]] = true;
            }
        }
    }

    int better_pairs = 0;
    for (int c1 = 0; c1 < cow_num; c1++) {
        for (int c2 = c1 + 1; c2 < cow_num; c2++) {
            better_pairs += !better[c1][c2] || !better[c2][c1];
        }
    }

    std::ofstream("gymnastics.out") << better_pairs << endl;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string feedback(const string& guess, const string& sk) {
    string res = "     "; 
    for (int i = 0; i < 5; ++i) {
        if (guess[i] == sk[i]) {
            res[i] = '*';
        } 
        else if (sk.find(guess[i]) != string::npos) {
            res[i] = '!';
        } else res[i] = 'X';
    }
    return res;
}



int main() {
    
    int n;
    cin >> n;

    vector<string> dict(n);
    for (int i = 0; i < n; ++i) {
        cin >> dict[i];
    }
    
    string sk = dict[0];
    
    int g;
    cin >> g; 
    
    while (g--) {
        string feed_real;
        cin >> feed_real;
        
        int wordss = 0;
        
        for (int i = 0; i < n; ++i) {
            string feed_sim = feedback(dict[i], sk );
            
            if (feed_sim == feed_real) {
                wordss++;
            }
        }
        cout << wordss << endl;
    }

    return 0;
}
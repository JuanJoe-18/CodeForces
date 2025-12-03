#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, tar = "hello";
    cin >> s;

    int j = 0; 
    vector<char> ordered;       
    unordered_set<char> seen;   

    for (int i = 0; i < (int)s.size(); i++) {
       
        if (s[i] == tar[j]) {
            j++;
            if (j == (int)tar.size()) break;
        }

          if (!seen.count(s[i])) {
            seen.insert(s[i]);
            ordered.push_back(s[i]);
        }
    }
   
    string ordered_str(ordered.begin(), ordered.end());

    cout << (j == (int)tar.size() ? "YES" : "NO") << endl;
 

    return 0;
}

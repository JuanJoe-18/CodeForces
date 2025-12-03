#include<bits/stdc++.h>
using namespace std;
vector<string> solve(string s);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<string> result = solve(s);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
    }
    cout << endl;
    return 0;
}

vector<string> solve(string s){
    vector<int> a;
    vector<string> b;
    for (int  i = 0; i < s.size(); i++)
    {
        if(s[i] != '+'){
            a.push_back(s[i] - '0');   
        }
    }

    sort(a.begin(),a.end());
    for (int j = 0; j < s.size(); j++)
    {
        if(j % 2 == 0){
            b.push_back(to_string(a[j]));
        }else{
            b.push_back("+");
        }
    }
    return b;
}

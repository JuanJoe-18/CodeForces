#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s; 
    int A = 0, B = 0;
    for(int i = 1; i < s.size(); i+=2){
		bool tie = false;
        if(s[i-1] == 'A') {
            A += (s[i] - '0');
        } else {
            B += (s[i] - '0');
        }
        
    
        if (A == 11){ 
            cout << "A" << endl;
            break;
        }else if (B == 11){
            cout << "B" << endl;
            break;
        }else if(A == 10 && B == 10) {
			tie = true;
        }
        
        if(tie && abs(A-B) >= 2){
			if(A>B){
				cout << "A" << endl;
				break;
			}else{
				cout << "B" << endl;
				break;
			}
		}
    }
    
  

    return 0;
}

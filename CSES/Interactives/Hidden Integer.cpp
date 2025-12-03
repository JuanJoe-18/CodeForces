#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
string answer = "";
int y = 0;

while(true){
    cout << "? " << y << endl;
    cin >> answer;
    if(answer == "YES"){
        y+=3;
    }else{
        cout << "!" << y<< endl;
        break;
    }
}

    return 0;
}
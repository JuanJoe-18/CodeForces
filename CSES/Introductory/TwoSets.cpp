#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int size = n-1;
	vector<int> s1;
	vector<int> s2;
	int x = 0;

	int s = n*(n+1)/2;
	if (!s%2) {
		cout << "NO"<< endl;
		return 0;
	}

	for (int i = 1, j = n-1; i <= n-1 && j >= 1; i++,j--) {
		if (size == 0) break;
		if (x % 2) {
			s1.push_back(i);
			s1.push_back(j);
			x++;
			size-=2;
		} else {s2.push_back(i);
			s2.push_back(j);
			x++;
			size-=2;
		}
	}




	return 0;
}
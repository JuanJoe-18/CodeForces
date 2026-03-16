#include <bits/stdc++.h>
#include <debug.h>
using namespace std;
typedef long long ll;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<int> p(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	p[0] = a[0];
	for (size_t i = 1; i < n; i++) {
		p[i] = p[i-1] + a[i];
	}
	
	int l = 0, r = 0;
	long long ans = 0, sum = 0;
	while (l < n)
	{
		// 1️⃣ Expandir mientras se pueda
		while (r < n && can_add(r))
		{
			add(r);
			r++;
		}

		// 2️⃣ Actualizar respuesta
		if (sum = k*(r-l+1)){
			ans = fmax(ans, r-l+1);
		}
		 // o min, o sum, depende del problema

		// 3️⃣ Reducir desde la izquierda
		remove(l); // usualmente sum -= a[l];
		l++;
	}
	cout << ans << endl;

	return 0;
}

/*
10 4
3 4 5 6 7 8 10 10 11 11

10 6
3 4 5 6 7 8 10 10 11 11

10 3
3 4 5 6 7 8 10 10 11 11

10 10
3 4 5 6 7 8 10 10 11 11



*/
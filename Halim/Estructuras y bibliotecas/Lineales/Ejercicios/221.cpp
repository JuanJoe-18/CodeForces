#include <algorithm>
#include<bits/stdc++.h>
#include <cstdio>
#include <set>
#include <utility>
#include <vector>
using namespace std;

int bys( vector<int> &a, int x){
    int l=0, r=a.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    return -1; // no encontrado
}

/*
	Supongamos que tienes un array sin ordenar 𝑆 de 𝑛 enteros con signo de 32 bits. Resuelve
	cada una de las tareas que se indican a continuación, con el mejor algoritmo posible
	que se te ocurra, y analiza su complejidad de tiempo. Vamos a asumir los siguientes
	límites: 1 ≤ 𝑛 ≤ 100𝐾, lo que supone que las soluciones 𝑂(𝑛^2) serían, teóricamente,
	impracticables en el entorno de un concurso.

	complejidad maxima Nlogn
	
*/

//1. Determina si 𝑆 contiene una o más parejas de enteros duplicados.
string _1(string s){
	set<char> v;
	for(char c: s) v.insert(c);
	return (v.size() == s.size()) ?  "NO":"SI"; //complejidad O(nlog)
}

//2*. Dado un entero 𝑣, busca dos enteros 𝑎, 𝑏 ∈ 𝑆, de forma que 𝑎 + 𝑏 = 𝑣
pair<int, int> _2(int v, multiset<int> &s){
	int n = s.size();
	for (auto i : s){
		if(*s.find(v-i)){
			return {i, v-i};
		}
	}
	return {0,0}; //complejidad O(nlog) 
}

//Siguiendo con la tarea 2: ¿qué ocurre si el array 𝑆 ya está ordenado?
/*
Si el array S ya está ordenado, podemos utilizar un enfoque de dos punteros para encontrar los dos enteros que suman v. 
Inicializamos un puntero en el inicio (izquierda) y otro en el final (derecha) del array. 
Luego, sumamos los valores en estas posiciones y comparamos con v. 
Si la suma es igual a v, hemos encontrado la pareja. 
Si la suma es menor que v, movemos el puntero izquierdo hacia la derecha para aumentar la suma. 
Si la suma es mayor que v, movemos el puntero derecho hacia la izquierda para disminuir la suma. 
Este enfoque tiene una complejidad O(n) en lugar de O(nlog) debido a que no necesitamos buscar en un conjunto.
*/

pair<int, int> _3(int v, vector<int> &a){
	int n = a.size();
	int r = n-1;
	int l = 0;
	while(l < r){
		int sum = a[l] + a[r];
		if (sum == v) return {a[l], a[r]};
		else if (sum > v) r--;
		else l++;		
	}
	return {0,0}; 
}

//Escribe ordenados los enteros en 𝑆 que estén en un rango [𝑎 … 𝑏] (ambos inclusive).
vector<int> _4(int a, int b, vector<int> &s){
	vector<int> ans;
	int ida = bys(s,a);
	int idb = bys(s,b);
	sort(s.begin() + ida, s.begin() + idb + 1);
	for(int i = ida; i <= idb;i++){
		ans.push_back(s[i]);
	} 
	return ans;
}





int main(){
	cout<< _1("holaa") << endl;

	multiset<int> val2 = {2,3,4,5,6,8};
	vector<int> val3 = {1,2,3,4,5,6,8};
	vector<int> val4 = {2,12,3,1,2,3,4,2,3,5};
	printf(" (%d ,%d) \n",_2(8,val2).first,_2(8,val2).second);
	printf(" (%d ,%d) \n",_3(6,val3).first,_3(6,val3).second);

    

    
	for(int c :_4(3,2,val4) ){
		printf("%d -> ",c);
	}
	return 0;
}



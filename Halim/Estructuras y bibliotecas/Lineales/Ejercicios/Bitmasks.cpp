#include <bits/stdc++.h>
using namespace std;

/*1. Obtén el resto (módulo) de 𝑆 cuando es dividido por 𝑁 (𝑁 es potencia de 2).*/
// ejemplo de funcionamiento interno:
/*
   N =  4  = 0100
   S = 10  = 1010
   N-1= 3  = 0011
   R = S & (N-1) = 0010 = 2
*/

int residuon2k(int s, int n)
{
    int m;
    m = s & (n - 1);
    return m;
}

// Determina si es una potencia de 2
bool potencia2(int n)
{ // siempre que n no sea <=1
    if (n <= 1)
        return false;
    int m;
    m = n & (n - 1);
    return !m ? true : false;
}

/*Desactiva el último bit de S , por ejemplo, = 40 = (101000) → = 32 = (100000).*/
int offLSB(int n)
{
    int m = n & (n - 1);
    return m;
}

/* Activa el último cero de , por ejemplo, = 41 = (101001) → = (43) = (101011).*/
int offLSB0(int n){
    int m = ~(~n&(~n-1));
    return m;
}

int main()
{
    cout << residuon2k(10, 5) << endl;

    int n = 0;
    potencia2(n) ? printf("%d si el potencia de 2\n", n) : printf("%d no el potencia de 2\n", n);

    n = 40;
    printf("desactivando el LSB: %d \n", offLSB(n));

    printf("activando el LSB0 de %d: %d \n",n+1, offLSB0(n));




    return 0;
}
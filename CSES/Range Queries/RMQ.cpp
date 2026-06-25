#include<bits/stdc++.h>
using namespace std;
typedef  vector<int> vi;
class SegmentTree {
    //árbol desegmentos comoarray demontículo
    private: vi st, A; //recuerdaque vies: typedef vector<int> vi;
    int n;
    int left(int p) { return p << 1; } //igual que montículosbinarios
    int right(int p) { return (p << 1) + 1; }

    void build(int p, int L, int R) {
        //O(n)
        if (L == R) //comoL ==R,cualquieranos vale
            st[p] = L; //guardar elíndice
        else {
            //calcularlos valores deforma recursiva
            build(left(p), L, (L + R) / 2);
            build(right(p), (L + R) / 2 + 1, R);
            int p1 = st[left(p)], p2 = st[right(p)];
            st[p] = (A[p1] <= A[p2]) ? p1 : p2;
        }
    }

    int rmq(int p, int L, int R, int i, int j) {
        //O(log n)
        if (i > R || j < L) return -1; //segmentoactualfuera del rango
        if (L >= i && R <= j) return st[p]; //dentrodel rango delaconsulta

        //calcularposiciónmínimaenlaizquierda y derecha del intervalo
        int p1 = rmq(left(p), L, (L + R) / 2, i, j);
        int p2 = rmq(right(p), (L + R) / 2 + 1, R, i, j);

        if (p1 == -1) return p2; //sivamos alsegmentofuera delaconsulta
        if (p2 == -1) return p1; //igual que antes
        return (A[p1] <= A[p2]) ? p1 : p2; //comoenlarutinabuild
    }

public:
    SegmentTree(const vi &_A) {
        A = _A;
        n = (int) A.size(); //copiarcontenido parauso local
        st.assign(4 * n, 0); //crear vectordeceros detamañosuficiente
        build(1, 0, n - 1); //build recursivo
    }

    int rmq(int i, int j) { return rmq(1, 0, n - 1, i, j); } //sobrecarga
};

int main() {
    int arr[] = {18, 17, 13, 19, 15, 11, 20}; //elarray original
    SegmentTree st(arr);
    printf("RMQ(1, 3)= %d\n", st.rmq(1, 3)); //respuesta = índice2
    printf("RMQ(4, 6)= %d\n", st.rmq(4, 6)); //respuesta = índice5
    return 0;
}

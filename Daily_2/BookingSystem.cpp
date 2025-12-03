#include <bits/stdc++.h>
#include <map>
#include <tuple>
#include <utility>
#include <vector>
typedef  long long ll;
using namespace std;
int main() {
  int n;
  cin >> n;
  set<tuple<int,int,int>> R;
  for (int i = 0; i < n; i++) {
    int c, p;
    cin >> c >> p;
    R.insert(make_tuple(p,c,i+1));
  }
  int m;
  cin >> m;
  set<pair<int, int>> mesas;
  for (int i = 0; i < m; i++) {
    int m_i;
    cin >> m_i;
    mesas.insert({m_i,i+1});
  }
  map<int, int> ans;
  ll sum = 0;

  for (auto it = R.rbegin(); it != R.rend(); ++it) {
    auto i = mesas.lower_bound({get<1>(*it),-1});
    if (i != mesas.end()) {
        ans[get<2>(*it)] = i->second;
        sum += get<0>(*it);
        mesas.erase(i);
    }
  }
  cout << ans.size() << " "<< sum << endl;
  for (auto a : ans) {
    cout << a.first << " "<< a.second << endl;
  }
  return 0;
}













/*
─────────────────────────────
 RESUMEN DE CORRECCIONES Y CONSIDERACIONES
─────────────────────────────
1️⃣ ORDEN DEL SET:
   - El set<tuple<int,int,int>> se ordena automáticamente
     de menor a mayor según el primer elemento (precio).
   - Por eso recorremos con rbegin() para ir de mayor a menor precio.

2️⃣ INSERCIÓN CORRECTA:
   - Se debe insertar como (p, c, id) → precio, capacidad, índice cliente.
     Si se intercambian, el set se ordenará por el campo equivocado.

3️⃣ LOWER_BOUND CORRECTO:
   - Debe usarse sin "retroceder" (sin i--).
     lower_bound devuelve la primera mesa con capacidad >= requerida.
     Retroceder provocaba comportamiento indefinido o errores lógicos.

4️⃣ FORMATO DE SALIDA:
   - Se agregaron espacios entre valores al imprimir (antes estaban pegados).

5️⃣ LÓGICA DE SUMA:
   - Se suma el precio (p = get<0>(*it)), no la capacidad.

6️⃣ ORDEN EN MESAS:
   - El set<pair<int,int>> de mesas está ordenado por capacidad (m_i),
     lo que permite usar lower_bound para encontrar la mesa adecuada.
*/
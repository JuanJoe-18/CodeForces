
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isBetween(double value, double a, double b) {
    if (a > b) swap(a, b);
    return value >= a && value <= b;
}

string checkIntersection(double xi, double yi,
                         long long x1, long long y1,
                         long long x2, long long y2,
                         long long x3, long long y3,
                         long long x4, long long y4)
{
    // Verificar si el punto (xi, yi) está dentro de ambos segmentos
    bool inFirstSegment = isBetween(xi, x1, x2) && isBetween(yi, y1, y2);
    bool inSecondSegment = isBetween(xi, x3, x4) && isBetween(yi, y3, y4);

    return (inFirstSegment && inSecondSegment) ? "YES" : "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        double denom = (double)(x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);

        // Verificar si las rectas son paralelas
        if (denom == 0) {
            cout << "NO\n";
            continue;
        }

        // Cálculo del punto de intersección usando fórmula de cruce de líneas
        double xi = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / denom;
        double yi = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / denom;

        cout << checkIntersection(xi, yi, x1, y1, x2, y2, x3, y3, x4, y4) << "\n";
    }

    return 0;
}
/*#include<iostream>
#include<vector>
using namespace std;

string checkIntersection(std::vector<double> &point, long long x1, long long x3, long long x2, long long x4, long long y1, long long y3, long long y2, long long y4);


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long x1,x2,x3,x4,y1,y2,y3,y4;
        
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        
        double m_1 = static_cast<double>(y2 - y1) / (x2 - x1);
        double m_2 = static_cast<double>(y4 - y3) / (x4 - x3);
        double b_1 = y1 - m_1 * x1;
        double b_2 = y3 - m_2 * x3;
        double xi = (b_2 - b_1) / (m_1 - m_2);
        double yi = m_1 * xi + b_1; 
        vector<double> point(2);
        point[0] = xi;
        point[1] = yi; // ya tenemos el punto de interseccion
        //verificar si esta por puera de los degmentos
        string solve = checkIntersection(point, x1, x3, x2, x4, y1, y3, y2, y4);
        cout << solve << endl;
    }


    return 0;
}

string checkIntersection(std::vector<double> &point, long long x1, long long x3, long long x2, long long x4, long long y1, long long y3, long long y2, long long y4)
{
    if ((point[0] < x1) && (point[0] < x3) || (point[0] > x2) && (point[0] > x4))
    {
        if ((point[0] < y1) && (point[0] < y3) || (point[0] > y2) && (point[0] > y4))
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
    }
    else {
        return "YES";
    }
    
}*/

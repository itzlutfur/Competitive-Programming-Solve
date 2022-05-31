#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {

    double A, B, C;
    cin >> A >> B >> C;
    cout << fixed << setprecision(5);
    double temp = B*B-4*A*C;

    if( temp<0 || A==0) {
        cout << "Impossivel calcular" << endl;
    } else {
        double r1 = (-B+sqrt(temp))/(2*A);
        double r2 = (-B-sqrt(temp))/(2*A);
        cout << "R1 = " << r1 << "\n" << "R2 = " << r2 << endl;
    }

    return 0;
}
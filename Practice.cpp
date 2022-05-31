#include<bits/stdc++.h>
using namespace std;

int main() {

    double x, y, z, a, b, c, A, B, C;
    cin >> x >> y >> z;

    if(x>y && x>z){
        a=x; b=y; c=z;
    } else if(y>z) {
        a=y; b=x; c=z;
    } else {
        a=z; b=x; c=y;
    }

    A = a*a;
    B = b*b;
    C = c*c;

    if(a>=(b+c)){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if(A==(B+C)){
        cout << "TRIANGULO RETANGULO" << endl;
    } 
    else if(A>(B+C)) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if(A<(B+C)) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    {
    if(a==b && b==c && c==a) {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if(a==b || b==c || c==a) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    }

    return 0;
}
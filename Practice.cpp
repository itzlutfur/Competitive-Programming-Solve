#include <bits/stdc++.h>
using namespace std;

int main() {

    float A;
    cin >> A;
    
    if(A<0.00000){
        cout << "Fora de intervalo" << endl;
    }else if(A>0.00000 && A<=25){
        cout << "Intervalo [0,25]" << endl;
    }else if(A>25.00000 && A<=50){
        cout << "Intervalo (25,50]" << endl;
    }else if(A>50.00000 && A<=75){
        cout << "Intervalo (50,75]" << endl;
    }else if(A>=75.00000 && A<=100){
        cout << "Intervalo (75,100]" << endl;
    }else if(A > 100.0000) {
        cout << "Fora de intervalo\n";
    }
    return 0;
}
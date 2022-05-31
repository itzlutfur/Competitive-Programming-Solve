#include<bits/stdc++.h>
using namespace std;

int main() {
    double N1, N2, N3, N4, last, avg;
    cin >> N1 >> N2 >> N3 >> N4;

    avg = (N1*2+N2*3+N3*4+N4)/10;

    cout << fixed << setprecision(1);
    cout << "Media: " << avg << endl;

    if(avg>=7.0){
    cout << "Aluno aprovado." << endl;

    } else if(avg<5.0){
        cout << "Aluno reprovado." << endl;

    } else if(avg>=5.0 && avg<=6.9){
        cout << "Aluno em exame." << endl;
        cin >> last;
        cout << "Nota do exame: " << last << endl;
        avg = (avg + last)/2;

        if(avg >=5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << avg << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if(t<=1399){
        cout << "Division 4" << endl;
    } else if(t>1399 && t<=1599) {
        cout << "Division 3" << endl;
    }else if(t>=1600 && t<=1899){
        cout << "Division 2" << endl;
    } else if(t>=1900) {
        cout << "Division 1" << endl;
    }

    return 0;
}

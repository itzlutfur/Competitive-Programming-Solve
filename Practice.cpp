#include<bits/stdc++.h>
using namespace std;

int main() {

    string test;
    cin >> test;

    cout << test[3] << test[4] << "/" << test[0] << test[1] << "/" << test[6] << test[7]<<endl;
    cout << test[6] << test[7] << "/" << test[3] << test[4] << "/" << test[0] << test[1]<<endl;
    cout << test[0] << test[1] << "-" << test[3] << test[4] << "-" << test[6] << test[7]<<endl;



    return 0;
}
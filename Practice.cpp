#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, h, l, sum;

    while(true){
        cin >> m >> n;
        if(m<=0 || n<=0) break;

        h = m>n ? m:n;
        l = h==m ? n:m;
        sum = 0;
        for(int i = l; i<=h; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }

    return 0;
}

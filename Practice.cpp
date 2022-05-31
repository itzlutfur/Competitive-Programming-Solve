#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    scanf("%d", &N);

    int temp;

    printf("%d note(s) of 500\n", N/500);
    temp = N%500;

    printf("%d note(s) of 100\n", temp/100);
    temp = temp%100;

    printf("%d note(s) of 50\n", temp/50);
    temp = temp%50;

    printf("%d note(s) of 20\n", temp/20);
    temp = temp%20;

    printf("%d note(s) of 10\n", temp/10);

    return 0;
}
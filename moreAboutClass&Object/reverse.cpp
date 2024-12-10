#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    reverse(a, a+n);
    for(int i = 0; i < n; i++){
        cout << a[i] << "";
    }
    return 0;
}
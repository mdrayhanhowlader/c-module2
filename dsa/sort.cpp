#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<map>
#include<sstream>
#include<cctype>
#include<cmath>
#include<bitset>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
    char s[100];
    cin.getline(s, 100);
    int sz = strlen(s);
    sort(s, s + sz);
    cout << s << endl;
     for(int i = 0; i < sz; i++){
        if(s[i] != 32){
            cout << s[i];
        }
     }
    return 0;
}
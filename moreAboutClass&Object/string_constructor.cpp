#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<map>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
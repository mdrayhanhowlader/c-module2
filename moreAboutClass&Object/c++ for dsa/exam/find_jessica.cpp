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
    string S;
    getline(cin, S);
    stringstream ss(S);
    string name;
    for(int i = 0; ss >> name; i++){
        if(name == "Jessica"){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
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
    int a = 10;
    cout << &a << endl; 
    int * ptr = &a;
    cout << ptr << endl;
    // dereference the pointer
    cout << *ptr << endl;   
    *ptr = 20;
    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}
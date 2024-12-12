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


int* func (){
   int *arr =  new int[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i]; 
    }
   
    return arr;
};
int main(){
    int *ar =  func();
    for(int i = 0; i < 5; i++){
        cout << ar[i] << " ";
    }
    return 0;
}
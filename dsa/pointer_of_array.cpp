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
    int arr[5];
    cout << arr << endl;
    cout << &arr[0] << " " << &arr[1] << endl;
    cout << arr << " " << arr + 1 << endl;
    
    *(arr) = 10;
    *(arr + 1) = 20;
    *(arr + 2) = 30;
    *(arr + 3) = 40;
    *(arr + 4) = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    


    return 0;
} 
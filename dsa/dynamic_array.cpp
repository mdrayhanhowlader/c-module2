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
    int* arr = new int[10];
    *arr = 10;
    *(arr + 1) = 20;
    *(arr + 2) = 30;
    *(arr + 3) = 40;
    *(arr + 4) = 50;
    *(arr + 5) = 60;
    *(arr + 6) = 70;
    *(arr + 7) = 80;
    *(arr + 8) = 90;
    *(arr + 9) = 100;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
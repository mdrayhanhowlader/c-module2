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

class Car {
    public: 
        char color[50];
        int power;
        int weight;
};
int main(){
    Car tesla;
    cin >> tesla.color >> tesla.power >> tesla.weight;
    cout << "Car Color: " << tesla.color << endl;
    cout << "Car Power: " << tesla.power << endl;
    cout << "Car Weight: " << tesla.weight << endl;
    return 0;
}
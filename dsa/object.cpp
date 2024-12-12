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

class Chatra {
    public: 
        char name[100];
        int grade;
        int role;
};
int main(){
    Chatra a;
    cin.getline(a.name, 100);
    cin >> a.grade >> a.role;
    cout << "Name: " << a.name << endl;
    cout << "Grade: " << a.grade << endl;
    cout << "Role: " << a.role << endl;
    return 0;
}
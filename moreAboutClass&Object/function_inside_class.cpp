#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<map>
using namespace std;

class Student{
    public: 
    string name;
    int roll;
    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    };
};

int main(){
    Student sakib("Sakib Ahmad", 23);
    cout << sakib.name << " " << sakib.roll << endl;
    return 0;
}
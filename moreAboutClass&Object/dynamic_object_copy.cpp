#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<map>
using namespace std;


class Cricketer{
    public:
     string country;
     int jersey;
     Cricketer(string country, int jersey){
        this->country = country;
        this->jersey = jersey;
     }
};
int main(){
    Cricketer* sakib = new Cricketer("Bangladesh", 10);

    return 0;
}
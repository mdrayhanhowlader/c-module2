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

class Student {
    public:
    string nm;
    int cls;
    char s;
    int id;
};
// int main(){
//     int N;
//     cin >> N;
//     Student students[N];
//     for(int i = 0; i < N; i++){
//         cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
//     }
    
//     for (int i = 0; i < N; i++) {
//         cout << students[i].nm << " " << students[i].cls << " " 
//              << students[N - i - 1].s << " " << students[i].id << endl;
//     }

//     return 0;
// }

int main()
{
    // Write your code here
    int N;
    cin >> N;
    Student a[N];
    for(int i = 0; i < N; i++){
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }
    for(int i = 0; i < N; i++){
        cout << a[i].nm << " " << a[i].cls << " " << a[N - i - 1].s << " " << a[i].id << endl;
    }
    return 0;
}
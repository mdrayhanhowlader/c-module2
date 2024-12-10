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
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b){
    if(a.eng_marks == b.eng_marks){
        if(a.math_marks == b.math_marks){
            return a.id < b.id;
        }
        return a.math_marks > b.math_marks;
    }
    return a.eng_marks > b.eng_marks;
};
int main(){
    int N;
    cin >> N;
    Student students[N];
    for(int i = 0; i < N; i++){
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }
    sort(students, students + N, cmp);
    for(int i = 0; i < N; i++){
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }
    return 0;
}
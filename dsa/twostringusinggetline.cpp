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

class Student 
{
    public:
        char name[100 ];
        int grade;
        int roll;
};
int main(){
    int n;
    cin >> n;
    Student arr[n + 1];
    Student maxMarksStudent = arr[0];
    int totalMarks = 0;
    int averageMarks = totalMarks / n;
    Student averageMarksStudents = arr[0];
    for(int i = 1; i <= n; i++){
        arr[i].roll = i;
        cin >> arr[i].name >> arr[i].grade;
    }

    for(int i = 1; i <= n; i++){
       if(arr[i].grade > maxMarksStudent.grade){
        maxMarksStudent = arr[i];
       }
       totalMarks += arr[i].grade;
       if(arr[i].grade > averageMarks){
        averageMarksStudents = arr[i];
       }
    }
    cout << "Student with highest average marks: " << averageMarksStudents.name << " with grade " << averageMarksStudents.grade << endl;
    return 0;
}
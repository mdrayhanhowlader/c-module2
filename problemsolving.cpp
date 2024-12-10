#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
      if(mx<a[i]){
          mx = a[i];
      }
    }

    return 0;
}
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<map>
using namespace std;


int main(){
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string S, X;
        cin >> S >> X;

        int xlength = X.length();
        int slength = S.length();

        // Create a result string to store the final answer
        string result = "";

        for (int j = 0; j < slength; ) {
            if (S.substr(j, xlength) == X) {
                result += "#";  // Append '#' instead of 'X'
                j += xlength;   // Skip the length of 'X'
            } else {
                result += S[j]; // Append the current character if no match
                j++;
            }
        }

        cout << result << endl; // Output the final result string
    }

    return 0;
}
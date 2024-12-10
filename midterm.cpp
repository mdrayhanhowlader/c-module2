#include<iostream>
#include<algorithm>

using namespace std;

bool findTripletWithSum(int A[], int N, int S) {
    // Sort the array
    sort(A, A + N);

    // Check for any triplet that sums up to S
    for (int i = 0; i < N - 2; i++) {
        int left = i + 1, right = N - 1;

        while (left < right) {
            int currentSum = A[i] + A[left] + A[right];

            if (currentSum == S) {
                return true;
            } else if (currentSum < S) {
                left++;
            } else {
                right--;
            }
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        if (findTripletWithSum(A, N, S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of elements in the array: ";
    cin >> N;

    float arr[N];
    cout << "Enter " << N << " real numbers:\n";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (int i = 0; i < N; ++i) {
        if (arr[i] > 0) {
            ++positiveCount;
        } else if (arr[i] < 0) {
            ++negativeCount;
        } else {
            ++zeroCount;
        }
    }

    cout << "Number of positive values: " << positiveCount << endl;
    cout << "Number of negative values: " << negativeCount << endl;
    cout << "Number of zero values: " << zeroCount << endl;

    return 0;
}

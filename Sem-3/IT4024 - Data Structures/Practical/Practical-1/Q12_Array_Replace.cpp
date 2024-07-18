#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of strings in the array: ";
    cin >> n;

    string arr[n];
    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string str1, str2;
    cout << "Enter the string to search: ";
    cin >> str1;
    cout << "Enter the string to replace: ";
    cin >> str2;

    cout << "Array before replacement:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] == str1) {
            arr[i] = str2;
        }
    }

    cout << "Array after replacement:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

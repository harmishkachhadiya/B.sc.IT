#include <iostream>
using namespace std;

int main() {
    int n, num, choice, i, sum = 0, max, min, avg;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add a number\n";
        cout << "2. Delete number\n";
        cout << "3. Find maximum number\n";
        cout << "4. Find minimum number\n";
        cout << "5. Calculate sum of numbers\n";
        cout << "6. Calculate average of numbers\n";
        cout << "7. Display array\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number to be added: ";
                cin >> num;
                n++;
                arr[n - 1] = num;
                break;
            case 2:
                cout << "Enter the position of the number to be deleted: ";
                cin >> num;
                if (num >= 1 && num <= n) {
                    for (i = num - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                } else {
                    cout << "Invalid position\n";
                }
                break;
            case 3:
                max = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                cout << "Maximum number: " << max << endl;
                break;
            case 4:
                min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Minimum number: " << min << endl;
                break;
            case 5:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                cout << "Sum of numbers: " << sum << endl;
                break;
            case 6:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                avg = sum / n;
                cout << "Average of numbers: " << avg << endl;
                break;
            case 7:
                cout << "Array elements: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 8:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
}

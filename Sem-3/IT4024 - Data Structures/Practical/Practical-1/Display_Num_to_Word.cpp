#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a two-digit number: ";
    cin >> number;

    // Ensure the number is between 10 and 99
    if (number < 10 || number > 99) {
        cout << "Please enter a valid two-digit number." << endl;
        return 1;
    }

    int tens = number / 10;
    int units = number % 10;

    // Handle tens place
    switch (tens) {
        case 1:
            switch (number) {
                case 10: cout << "Ten"; return 0;
                case 11: cout << "Eleven"; return 0;
                case 12: cout << "Twelve"; return 0;
                case 13: cout << "Thirteen"; return 0;
                case 14: cout << "Fourteen"; return 0;
                case 15: cout << "Fifteen"; return 0;
                case 16: cout << "Sixteen"; return 0;
                case 17: cout << "Seventeen"; return 0;
                case 18: cout << "Eighteen"; return 0;
                case 19: cout << "Nineteen"; return 0;
            }
        case 2: cout << "Twenty"; break;
        case 3: cout << "Thirty"; break;
        case 4: cout << "Forty"; break;
        case 5: cout << "Fifty"; break;
        case 6: cout << "Sixty"; break;
        case 7: cout << "Seventy"; break;
        case 8: cout << "Eighty"; break;
        case 9: cout << "Ninety"; break;
    }

    // Handle units place
    switch (units) {
        case 1: cout << " One"; break;
        case 2: cout << " Two"; break;
        case 3: cout << " Three"; break;
        case 4: cout << " Four"; break;
        case 5: cout << " Five"; break;
        case 6: cout << " Six"; break;
        case 7: cout << " Seven"; break;
        case 8: cout << " Eight"; break;
        case 9: cout << " Nine"; break;
    }

    cout << endl;
    return 0;
}

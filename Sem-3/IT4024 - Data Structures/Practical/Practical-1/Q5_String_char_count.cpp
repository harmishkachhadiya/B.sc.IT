
#include <iostream>
using namespace std;

int main() {
    string inputString;
    char characterToCount;
    int count = 0;

    cout << "Enter the string: ";
    cin >> inputString;

    cout << "Enter the character to count: ";
    cin >> characterToCount;

    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == characterToCount) {
            count++;
        }
    }
  
    cout << "The character '" << characterToCount << "' occurs " << count << " times in the string." << endl;

    return 0;
}

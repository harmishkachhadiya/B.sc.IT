#include <iostream>
using namespace std;

int countCharacterOccurrence(string str, char ch) {
    int count = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ch) {
            ++count;
        }
    }
    return count;
}

int main() {
    string str;
    char ch;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "Enter a character to count its occurrences: ";
    cin >> ch;
    
    int occurrence = countCharacterOccurrence(str, ch);
    
    cout << "The character '" << ch << "' occurs " << occurrence << " times in the string." << endl;
    
    return 0;
}


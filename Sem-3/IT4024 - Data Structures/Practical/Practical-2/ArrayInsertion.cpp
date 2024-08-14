#include <iostream>
using namespace std;

int main() {
    const int n = 4;
    int num[n + 1];
    int location;
    int key;
    bool isFull = false;

  
    cout << "Enter 4 enrollment numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

   
    cout << "Enrollment numbers are: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

  
    if (sizeof(num) / sizeof(num[0]) > n) {
    
        cout << "Array is still empty!" << endl;
    } else {
        cout << "Array is full!" << endl;
    }

    cout<<"Enter Location to Insert Element : ";
    cin>>location;
    cout<<"Enter element to Inserted : ";
    cin>>key;
    

    for (int i = n; i > location; i--) 
    {
        num[i] = num[i - 1];
    }
        
    num[location] = key;
    
    cout << "Updated enrollment numbers are: ";
    for (int i = 0; i <= n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}


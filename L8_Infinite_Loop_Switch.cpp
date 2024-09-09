#include<iostream>
using namespace std;

int main() {
    int choice;
    
    while(1) {  // Infinite loop
        cout << "Enter a number (1 or 2), or 0 to exit: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "You chose 1!" << endl;
                break;
            case 2:
                cout << "You chose 2!" << endl;
                break;
            case 0:
                cout << "Exiting program using exit()." << endl;
                exit(0);  // Exits the entire program immediately and 0 to show it terminated loop successfully.
                
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }

    return 0;
}

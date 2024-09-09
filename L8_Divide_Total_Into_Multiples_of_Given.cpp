#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the amount: ";
    cin >> n;

/*Using only if-else statements

    int count100 = 0, count50 = 0, count20 = 0, count1 = 0;  // Initialize counters
    
    while (n != 0) {
        if (n >= 100) {
            count100++;
            n -= 100;  // Subtract 100 from the amount
        }
        else if (n >= 50) {
            count50++;
            n -= 50;  // Subtract 50 from the amount
        }
        else if (n >= 20) {
            count20++;
            n -= 20;  // Subtract 20 from the amount
        }
        else {
            count1++;
            n -= 1;  // Subtract 1 from the amount
        }
    }

    // Output the result
    cout << "100s: " << count100 << endl;
    cout << "50s: " << count50 << endl;
    cout << "20s: " << count20 << endl;
    cout << "1s: " << count1 << endl;

    return 0;
} */
//Using Switch Operator

    int type;
    cout << "Enter the maximum currency you want (100, 50, 20, or 1): ";
    cin >> type;

    int notes = 0;

    switch(type) {
        case 100:
            if (n >= 100) {
                notes = n / 100;
                cout << "100 rupee notes: " << notes << endl;
                n = n % 100;
            }
            // No break here to fall through to the next case

        case 50:
            if (n >= 50) {
                notes = n / 50;
                cout << "50 rupee notes: " << notes << endl;
                n = n % 50;
            }
            // No break here to fall through to the next case

        case 20:
            if (n >= 20) {
                notes = n / 20;
                cout << "20 rupee notes: " << notes << endl;
                n = n % 20;
            }
            // No break here to fall through to the next case

        case 1:
            if (n >= 1) {
                notes = n / 1;
                cout << "1 rupee coins: " << notes << endl;
                break; // Exits switch after processing 1 rupee coins
            }
    }

    return 0;
}

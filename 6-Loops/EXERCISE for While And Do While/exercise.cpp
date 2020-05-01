#include <iostream>
using namespace std;

main()
{
    int PIN = 0, checkPIN = -1, tries = 5;

    while (PIN != checkPIN) {
        if (tries == 0) {
            cout << "Too many failed tries. Exiting..." << endl;
            exit(0);
        }

        cout << "Input your PIN (" << tries << " tries left): ";
        cin >> PIN;
        cout << "Input your PIN again to verify: ";
        cin >> checkPIN;

        tries--;
    }

    cout << "Correct PIN !" << endl;
}
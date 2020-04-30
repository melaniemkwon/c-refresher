#include <iostream>
using namespace std;

main()
{
    cout << "Choose your snack: " << endl;
    cout << "1. Coke" << endl;
    cout << "2. Sprite" << endl;
    cout << "3. Water" << endl;
    cout << "4. Doritos" << endl;
    cout << "5. Poptart" << endl;
    cout << "6. Celery" << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "You chose coke." << endl;
            break;
        case 2:
            cout << "You chose sprite." << endl;
            break;
        case 3:
            cout << "You chose water." << endl;
            break;
        case 4:
            cout << "You chose doritos." << endl;
            break;
        case 5:
            cout << "You chose poptart." << endl;
            break;
        case 6:
            cout << "You chose celery." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }
}

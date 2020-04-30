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

    if (choice == 1)
        cout << "You chose coke." << endl;
    else if (choice == 2)
        cout << "You chose sprite." << endl;
    else if (choice == 3)
        cout << "You chose water." << endl;
    else if (choice == 4)
        cout << "You chose doritos." << endl;
    else if (choice == 5)
        cout << "You chose poptart." << endl;
    else if (choice == 6)
        cout << "You chose celery." << endl;
    else
        cout << "Invalid choice." << endl;

}

#include <iostream>
using namespace std;

main()
{
    int min, max, med;
    cout << "Input three integers: " << endl;
    cin >> min;
    cin >> max;
    while (max <= min)
    {
        cout << "ERROR: Max number must be greater than min " << min << ": " << endl;
        cin >> max;
    }

    cin >> med;

    if (med >= min && med <= max)
    {
        cout << "The number " << med << " belongs in the interval from "
            << min << " to " << max << endl;
    }
    else {
        cout << "The number " << med << " DOES NOT belong in the interval from "
            << min << " to " << max << endl;
    }

}
#include <iostream>
using namespace std;

main()
{
    int nums[5];

    cout << "input five numbers: " << endl;
    cin >> nums[0];
    cin >> nums[1];
    cin >> nums[2];
    cin >> nums[3];
    cin >> nums[4];

    for (int i = 0; i < 5; i++) {
        if (nums[i] % 2 == 0)
            cout << nums[i] << " is even." << endl;
        else
            cout << nums[i] << " is odd." << endl;
    }

}
#include <iostream>
using namespace std;

double minValue(double arr[5]);
double maxValue(double arr[5]);

main()
{
    double array[5];
    cout << "Input 5 numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    cout << "Min value: " << minValue(array) << endl;
    cout << "Max value: " << maxValue(array) << endl;
}

double minValue(double arr[5]) {
    double min = arr[0];
    for(int i = 0; i < 5; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

double maxValue(double arr[5]) {
    double max = arr[0];
    for(int i = 0; i < 5; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}
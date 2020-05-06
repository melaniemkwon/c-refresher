#include <iostream>
using namespace std;

int * createArray(int);
void swapTwoValues(int*, int*);
// void fillArrayWithValues(int[], int);
void printArrayValues(int[], int);
void bubbleSort(int[], int, int=1); // 1 for ascending, 0 descending
void selectionSort(int[], int, int=1);

int main()
{
    int size, sortOrder, sortMethod;
    cout << "input size of array: ";
    cin >> size;
    int *arr = createArray(size); // initialized with rand nums
    printArrayValues(arr, size);

    cout << "sort (0)descending or (1)ascending?: ";
    cin >> sortOrder;
    cout << "choose algorithm: (0)bubble sort or (1)selection sort: ";
    cin >> sortMethod;

    if (sortMethod == 1) {
        cout << "selection sort" << endl;
        selectionSort(arr, size, sortOrder);
    }
    else if (sortMethod == 0) {
        cout << "bubble sort" << endl;
        bubbleSort(arr, size, sortOrder);
    }

    printArrayValues(arr, size);

    delete []arr;
    return 0;
}

int * createArray(int size) {
    // initialized with random values from 0 to 1500
    int *p = new int[size];
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        p[i] = rand() % 1500;
    }
    return p;
}

void swapTwoValues(int* a, int* b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// void fillArrayWithValues(int arr[], int size) {
//     cout << "input " << size << " values: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
// }

void printArrayValues(int arr[], int size) {
    cout << "print: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size, int order) {
    bool swapped = true;

    while(swapped) {
        swapped = false;
        for (int i = 1 ; i < size; i++) {
            if (order == 1 && arr[i-1] > arr[i]) {
                // swapTwoValues(arr[i-1], arr[i]);
                swapTwoValues(&arr[i-1], &arr[i]);
                swapped = true;
            }
            else if (order == 0 && arr[i-1] < arr[i]) {
                swapTwoValues(&arr[i-1], &arr[i]);
                swapped = true;
            }
        }
    }
}

void selectionSort(int arr[], int size, int order) {

    for (int i = 0; i < size; i++) {
        int limit = i;
        for (int j = i+1; j < size; j++) {
            if (order == 1 && arr[j] < arr[limit])
                limit = j;
            else if (order == 0 && arr[j] > arr[limit])
                limit = j;
        }

        if (limit != i)
            swapTwoValues(&arr[limit], &arr[i]);
    }
}
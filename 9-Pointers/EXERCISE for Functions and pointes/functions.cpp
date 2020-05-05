#include <iostream>
using namespace std;

//void multiplyBy(int &, int);
int * multiplyBy(int *, int);
void multiplyArrayBy(int *, int, int);

int main()
{
    int a = 10;
    int *b = multiplyBy(&a, 5);

    cout << a << endl;  //50
    cout << *b << endl; //50

    *b = 999;
    cout << a << endl;  //999
    cout << *b << endl; //999

    int array[10];
    int len = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < len; i++) {
        array[i] = i;
        cout << "array [" << i << "] = " << array[i] << endl;
    }

    multiplyArrayBy(&array[0], 5, len); // &array[0] == array
    for (int i = 0; i < len; i++) {
        cout << "array [" << i << "] = " << array[i] << endl;
    }

    return 0;
}

int * multiplyBy(int *var, int amount)
{
    //int * var = &a;
    *var =  *var * amount;
    return var;
}

void multiplyArrayBy(int *array, int amount, int sizeOfArray)
{
    while(sizeOfArray--)
        array[sizeOfArray] *= amount;
}

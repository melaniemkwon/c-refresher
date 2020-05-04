#include <iostream>
using namespace std;

main()
{
    // address, value
    int var = 3;
    cout << &var << endl;
    cout << *&var << endl;

    // address, value
    int *p = &var;
    cout << "p " << p << endl;
    cout << "*p " << *p << endl;

    *p = 20;

    // 20, 20
    cout << "var " << var << endl;
    cout << "*p " << *p << endl;

    int otherVar = 99;
    p = &otherVar; // reassign pointer

    // 20, 99
    cout << "var " << var << endl;
    cout << "otherVar " << otherVar << endl;
    cout << "*p " << *p << endl;

    // this is a pointer that has to be initialized when defined,
    // because it cannot change after defining the thing that it is pointing to (address)
    int * const p_const = &var;
    // p_const = &otherVar; // error: assignment of read-only variable

    // this is a pointer that cannot change the value that is under address its pointing to.
    const int * p_2 = &otherVar;

    // this is a pointer that cannot change the value that is under address its pointing to
    // and also it cant change the address
    const int * const p_3 = &otherVar;

    cout << "-----------------------" << endl;

    int ordinary_var = 10;
    int *ordinary_p = &ordinary_var;

    cout << "ordinary_var: " << ordinary_var << endl;   //integer value
    cout << "&ordinary_var: " << &ordinary_var << endl; //address
    cout << "ordinary_p: " << ordinary_p << endl;       //address
    cout << "*ordinary_p: " << *ordinary_p << endl;     //integer value from pointed place (ordinary_var)
    cout << "&ordinary_p: " << &ordinary_p << endl;     //address of pointer itself

    int ** p_pointing_to_address_of_pointer = &ordinary_p;
    cout << "p_pointing_to_address_of_pointer: " << p_pointing_to_address_of_pointer << endl;
}

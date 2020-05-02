#include <iostream>
#include <math.h>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void exponentiation();
void chooseOperation(char c);

struct inputs {
    int x, y;
};
inputs getInputs() {
    int x, y;
    cout << "Enter two numbers: " << endl;;
    cin >> x;
    cin >> y;
    return inputs{x, y};
}

main()
{
    while(true) {
        char op;
        cout << "Choose an operation (+, -, *, /, ^): ";
        cin >> op;
        chooseOperation(op);
    }
}

void chooseOperation(char c) {
    switch (c)
    {
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case '^':
            exponentiation();
            break;
        default:
            cout << "Invalid choice." << endl;
    }
}

void addition() {
    inputs blah = getInputs();
    cout << blah.x << " + " << blah.y << " = " << blah.x + blah.y;
}

void subtraction() {
    inputs blah = getInputs();
    cout << blah.x << " - " << blah.y << " = " << blah.x - blah.y;
}

void multiplication() {
    inputs blah = getInputs();
    cout << blah.x << " * " << blah.y << " = " << blah.x * blah.y;
}

void division() {
    inputs blah = getInputs();
    cout << blah.x << " / " << blah.y << " = " << blah.x / blah.y;
}

void exponentiation() {
    inputs blah = getInputs();
    cout << blah.x << " ^ " << blah.y << " = " << pow(blah.x, blah.y);
}

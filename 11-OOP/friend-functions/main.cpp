#include <iostream>
#include "position.h"

using namespace std;

void setX(Position &, int);
int main()
{
    Position dog(10, 50);

    dog.getPosition();
    setX(dog, 9999);  // friend function can set private variables
    dog.getPosition();

    const Position house(100, 200);

    house.getPosition();
//    house.setPosition(444, 444);

    return 0;
}
void setX(Position &obj, int value)
{
    obj.x = value;
}

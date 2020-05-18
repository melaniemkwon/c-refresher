#include <iostream>
#include "farm.h"

using namespace std;

void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);

int main()
{
    // // Animal animal;
    // Dog dog;
    // Cat cat;
    // Cow cow;

    // // cout << animal.getVoice() << endl;
    // cout << dog.getVoice() << endl;
    // cout << cat.getVoice() << endl;
    // cout << cow.getVoice() << endl;

    // Animal *p = &dog;
    // cout << p->getVoice() << endl; //if Animal's getVoice is not declared virtual
    //                                // this would be 'woof', not 'woof DO'

    // cout << "-----------------voiceOfAnimal" << endl;
    // // voiceOfAnimal(&animal);
    // voiceOfAnimal(&cat);  //by pointer
    // voiceOfAnimal(cow);   //by reference

    cout << "-----------------virtual destructors" << endl;
    Dog dog;

    Dog *dog2 = new Dog;
    delete dog2;

    Animal *dog3 = new Dog; //NOTE: be sure to declare base class destrutor as virtual
    delete dog3;

    return 0;
}

void voiceOfAnimal(Animal *p)
{
    cout << p->getVoice() << endl;
}

void voiceOfAnimal(Animal &p)
{
    cout << p.getVoice() << endl;
}
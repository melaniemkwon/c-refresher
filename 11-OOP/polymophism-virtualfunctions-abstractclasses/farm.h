#ifndef __FARM_H__
#define __FARM_H__

#include <iostream>
using namespace std;

class Animal
{
    protected:
        string voice;
    public:
        Animal();
        virtual ~Animal();

        // virtual string getVoice() { return voice; };
        virtual string getVoice() = 0; //make class abstract
};

class Dog : public Animal
{
        string sign;
    public:
        Dog();
        ~Dog();
        string getVoice() { return voice + " " + sign; };
};

class Cat : public Animal
{
        string sign;
    public:
        Cat();
        ~Cat();
        string getVoice() { return voice + " " + sign; };
};

class Cow : public Animal
{
        string sign;
    public:
        Cow();
        ~Cow();
        string getVoice() { return voice + " " + sign; };
};

#endif // __FARM_H__

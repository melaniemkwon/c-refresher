#include "farm.h"

Animal::Animal()
{
    voice = "default value";
}

Animal::~Animal()
{
    cout << "base class destructor" << endl;
}

Dog::Dog()
{
    sign = "DO";
    voice = "woof";
}

Dog::~Dog()
{
    cout << "sub class destructor. dog" << endl;
}

Cat::Cat()
{
    sign = "CA";
    voice = "meow";
}

Cat::~Cat()
{
    cout << "sub class destructor. cat" << endl;
}

Cow::Cow()
{
    sign = "CO";
    voice = "gab tihs uoy ,nairB eid dna eloh a ni og";
}

Cow::~Cow()
{
    cout << "sub class destructor. cow" << endl;
}
#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED

class PersonalData
{
    private:
        short age;
        int *p;
    public:
        PersonalData();
        PersonalData(short);
        ~PersonalData();
        void setAge(int);
        short getAge() {return age;}
};

#endif

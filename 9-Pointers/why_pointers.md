### Why do we need pointers?

1) speed, when you want to deallocate something not needed

    a) for example in games (we don't need to see things that are not visible etc.)

2) when you want to change value of variable through function argument

3) many libraries you gonna use requires sending pointers

4) device drivers

5) some structure algorithms like two-link list

6) when you don't know how many variables are needed and you need to dynamically allocate memory

Question:
```
int *p = new int;
*p = 50;
delete p;
*p = 20; //why is this wrong? why program might compile without errors?
```

Answer:
C++ gives you lots of power that allows you to do things that shouldn't be allowed.

When you 'delete' (free) the memory that was reserved dynamically by your program that was pointed by the pointer it means your program doesn't have rights to access that place anymore. (line 3)

What does it mean?

Well on your computer lots of programs run in the background. Lots of them reserve memory from RAM like you do. And because you freed memory it is a sign that the freed place by you is again available for all other programs.

If you change the value of the place in memory that doesn't belong to you, you could make other programs to not work properly. (line 4) If other program had reserved the place of memory you want to change value at your program would crash. Because it would be a violation of space of another program. And I'm sure you do not want your program to crash.

Sometimes memory won't be reserved by anybody and you might not see an error. (That's why program might sometimes work). But don't do things like that because it leads to problems.

Pointers give lots of power but with the power comes responsibility. Other languages don't have 'visible' pointers to programmers which makes programming a bit easier for beginners and even advanced programmers. We are merely humans and we tend to make errors. Errors connected to pointers are one of the hardest to spot in big projects.

+++++++++++++++++++++++++++++++++++++++++++++++

It's important to notice that 'asterisk' (*) can be used for two operations:

1) declaration
2) extracting value from the place pointer is pointing to

Take into consideration that when you write

`int *pSample;`

it means you are declaring a pointer that can hold an address.

but when you do something like that

`cout << *pSample << endl;`

You are taking the VALUE that is HOLD under the address that pSample is pointing to.

Read these what I wrote here a few times. It's really important to notice that asterisk which is this sign: '*' has different meaning while declaring the variable and a different meaning when sending the value on output using cout. In first case scenario it means you are declaring the pointer in second scenario you are taking the value under the address on output.

This is unfortunately how it works and it is the fault of C++ creator.

++++++++++++++++++++++++++++++++++++++++++++++++

Question:
(...) While using pointers with character arrays in the following way:

```
char my_array[ ] =  "hamburgers";

char  *p = my_array;

cout<<p<<endl;
```

The output is: hamburgers

Which would mean that the pointer is storing a complete sequence of characters whereas a pointer is supposed to store the address of a memory location only. I understand that unlike integer arrays (where the name of the array is the address of first element of the array) the name of a character array is the complete sequence of characters itself.

But how can a pointer store something other than an address?

Answer:
The pointer is storing only the address of a memory location of first character.

However cout is something what is called an object (you will learn about object and classes in future). This object overloads how operator "<<" works against char pointer. By overload I mean it changes its behaviour.

When operator "<<" is used with cout against char pointer like that:

```
char my_array[ ] =  "hamburgers";
char  *p = my_array;
cout<<p<<endl;
```

 it will print characters from the place in memory the pointer is pointing to. In our situation it's from character 'h'. Then it print 'a'. Then 'm' and so on.

How does he know when to end?

There is always invisible character called ending character and it looks like that: '/0'. When that character is met it is a signal to stop printing characters. That character '/0' is added automatically at the end when you use quotes between a word like that "hamburgers".

You can add it manually too. Check it out by for example doing something like that:

```
char my_array[ ] =  "ham\0burgers";
char  *p = my_array;
cout<<p<<endl;
You will notice that only 'ham' is printed out.
```

++++++++++++++++++++++++++++++++++++++++++++++++

You need to remember that asterisk and ampersand has a few meanings in C++ and C.

They have different meaning while declaring the variable:

`int *a;`

`int &a;`

and different meaning while using the variable in the expression like for example

`cout << *a;`

`cout << &a;`

In the first occurrence (when declaring variable) asterisk is telling compiler that you are declaring pointer. Ampersand tells compiler that you are declaring reference.

When you use asterisk in expression like cout you get the value under the address that the pointer is pointing to.

When you use ampersand in expression you just get address of variable.

Reference variable is just a normal variable that allows you to refer to another variable with different name.

Pointer is a variable that can hold addresses of other variables. So the value of every pointer is always an address.

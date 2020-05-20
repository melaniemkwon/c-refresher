#include <iostream>

// using namespace std;

namespace A
{
    int a = 20;
    int b = 21;
}
namespace B
{
    int a = 99;
}
namespace mySpace
{
    class MyNewLine
    {
            std::string text;
        public:
            MyNewLine(std::string text = "\n\n\n") { this->text = text;}
            std::string toString()
            {
                return text;
            }
    };

    std::ostream & operator<<(std::ostream & out, MyNewLine & o)
    {
        return out << o.toString();
    }
    MyNewLine endl;
}

int a = 3;

using namespace A;
using namespace mySpace;
int main()
{
    // int a = 1;
    // cout << a << endl;
    // cout << ::a << endl;
    // cout << A::a << endl;
    // cout << B::a << endl;
    // cout << b << endl;  // from using namespace A

    std::cout << "mySpace " << mySpace::endl.toString();
    std::cout << "this is text: " << endl;

    return 0;
}

#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
};
class Child:public Base
{
public:
child(){cout<<"construct Child object\n";}
~child(){cout<<"destruct Child object\n;}
};
int main(int argc, char *argv[])
{
    cout<<"*Create Object child"<<end;
    Child child;
    return 0;
}
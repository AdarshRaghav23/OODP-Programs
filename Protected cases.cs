#include<iostream>
using namespace std;
class Base
{
private:
    int 

public:
    int b;

protected:
    int c;

public:
    void init()
    {
        a = 10;
    }
};

class Derived : public Base
{
private:
    int d;

public:
    void initD()
    {
        b = 20;
        c = 30;
        d = 40;
    }

    void display()
    {
        cout << b << " " << c << " " << d;
    }
};

int main()
{
    Derived obj;
    obj.init();
    obj.initD();
    obj.display();
}
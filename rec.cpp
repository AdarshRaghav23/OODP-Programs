#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    // Parameterized Constructor
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    // Function to compute and display area
    void displayArea()
    {
        float area = length * breadth;
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main()
{
    Rectangle r(10, 5);   // You can give any values
    r.displayArea();

    return 0;
}

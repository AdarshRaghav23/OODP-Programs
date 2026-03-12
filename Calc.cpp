#include<iostream>
using namespace std;
class AreaCalculator
{
public:
  int area(int side)
  {
    return side*side;
  }
int area(int length,int breadth)
  {
    return length*breadth;
  }
double area(double radius)
  {
    return 3.14*radius*radius;
  }
};
int main(){
    AreaCalculator obj;
    cout<<"Area of square:"<<obj.area(5)<<endl;
    cout<<"Area of rectangle:"<<obj.area(4,6)<<endl;
    cout<<"Area of circle:"<<obj.area(2.5)<<endl;
    return 0;
}
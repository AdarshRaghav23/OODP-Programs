#include<iostream>
using namespace std;
class OperOverLoad
{
      private:
          int num;
      public:
        OperOverLoad(int n)
        {
                num=n;
        }   
        void operator++()
        {
                 num=num+1;
        }
        void display()
        {
                 cout<<"The Count is:"<<num;
        }
};
int main()
{
    OperOverLoad ov(10);
    ov.display();
    ov.display();
    return 0;
}
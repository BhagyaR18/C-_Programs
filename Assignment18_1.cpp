#include<iostream>
using namespace std;

class Demo
{
    public:
        
    void fun(int *p)
    {
        cout<<"First Destination";
    }
    void fun(float *p)
    {
        cout<<"Second Destination";
    }
    void fun(int no)
    {
        cout<<"Third Destination";
    }
};

int main()
{
    int no = 11;
    float f = 3.14;

    Demo obj();

    obj.fun(no);
    obj.fun(&no);
    obj.fun(&f);
    return 0;
}
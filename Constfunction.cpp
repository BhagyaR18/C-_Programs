#include<iostream>
using namespace std;

class Demo
{
    int A;
    int B;
    const int c;
    const int D;
    
    Demo() : c(11), D(21)
    {
        A = 0;
        B = 0;
    }
    Demo(int i, int j, int k, int l) : C(k), D(l)
    {
        A = i;
        B = j;
    }
    void fun()
    {
        A++;        //A
        B++;        //A
   //     C++;
   //     D++;
    }
    void gun() const
    {
 //           A++;       //NA
 //           B++;       //NA
 //         C++;
 //         D++;
    }
    
};

int main()
{
    Demo obj1(11,21,51,101);
    const Demo obj2(11,21,51,101);

    obj1.fun();
    obj1.gun();    

    obj2.fun();
    obj2.gun();


return 0;
}

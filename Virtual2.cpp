#include<iostream>
using namespace std;

class Base
{
    public:
        int A, B;

        virtual void Fun ()   //Base address of text class 1000
        {
            cout<<"Inside Fun of Base"<<"\n";
        }
        virtual void Gun()    //2000
        {
            cout<<"Inside Gun of Base"<<"\n";
        }
        virtual void Sun() //3000
        {
            cout<<"Inside Sun of Base"<<"\n";
        }

};

class Derived : public Base
{
    public:
        int X, Y;

     void Fun ()   //4000
        {
            cout<<"Inside Fun of Derived"<<"\n";
        }
        void Gun()    //5000
        {
            cout<<"Inside Gun of Derived"<<"\n";
        }
        void Sun() //6000
        {
            cout<<"Inside Sun of Derived"<<"\n";
        }
};

int main()
{
    cout<<"Size of Base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
    Base *bp = new Derived;         //No Casting

    bp->Fun();
    bp->Gun();
    bp->Sun();
    return 0;
}


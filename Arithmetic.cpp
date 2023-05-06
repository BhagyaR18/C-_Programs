#include<iostream>
using namespace std;

class Arithmetic
{
    private:

           //charactristics

       int No1;
       int No2;

    public:

             //behaviours

        Arithmetic() //defalut constuctor
        {
            No1 = 0;
            No2 = 0;
        }
        Arithmetic(int A, int B) //parameterised connstuctor
        {
            No1 = A;
            No2 = B;
        }
        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }
        int Substraction()
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }
};
int main()
{
    Arithmetic obj1(10,7);
    Arithmetic obj2;

    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition is :"<<Ret<<"\n";

    Ret = obj1.Substraction();
    cout<<"Substraction is :"<<Ret<<"\n";

    return 0;

}
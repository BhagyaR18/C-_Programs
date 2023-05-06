#include<iostream>
using namespace std;

class Demo
{
    public:
        int Addition(int No1, int No2)              // Addition
        {
            cout<<"Addition of 2 Intergers"<<"\n";
            return No1 + No2;
        }
        int Addition(int No1, int No2, int No3)
        {
            cout<<"Addition of 3 Intergers"<<"\n";
            return No1 + No2 + No3;
        }
        float Addition(float No1, float No2)
        {
            cout<<"Addition of 2 Floats"<<"\n";
            return No1 + No2;
        }
        double Addition(double No1, double No2)
        {
            cout<<"Addition of 2 Doubles"<<"\n";
            return No1 + No2;
        }
};
int main()
{
    Demo obj;
    int iRet = obj.Addition(10,11);
    cout<<"The Addition of Intergers :"<<iRet<<"\n";

    iRet = obj.Addition(10,11,51);
    cout<<"The Addition of Intergers :"<<iRet<<"\n";

    float fRet = obj.Addition(10.20f,11.11f);
    cout<<"The Addition of Float :"<<fRet<<"\n";

    double dRet = obj.Addition(10,11);
    cout<<"The Addition of Double :"<<dRet<<"\n";
    
    return 0;
}
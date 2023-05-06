#include<iostream>
using namespace std;

float Area(float Radious, float PI)
{
    float Ans = 0.0f;

    Ans = PI * Radious * Radious;

    return Ans;
}
int main()
{

    float R = 0.0;
    float fRet = 0.0f;

    cout<<"Enter the radious : "<<"\n";
    cin>>R;

    fRet = Area(R,3.14f);

    cout<<"Area of circle is :"<<fRet<<"\n";
    return 0;
}
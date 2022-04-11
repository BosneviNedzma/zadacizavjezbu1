#include<iostream>
#include<cmath>
using namespace std;
int check_ArmstrongNumber(int num)
{
     if(num>0)
    return (pow(num%10,3) +check_ArmstrongNumber(num/10));
}
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
   if(check_ArmstrongNumber(num)==num)
    cout<<"It is an Armstrong Number";
   else
    cout<<"It is not an Armstrong Number";
}

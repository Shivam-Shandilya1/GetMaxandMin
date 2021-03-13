#include<iostream>
using namespace std;
void getMaxandMin(int number[],int sizes,int*minm,int*maxm)
{

     for(int i=0;i<sizes;i++)
     {if(*maxm<number[i])
     {
         *maxm = number[i];
     }
     if(*minm>number[i])
     {
         *minm = number[i];
     }
     }
}
int main()
{
    int number[4];


    for(int i=0;i<4;i++)
    {
        cout<<"Number : ";
        cin>>number[i];
    }
     int maxm = number[0];
    int minm = number[0];
    for(int i=0;i<4;i++)
    {
        cout<<number[i]<< "  ";
    }
    getMaxandMin(number,4,&minm,&maxm);

cout<<"Max number is:- "<<maxm <<endl;
cout<<"Min number is:- "<<minm<<endl;
    system("pause>0");
}

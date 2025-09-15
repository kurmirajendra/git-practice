#include<iostream>
using namespace std;
int printPattern(int n)
{
    int rows=3;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i==1 && j%4==1)||(i==2 && j%2==0)||(i==3 && j%4==3))
            {
                cout<<j<<" ";
            }else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"\nEnter the number of elements: ";
    cin>>n;
    printPattern(n);
    return 0;
}

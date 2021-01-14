#include <iostream>
using namespace std;
int main()
{   
    int x;
    cout<<"Please enter a positive integer:";
    cin>>x;
    cout<<"Number "<<x<<" Factors :";
    
    int a=1;
    while(a<=x)
    {
        if(x%a==0)
        cout<<a<<" ";
        a++;
    }
    cout<<endl;
    return 0;
}
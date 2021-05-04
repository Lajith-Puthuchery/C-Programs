#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the perimeter"<<endl;
    cin>>n;
    if (n%4==0)
    {
        cout<<n/4;

    }
    else 
    { 

    cout<<(n/4-1);
    }

}

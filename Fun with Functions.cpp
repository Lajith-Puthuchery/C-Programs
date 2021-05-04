#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n,len,i=0;
    char string[100][100];
    cin>>n;
    while(n--)
    {
        cin>>string[i];
        len=strlen(string[i]);
        cout<<len<<endl;
    }
}

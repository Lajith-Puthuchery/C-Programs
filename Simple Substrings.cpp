#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int n,i,j,len;
    char str[100][100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
        len=strlen(str[i]);
        if(len==2)
        {
            cout<<str[i]<<endl;
        }
        else if(len%2==1)
        {
            continue;
        }
        else if(len%2==0)
        {
            cout<<str[i][0];
            for(j=1;j<len;j=j+2)
            {
                cout<<str[i][j];
            }
            cout<<endl;
        }
        else 
        {
            continue;
        }



    }
    return 0;

}
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a[100],n,i,j,count1=1,k,count2=0,count[10],m,max;
    cout<<"n"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        count1=1;
     for(j=i+1;j<n;j++)
     {
         count2=1;
         if(a[j]==a[i])
         {
             count1++;
         }
         else 
         {
             for(k=j+1;k<n;k++)
             {
                 if(a[j]==a[k])
                 {
                     count2++;
                     if(count1==count2)
                     {
                         count[m]=2*count1;
                     }
                 }

             }
             
         }
         if(count2==count1)
         {
         count[m]=2*count1;
         m++;
         }
     }



    }
    max=count[0];
    for(i=1;i<m;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
        }
    }
    cout<<max<<endl;
}
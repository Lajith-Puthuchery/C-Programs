#include <iostream>
 using namespace std;

 int main()
 {
     int n,k,i=1,Time_in_hand,Assign_time=0;
     cout<<"Enter the values for n and k";
     cin>>n>>k;
     Time_in_hand=240-k;
     while(i<=n)
     {
         Assign_time=Assign_time+5*i;
         if(Assign_time>=Time_in_hand)
         {
             break;
         }
         
         i++;

     }
     cout<<i;
     return 0;

 }
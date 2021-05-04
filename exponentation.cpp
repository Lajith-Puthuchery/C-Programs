#include <iostream>
#include <cmath>

using namespace std;

int result(int n,int m)
{
   string power= to_string(pow(2,n));
   cout<<power;
   int final_pow;
   for(int i=0;i<power.size();i++)
   {
       final_pow=final_pow*10 + (int)power[i] - '0';
       
   }
        
}

int main()
{
    int m,n;
    cin>>n>>m;
    cout<<result(n,m);
    return 0;
}
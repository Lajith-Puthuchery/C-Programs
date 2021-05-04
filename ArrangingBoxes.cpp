#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int result(vector<int> b,int n)
{
 int sim_count_high=1,sim_count=1;
 b.push_back(0);
 for(int i=0;i<n;i++)
 {
     if (b[i]==b[i+1])
     {
     sim_count++;
     }
     else
     {
         if(sim_count>sim_count_high)
         sim_count_high=sim_count;
         sim_count=1;
         
     }    
 }
    return sim_count_high;
}

int main()
{
    vector<int> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        a.push_back(input);
    }
    sort(a.begin(),a.end());
    cout<<result(a,n);
}    
    
    

    

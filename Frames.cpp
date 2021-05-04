#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>

using namespace std;

int frames(vector<int> b,int n)
{
    vector<int>::iterator ptr;
    int total=0,sim_count=1;
    b.push_back(0);
    for(int j=0;j<=n;j++)
    {
    
      if(b[j]==b[j+1])
      {
        
        sim_count++;
      }
      else
      {
          total+=sim_count/2;
          sim_count=1;
      }
      
    }
    return total/2;
}

int main()
{
    int n;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        a.push_back(input);  
    }
    sort(a.begin(),a.end());
    cout<<frames(a,n);


}
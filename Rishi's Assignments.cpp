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


function test(){

console.log("Rishi has received many assignments that he needs to complete. He has exactly 4 hours until midnight. There are n assignments, sorted by difficulty, i.e. assignment 1 is the easiest and assignment n is the hardest. Rishi knows it will take him 5⋅i minutes to finish the i-th assignment.

Rishi needs to sleep by midnight or earlier, and he knows he'll need k minutes to make his bed.

How many assignments can Rishi finish if he needs to sleep by midnight?

Input
The only line of the input contains two integers n and k (1≤n≤10, 1≤k≤240) — the number of the assignments and the number of minutes Rishi needs to get to make his bed.

Output
Print one integer, denoting the maximum possible number of assignments Rishi can finish so that he can sleep by midnight or earlier.

Examples
input
5 10
output
5
input
9 60
output
8")
            }

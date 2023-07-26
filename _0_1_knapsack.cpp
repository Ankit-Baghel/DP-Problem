#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int n,int W)
{
   if(n==0|| W==0)
   {
    return 0;
   }

   if(wt[n-1]<= W)
   {
    return max(val[n-1]+ knapsack(wt,val,n-1,W-wt[n-1]),knapsack(wt,val,n-1,W));
   }
   else if(wt[n-1]>W)
    {
        return knapsack(wt,val,n-1,W);
    }
}

int main()
{
    int wt[]={4,5,1};
    int profit[]={1,2,3};
    int N =3;
    int W = 4;
    int ans = knapsack(wt,profit,N,W);
    cout<<ans<<endl;
}

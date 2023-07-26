#include<iostream>
#include<bits\stdc++.h>
using namespace std;

// struct Item{
//    int value;
//    int weight;
// };

bool mysort(int a, int b)
{
    // if(a==5 || b == 5)
    //  return true;
    // else
    return a>b;


}
int main()
{
   int n;
//    cin>>n;
  
  vector<int> v = {2,3,1,2,3,4,5,6,7,5,4,6};

  sort(v.begin(),v.end(),mysort);
  for(auto i: v)
  cout<<i<<" ";

}

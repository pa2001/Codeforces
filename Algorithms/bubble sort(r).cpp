#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&v,int n)
{
  if(n==1)
  return;
  for(int i=0;i<n-1;i++)
  {
      if(v[i]>v[i+1])
      swap(v[i],v[i+1]);
      solve(v,n-1);
  }
}
int main()
{
  int n;
  cin>>n;
  int a;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    v.push_back(a);
  }
  solve(v,n);
  for(int i=0;i<n;i++)
  cout<<v[i]<<" ";
}

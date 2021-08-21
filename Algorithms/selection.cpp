#include<bits/stdc++.h>
using namespace std;
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
  int index=-1;
  for(int i=0;i<n;i++)
  {
    index=i;
    for(int j=i+1;j<n;j++)
    {
      if(v[index]>v[j])
      index=j;
    }swap(v[i],v[index]);
  }
  for(int i=0;i<n;i++)
  cout<<v[i]<<" ";
}
time complexity:O(n^2)
space Complexity:O(1)
not stable

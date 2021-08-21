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
  for(int i=0;i<n-1;i++)
  {
    index=n-i-1;
    for(int j=0;j<index;j++)
    {
      if(v[j]>v[j+1])
      swap(v[j],v[j+1]);
    }
  }
  for(int i=0;i<n;i++)
  cout<<v[i]<<" ";
}
time complexity:O(n^2)
space complexity:O(1)
stable

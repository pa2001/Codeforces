#include<bits/stdc++.h>
using namespace std;
struct ele{
  int count;
  int val;
  int index;
};
bool cmp1(struct ele a,struct ele b)
{
  if(a.count!=b.count)
  return (a.count<b.count);
  else
  return (a.index>b.index);
}
bool cmp2(struct ele a,struct ele b)
{
  return (a.val<b.val);
}
int main()
{
  int n,a;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    v.push_back(a);
  }
  struct ele e[n];
  for(int i=0;i<n;i++)
  {
    e[i].index=i;
    e[i].count=0;
    e[i].val=v[i];
  }
  stable_sort(e,e+n,cmp2);
  e[0].count=1;
  for(int i=1;i<n;i++)
  {
    if(e[i].val==e[i-1].val)
    {
      e[i].count=e[i-1].count+1;
      e[i-1].count=-1;
      e[i].index=e[i-1].index;
    }
    else
    e[i].count=1;
  }
  stable_sort(e,e+n,cmp1);
  int index=0;
  for(int i=n-1;i>=0;i--)
  {
    if(e[i].count!=-1)
    {
      for(int j=0;j<e[i].count;j++)
      v[index++]=e[i].val;
    }
  }
  for(int i=0;i<n;i++)
  cout<<v[i]<<" ";
}
time complexity:O(n)+O(nlogn)

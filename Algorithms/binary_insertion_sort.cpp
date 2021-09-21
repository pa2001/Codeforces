#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>&v,int l,int r,int item)
{
  if(l>=r)
  return (item>v[l]?l+1:l);
  int mid=(l+r)/2;
  if(item==v[mid])
  return mid+1;
  if(item>v[mid])
  return binary_search(v,mid+1,r,item);
  return binary_search(v,l,mid-1,item);
}
void insertion_sort(vector<int>&v)
{
  for(int i=1;i<v.size();i++)
  {
    int item=v[i],j=i-1;
    int pos=binary_search(v,0,j,item);
    while(j>=pos)
    {
      v[j+1]=v[j];
      j--;
    }
    v[j+1]=item;
  }
}
void print(vector<int>v)
{
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
  cout<<endl;
}
int main()
{
  int n;
  cin>>n;
  vector<int>v;
  int a;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    v.push_back(a);
  }
  insertion_sort(v);
  print(v);
}

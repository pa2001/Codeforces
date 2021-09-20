#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&v,int n,int i)
{
    int parent=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&&v[left]>v[parent])
    parent=left;
    if(right<n&&v[right]>v[parent])
    parent=right;
    if(parent!=i)
    {
      swap(v[i],v[parent]);
      heapify(v,n,parent);
    }
}
void heap_sort(vector<int>&v,int n)
{
  for(int i=n/2-1;i>=0;i--)
  {
    heapify(v,n,i);
  }
  for(int i=n-1;i>0;i--)
  {
    swap(v[0],v[i]);
    heapify(v,i,0);
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
  heap_sort(v,v.size());
  print(v);
}

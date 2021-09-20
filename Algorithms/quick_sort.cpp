#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&v,int l,int r)
{
    int pivot=v[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
      if(v[j]<pivot)
      {
        i++;
        swap(v[j],v[i]);
      }
    }swap(v[i+1],v[r]);
    return i+1;
}
void quick_sort(vector<int>&v,int l,int r)
{
  if(l<r)
    {
        int p=partition(v,l,r);
        quick_sort(v,l,p-1);
        quick_sort(v,p+1,r);
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
  quick_sort(v,0,v.size()-1);
  print(v);
}

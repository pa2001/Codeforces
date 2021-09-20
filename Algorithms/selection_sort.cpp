#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&v)
{
  for(int i=0;i<v.size();i++)
  {
    int index=i;
    for(int j=i+1;j<v.size();j++)
    {
      if(v[j]<v[index])
      index=j;
    }swap(v[i],v[index]);
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
  selection_sort(v);
  print(v);
}

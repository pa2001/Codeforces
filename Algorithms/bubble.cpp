#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>&v)
{
  for(int i=0;i<v.size();i++)
  {
    for(int j=0;j<v.size()-1;j++)
    {
      if(v[j+1]<v[j])
      swap(v[j],v[j+1]);
    }
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
  bubble_sort(v);
  print(v);
}

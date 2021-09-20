#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&v)
{
  for(int i=0;i<v.size();i++)
  {
    int k=v[i],j=i-1;
    while(j>=0&&v[j]>k)
    {
      v[j+1]=v[j];
      j--;
    }v[j+1]=k;
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

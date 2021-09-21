#include<bits/stdc++.h>
using namespace std;
void count_sort(vector<int>&v)
{
  int count[255],output[v.size()];
  memset(count,0,sizeof(count));
  for(int i=0;i<v.size();i++)
  count[v[i]]++;
  for(int i=1;i<255;i++)
  count[i]+=count[i-1];
  for(int i=0;i<v.size();i++)
  {
    output[count[v[i]]-1]=v[i];
    count[v[i]]--;
  }
  for(int i=0;i<v.size();i++)
  v[i]=output[i];
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
  count_sort(v);
  print(v);
}

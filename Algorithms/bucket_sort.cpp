#include<bits/stdc++.h>
using namespace std;
void bucket_sort(vector<float>&v)
{
  vector<float>b[v.size()];
  for(int i=0;i<v.size();i++)
  {
    int bi=v.size()*v[i];
    b[bi].push_back(v[i]);
  }
  for(int i=0;i<v.size();i++)
  sort(b[i].begin(),b[i].end());
  int index=0;
  for(int i=0;i<v.size();i++)
  {
    for(int j=0;j<b[i].size();j++)
    v[index++]=b[i][j];
  }
}
void print(vector<float>v)
{
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
  cout<<endl;
}
int main()
{
  int n;
  cin>>n;
  vector<float>v;
  float a;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    v.push_back(a);
  }
  bucket_sort(v);
  print(v);
}

#include<bits/stdc++.h>
using namespace std;
int get_max(vector<int>&v)
{
  int mx=INT_MIN;
  for(int i=0;i<v.size();i++)
  mx=max(mx,v[i]);
  return mx;
}
void count_sort(vector<int>&v,int n,int exp)
{
  int count[10],output[v.size()];
  memset(count,0,sizeof(count));
  for(int i=0;i<v.size();i++)
  count[(v[i]/exp)%10]++;
  for(int i=1;i<10;i++)
  count[i]+=count[i-1];
  for(int i=0;i<v.size();i++)
  {
    output[count[(v[i]/exp)%10]-1]=v[i];
		count[(v[i]/exp)%10]--;
  }
  for(int i=0;i<v.size();i++)
  v[i]=output[i];
}
void radix_sort(vector<int>&v)
{
  int m=get_max(v);
  for(int i=1;m/i>0;i*=10)
  count_sort(v,v.size(),i);
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
  radix_sort(v);
  print(v);
}

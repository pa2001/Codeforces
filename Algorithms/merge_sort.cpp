#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int l,int m,int r)
{
    int k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i]=v[l+i];
    for(int j=0;j<n2;j++)
        R[j]=v[m+1+j];
    int i=0;
    int j=0;
    k=l;
     
    while (i<n1&&j<n2)
    {
        if (L[i]<=R[j])
        {
            v[k]=L[i];
            i++;
        }
        else
        {
            v[k]=R[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        v[k]=L[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        v[k]=R[j];
        j++;
        k++;
    }
}
void merge_sort(vector<int>&v,int l,int r)
{
  if(l<r)
    {
        int m=l+(r-l)/2;
        merge_sort(v,l,m);
        merge_sort(v,m+1,r);
        merge(v,l,m,r);
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
  merge_sort(v,0,v.size()-1);
  print(v);
}

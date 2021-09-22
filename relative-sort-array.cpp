class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>m;
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++)
            m[arr1[i]]++;
        int index=0;
        for(int i=0;i<arr2.size();i++)
        {
            int x=m[arr2[i]];
            for(int j=0;j<x;j++)
                arr1[index++]=arr2[i];
        }
        for(auto x:m)
        {
            if(find(arr2.begin(),arr2.end(),x.first)==arr2.end())
            {
                int k=x.second;
                for(int i=0;i<k;i++)
                    arr1[index++]=x.first;
            }
        }
        return arr1;
    }
};

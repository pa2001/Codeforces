class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>m1,m2;
        for(int i=0;i<target.size();i++)
        {
            m1[target[i]]++;
            m2[arr[i]]++;
        }
        for(int i=0;i<target.size();i++)
        {
            if((m1.find(arr[i])==m1.end())||(m1[arr[i]]!=m2[arr[i]]))
                return false;
        }
        return true;
    }
};

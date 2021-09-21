class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>temp(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        unordered_map<int,int>m;
        m[nums[0]]=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
                m[nums[i]]=i;
            else
                m[nums[i]]=m[nums[i-1]];
        }
        for(int i=0;i<nums.size();i++)
            temp[i]=m[temp[i]];
        return temp;
    }
};

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d=arr[1]-arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(d>arr[i]-arr[i-1])
                d=arr[i]-arr[i-1];
        }
        vector<vector<int>>v;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(d==arr[i+1]-arr[i])
                v.push_back({arr[i],arr[i+1]});
        }return v;
    }
};

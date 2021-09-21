class Solution {
public:
    static bool sortcol(const vector<int>& v1,const vector<int>& v2) {
		return v1[1] > v2[1];
	}
    int maximumUnits(vector<vector<int>>&boxTypes,int truckSize){
        sort(boxTypes.begin(),boxTypes.end(),sortcol);
        int ans=0,height=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            int rem=truckSize-height;
            if(boxTypes[i][0]<=rem)
            {
                height+=boxTypes[i][0];
                ans+=boxTypes[i][0]*boxTypes[i][1];
            }
            else
            {
                ans+=(rem*boxTypes[i][1]);
                break;
            }
        }return ans;
    }
};

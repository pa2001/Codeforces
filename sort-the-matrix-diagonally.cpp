class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>&mat) {
        unordered_map<int,vector<int>>m;
        int n=mat.size(),k=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                m[i-j].push_back(mat[i][j]);
            }
        }
        for(int i=1-k;i<n;i++)
            sort(m[i].begin(),m[i].end());
        for(int i=n-1;i>=0;i--)
        {
            for(int j=k-1;j>=0;j--)
            {
                mat[i][j]=m[i-j].back();
                m[i-j].pop_back();
            }
        }return mat;
    }
};

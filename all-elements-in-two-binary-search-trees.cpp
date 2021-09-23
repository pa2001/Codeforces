/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>v;
    void inorder(TreeNode* root,vector<int>&v)
    {
        if(!root)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    void merge(vector<int>r1,vector<int>r2)
    {
        int i=0,j=0,k;
        while(i<r1.size()&&j<r2.size())
        {
            if(i<r1.size()&&j<r2.size())
            {
                if(r1[i]>r2[j])
                {
                    k=r2[j];
                    j++;
                }
                else
                {
                    k=r1[i];
                    i++;
                }
            }v.push_back(k);
        }
        while(i<r1.size())
            v.push_back(r1[i++]);
        while(j<r2.size())
            v.push_back(r2[j++]);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        inorder(root1,v1);
        inorder(root2,v2);
        merge(v1,v2);
        return v;
    }
};

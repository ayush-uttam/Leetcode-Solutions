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
    vector<vector<int>>res;
    vector<int>way;
    void path(TreeNode* root, int targetSum){
        if(!root)   return;
        way.push_back(root->val);
        targetSum-=root->val;
        if(!root->left&&!root->right){
            if(targetSum==0)    res.push_back(way);
        }
        else{
            path(root->left,targetSum);
            path(root->right,targetSum);
        }
        way.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        path(root,targetSum);
        return res;
    }
};
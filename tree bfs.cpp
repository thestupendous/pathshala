/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      //TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> v;
        while(!q.empty())
        {
            if(!q.front()){
                q.push(NULL);
                res.push_back(v);
                v.clear();
            }
            q.push(q.front()->left);
            q.push(q.front()->right);
            v.push_back(q.front()->val);
        }
        
        return res;
    }
};
int main(){}
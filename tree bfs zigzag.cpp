/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*> l,r;
        l.push(root);
        vector<vector<int>> res;
        vector<int> v;
        TreeNode* p=NULL;
        while(!l.empty() or !r.empty())
        {
            while(!l.empty())
            {
                p = r.top();
                r.push(p->left);
                r.push(p->right);
                v.push_back(p->val);
                r.pop();
            }
            res.push_back(v);
            v.clear();
            while(!r.empty())
            {
                p=l.top();
                l.push(p->right);
                l.push(p->left);
                v.push_back(p->val);
                l.pop();
            }
            res.push_back(v);
            v.clear();
        }
        return res;
    }
};
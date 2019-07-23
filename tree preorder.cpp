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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> v;
        if(!root) return v;
        st.push(root);
        TreeNode* p;
        while(!st.empty())
        {
            p = st.top();
            st.pop();
            v.push_back(p->val);
            if(p->right)
                st.push(p->right);
            if(p->left)
                st.push(p->left);
        }
        return v;
    }
};
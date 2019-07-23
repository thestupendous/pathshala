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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        stack<int> s2;
        vector<int> v;
        if(!root) return v;
        st.push(root);
        TreeNode* p;
        while(!st.empty())
        {
            p = st.top();
            st.pop();
            s2.push(p->val);
            v.push_back(p->val);
            if(p->left)
                st.push(p->left);
            if(p->right)
                st.push(p->right);
            
        }
        while(!s2.empty()) { v.push_back(s2.top()); s2.pop(); }
        return v;
    }
};
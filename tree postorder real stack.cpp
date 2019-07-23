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
        stack<pair<TreeNode*,int>> st;
        st.push({root,0});
        pair<TreeNode*,bool> t;
        std::vector<int> v;
        while(!st.empty())
        {
        	t = st.top();
        	if(t.second==0)
        	{
	        	st.pop();
	        	t.second = 1;
	        	st.push(t);
	        	if(t.first->right)
	    			st.push(t.first->right);
	    		if(t.first->left)
	    			st.push(t.first->left);
        	}
        	else
        	{
        		v.push_back(t.first->val);
        		st.pop();
        	}
        }

        return v;

    }
};
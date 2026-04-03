class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> temp1;
            for(int i=0;i<size;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(temp->left!=nullptr) q.push(temp->left); 
                if(temp->right!=nullptr) q.push(temp->right);
                temp1.push_back(temp->val); 
            }
            ans.push_back(temp1);
        }
        return ans;
    }
};
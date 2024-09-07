/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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

    void helper(TreeNode* root, vector<int> arr, vector<vector<int>> &ans)
    {
        if(root==nullptr)
        {
            return;
        }
        arr.push_back(root->val);

        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(arr);
        }

        helper(root->left, arr, ans);
        helper(root->right, arr, ans);
    }

    vector<vector<int>> solve(TreeNode* root)
    {
        vector<vector<int>> ans;

        if(root==nullptr)
        {
            return ans;
        }

        vector<int> arr;
        helper(root, arr, ans);

        return ans;
    }
    bool isSubPath(ListNode* head, TreeNode* root) 
    {
        //Brute force

        //getting all paths root to leaf
        vector<int> arr;
        ListNode* temp = head;

        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }

        vector<vector<int>> all;
        all = solve(root);

        for(int i=0;i<all.size();i++)
        {
            auto it = search(all[i].begin(), all[i].end(), arr.begin(), arr.end());
            if(it!=all[i].end())
            {
                return true;
            }
        }
        return false;
        
    }
};
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
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) 
    {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        
        ListNode* temp = head;
        
        int p=0;

        int top=0;
        int bottom = m-1;
        int left = 0;
        int right = n-1;
        
        while(top<=bottom && left<=right && temp!=nullptr)
        {
            for(int j=left;j<=right && temp!=nullptr;j++)
            {
                ans[top][j]=temp->val;
                temp=temp->next;
            }
            top++;
            for(int j=top;j<=bottom && temp!=nullptr;j++)
            {
                ans[j][right]=temp->val;
                temp=temp->next;
            }
            right--;
            
            for(int j=right;j>=left && temp!=nullptr;j--)
            {
                ans[bottom][j]=temp->val;
                temp=temp->next;
            }
            bottom--;
            
            for(int j=bottom;j>=top && temp!=nullptr;j--)
            {
                ans[j][left]=temp->val;
                temp=temp->next;
            }
            left++;
        }
        return ans;
    }
};
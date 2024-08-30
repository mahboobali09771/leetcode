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
    int len = 0;
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *curr = head, *Next = head;
        while(curr){
            len++;
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
       head =  reverseList(head);
        stack<int> st;
        vector<int> ans(len,0);
        int i = 0;
        while(head){
         while(st.size()>0 && head->val>=st.top()) st.pop();
         if(st.size()>0) ans[i] = st.top();
            st.push(head->val);
            head = head->next;
            i++;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
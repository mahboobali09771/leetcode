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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
       while(temp && temp->val == val){
           temp = temp->next;
       }
        head = temp;
        while(temp){
            if(temp->next && temp->next->val == val){
                temp->next = temp->next->next;
            }
            else temp = temp->next;
        }
        return head;
    }
};
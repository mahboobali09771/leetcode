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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* d = dummy;
            while(temp->val==0 && temp && temp->next){
              temp = temp->next;
                int sum = 0;
                while(temp->val!=0){
                    sum += temp->val;
                    temp = temp->next;
                }
                d->next = new ListNode(sum);
                d = d->next;
                
            }
        return dummy->next;
    }
};
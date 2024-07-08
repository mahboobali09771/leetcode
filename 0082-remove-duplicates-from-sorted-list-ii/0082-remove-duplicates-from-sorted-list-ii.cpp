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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
     ListNode* p = new ListNode(100);
        p->next = head;
        ListNode* head1 = p;
        while(p->next && p->next->next){
            ListNode* p1 = p->next;
            ListNode* p2 = p->next->next;
            if(p1->val==p2->val){
                ListNode* temp = p2;
                while(temp!=NULL && p1->val==temp->val){
                    temp= temp->next;
                }
                p->next = temp;
            }
            else{
                p = p->next;
            }
            
        }
        return head1->next;
    }
};
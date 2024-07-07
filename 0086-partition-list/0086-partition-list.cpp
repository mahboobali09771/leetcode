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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo =  new ListNode(200);
        ListNode* hi = new ListNode(300);
        ListNode* tempLo = lo;
        ListNode* tempHi = hi;
        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->val < x){
                tempLo->next = temp;
                temp = temp->next;
                tempLo = tempLo->next;
            }
            else{ // (temp->val >= x)
                tempHi->next = temp;
                temp = temp->next;
                tempHi = tempHi->next;
            }
           
        }
         tempLo->next =  hi->next;
            tempHi->next = NULL;
            return lo->next;
    }
};
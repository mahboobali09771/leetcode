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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL ) return head;
       ListNode* prev = NULL, *curr = head, *Next = head;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
}
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* r = reverseList(slow->next);
        int sum = 0;
        while(r){
             if(sum<(temp->val+r->val))  sum = temp->val+r->val;
             temp = temp->next;
             r = r->next;
        }
       return sum;
    }
};

// method 2
/* 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL ) return head;
       ListNode* prev = NULL, *curr = head, *Next = head;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
}
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        int n = 0;
        while(temp){
            temp = temp->next;
            n++;
        }
        temp = head;
        ListNode* temp1 = head;
        int i = n/2;
        while(i){
            temp1 = temp1->next;
            i--;
        }
        ListNode* r = reverseList(temp1);
        int sum = 0;
        while(r){
             if(sum<(temp->val+r->val))  sum = temp->val+r->val;
             temp = temp->next;
             r = r->next;
        }
       return sum;
    }
};
*/
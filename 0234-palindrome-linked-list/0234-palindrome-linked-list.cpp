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
    ListNode* reverseList(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode *prev = NULL, *curr = head, *Next = head;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
        
    }
    bool isPalindrome(ListNode* head) {
        // if the first half and second half are reverse of each other then it is a palindrom
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow is at the left middle / middle
        ListNode* newHead = reverseList(slow->next);
        ListNode* a = head;
        ListNode* b= newHead;
        while(b){
            if(a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        
        return true;
    }
};
/*
class Solution {
public:
    ListNode* reverseList(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode *prev = NULL, *curr = head, *Next = head;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
        
    }
    bool isPalindrome(ListNode* head) {
        ListNode* c = new ListNode(10);
        // deep copy of head
        ListNode* temp = head;
        ListNode* tempC = c;
        while(temp){  // TC = O(n) && SC = O(n)
            ListNode* node = new ListNode(temp->val);
            tempC->next = node;
            temp = temp->next;
            tempC = tempC->next;
        }
        c = c->next;
        c = reverseList(c); // TC = O(n)
        ListNode* a = head;
        ListNode* b = c;
        while(a){ // TC = O(n)
            if(a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};
*/
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
        ListNode *prev = NULL, *curr = head, *Next = head;
        // ListNode* prev = NULL;
        // ListNode* curr = head;
        // ListNode* Next = head;
       while(curr){
           Next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = Next;
       }
        return prev;
    }
};




// 2nd method TC = O(n*n)
/*
class Solution {
public:
    ListNode* getNodeAt(ListNode* head, int idx){
        ListNode* temp = head;
        for(int i=1;i<=idx;i++){
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        int n = 0;
        while(temp){
            temp = temp->next;
            n++;
        }
        int i = 0;
        int j = n-1;
       
        while(i<j){
        ListNode* left = getNodeAt(head,i);
        ListNode* right = getNodeAt(head,j);
            int t = left->val;
            left->val = right->val;
            right->val = t;
            i++;
            j--;
        }
        return head;
    }
};
*/
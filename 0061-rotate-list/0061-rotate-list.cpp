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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp = head;
        ListNode* tail = NULL;
        int len = 0;
        while(temp!=NULL){
            if(temp->next==NULL) tail = temp;
            temp = temp->next;
              len++;
        }
        k = k%len;
        if(k==0) return head;
        temp = head;
       int n = len - k;
        for(int i=1;i<n;i++){
            temp = temp->next;
        }
        tail->next = head;
        head = temp->next;
        temp->next = NULL;
        return head;
        
    }
};
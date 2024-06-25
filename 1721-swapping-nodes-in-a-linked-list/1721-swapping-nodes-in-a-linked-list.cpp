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

 // 1st method 
 class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        while(--k) temp = temp->next;
        ListNode* p1 = temp->next;
        ListNode* p2 = head;
        while(p1){
            p1 = p1->next;
            p2 = p2->next;
        }
        swap(temp->val,p2->val);
        return head;
    }
};

// class Solution {
// public:
//     ListNode* swapNodes(ListNode* head, int k) {
//         ListNode* temp = head;
//         int len = 0;
//         while(temp!=NULL){
//             len++;
//             temp = temp->next;
//         }
//         ListNode* first = head;
//         ListNode* second = head;
//         int m = len - k + 1;
//         for(int i=1;i<k;i++){
//             first = first->next;
//         }
//         for(int i=1;i<m;i++){
//             second = second->next;
//         }
//         swap(first->val,second->val);
//         return head;
//     }
// };
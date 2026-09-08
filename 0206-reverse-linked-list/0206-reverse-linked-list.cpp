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
        ListNode* newHead = nullptr;
        if(head == nullptr) return nullptr;
        if(head->next == nullptr) return head;
        ListNode* t1 = head;
        while(t1){
            ListNode* t2 = t1->next;
            t1->next = newHead;
            newHead = t1;
            t1 = t2;
        }
        return newHead;
    }
};
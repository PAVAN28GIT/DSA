class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       //reverse nodes using 2 pointers
        ListNode* prev =NULL;
        ListNode* curr =head;


        while(curr != NULL){
            ListNode* next = curr->next;        
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

// problem : https://leetcode.com/problems/rotate-list/

// consider 3 cases of k 
// if k == 0 then return head
// if k ==  multiple of len ... then rotating k times gives us same node
// if k > len , then rotating k%len gives same answer

// - now .. go to last element ...connect it to head. making loop
// - and now from head go len-k times... break link there.. and make next node as head
// - return new head



class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k== 0)return head;
    
        int len = 1;
        ListNode* temp = head;
        while(temp->next!=NULL){
            len++;
            temp =temp->next;
        }
        if(k%len == 0) return head;
        if(k>len) k = k%len;
        temp->next = head;  // making loop
        temp =temp->next;
        int n = len - k;
        while(n>1){
            temp = temp->next;
            n--;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};

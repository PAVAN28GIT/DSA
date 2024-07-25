// problem link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

// rabit- tortoise method

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i = 0;
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        while(i<n){
            fast = fast -> next;
            i++;
        }
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
    }
};

// brute force

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt = 1;
        while(temp->next!=NULL){
            cnt++;
            temp = temp->next;

        }
        cnt-=n;
        if(cnt == 0 ){
            ListNode* newhead = head->next;
            delete head;
            return newhead;
        }
        temp = head;
        while(cnt>1){
            temp = temp->next;
            cnt--;
        }
        
        ListNode* Remove = temp->next;
        temp->next = Remove->next;
        delete Remove;
 
        return head;
        
    }
};

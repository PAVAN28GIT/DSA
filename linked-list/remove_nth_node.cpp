// problem link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/


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

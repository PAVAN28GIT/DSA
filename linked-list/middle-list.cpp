//problem link : https://leetcode.com/problems/middle-of-the-linked-list/description/


   // tortoise and rabbit method
class Solution {
public:
 
    ListNode* middleNode(ListNode* head) {
         ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
            if(fast->next != NULL)fast = fast->next;
        }
        return slow;
    }
};

// brute force 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }

        cnt/=2;
    
        ListNode* tmp = head;
        while(cnt!=0){
            tmp = tmp->next;
            cnt--;
        }
        return tmp;   
    }
};

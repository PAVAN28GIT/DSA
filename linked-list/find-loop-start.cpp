//problem : https://leetcode.com/problems/linked-list-cycle-ii/

class Solution {
public:

// find colliding point using slow , fast
// have 3rd start at head.... mode start and colliding point untill they collide .. that colliding point is the result
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL)return NULL;


        ListNode *fast = head;
        ListNode *slow = head;
        while(fast!= NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast)break;
        }
        if (fast == NULL || fast->next == NULL)return NULL;
        else{
            ListNode* start = head;
            while(start!=slow){
                slow = slow->next;
                start = start->next;
            }
            if(start == slow)return slow;
            return NULL;

        }
        
    }
};

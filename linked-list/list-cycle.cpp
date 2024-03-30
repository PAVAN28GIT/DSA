
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *one = head;
        ListNode *two = head;
        
        while( two != NULL && two->next != NULL){
            two = two->next->next;
            one = one->next;
            if( one == two){
                return true;
            }
        }
        return false;

    }
};

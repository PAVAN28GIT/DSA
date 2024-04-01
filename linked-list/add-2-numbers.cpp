//problem : https://leetcode.com/problems/add-two-numbers/?envType=study-plan-v2&envId=top-interview-150


class Solution {
public:
    ListNode* rs = nullptr;

    ListNode* insertAtTail(ListNode* tail, int num){
        ListNode* temp = new ListNode(num);
        if(tail == nullptr){
            rs = temp;
            return temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }   
        return tail;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* tail = nullptr;
        int carry = 0;

        // 3 conditions....

        // when t1 is there and t2 is null
        // when t2 is there and t1 is null
        // when carry is generated at last but both t1 and t2 are null
       
        while(l1 != NULL || l2!=NULL || carry!=0){
            int sum = (l1?l1->val:0)+(l2?l2->val:0)+carry ;
            carry = sum/10;  // left most digit ..carry for next node
            sum = sum%10;   // right most digit 
            tail = insertAtTail(tail,sum);
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return rs;
    }
};

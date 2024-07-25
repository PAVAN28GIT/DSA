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


// diff approach.. simpler but many if's .. u cant remember the code ..remeber the approach



class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode();
        ListNode* head = temp;
        while(l1!=NULL && l2!=NULL){
            int sum = l1->val + l2->val;

            if(sum<10){
                head->next = new ListNode(sum);   
            }else{
                sum = sum-10;
                head->next = new ListNode(sum);
                if(l1->next != NULL)l1->next->val+=1;
                else l1->next = new ListNode(1);
            }
            head = head->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL){
            if (l1->val < 10) head->next = new ListNode(l1->val);
            else {
                head->next = new ListNode(l1->val-10);
                if(l1->next !=NULL)l1->next->val+=1;
                else l1->next = new ListNode(1);
            }
            head = head->next;
            l1 = l1->next;
        }
        while(l2!=NULL){
            if (l2->val < 10) head->next = new ListNode(l2->val);
            else {
                head->next = new ListNode(l2->val-10);
                if(l2->next !=NULL)l2->next->val+=1;
                else l2->next = new ListNode(1);
            }
         
            head = head->next;
            l2 = l2->next;
        }
        return temp->next;
    }
};

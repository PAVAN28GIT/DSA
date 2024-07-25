// problem link : https://leetcode.com/problems/merge-two-sorted-lists/

// inplace 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL )return list2;
        if(list2 == NULL) return list1;
        ListNode* dummy = new ListNode();     
        ListNode* main;  
        ListNode* l2;        
        if(list1->val <= list2->val){
            main = list1;
            l2 = list2;
        }
        else{
            main = list2;
            l2 = list1;
        }
        dummy->next = main;
        ListNode * temp;
        ListNode * prev;
        while(l2!=NULL){
            if(main == NULL){
                prev->next = l2;
                break;
            }
            if(main->val<=l2->val){
                prev = main;
                main = main->next;               
            }
            else{
                temp = l2->next;
                prev->next = l2;
                prev = l2;
                l2->next = main;
                l2 = temp;
            }
            
        }
    return dummy->next;
    }
};

// external list
class Solution {
public:
    ListNode* insert(ListNode* head,int val){
        ListNode* node = new ListNode(val);
        head->next = node;
        head = node;
        return head;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head;

        if (list1 == nullptr) {
            return list2;
            }
        if (list2 == nullptr) {
            return list1;
        }

        if(list1->val <= list2->val){
            head = new ListNode(list1->val);
            list1 = list1->next;
        }else{
            head = new ListNode(list2->val);
            list2 = list2->next;
        }
        ListNode* temp = head;
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                temp = insert(temp,list1->val);
                list1 = list1->next;
            }
            else {
                temp = insert(temp,list2->val);
                list2 = list2->next;
            }
        }
        while(list1!= NULL){
            temp = insert(temp,list1->val);
            list1 = list1->next; 
        }
        while(list2!= NULL){
            temp = insert(temp,list2->val);
            list2 = list2->next; 
        }
        
        return head;
    }
};


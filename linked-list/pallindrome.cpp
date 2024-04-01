// navive way..others solution


//     bool isPalindrome(ListNode* head) {
//         stack<int> stack;
//         ListNode* curr = head;
//         while (curr) {
//             stack.push(curr->val);
//             curr = curr->next;
//         }
//         curr = head;
//         while (curr && curr->val == stack.top()) {
//             stack.pop();
//             curr = curr->next;
//         }
//         return curr == nullptr;
//     }


// MY SOLUTION 

// problem link : https://leetcode.com/problems/palindrome-linked-list/

  // find mid
  // reverse 2nd half
  // compare 1st half and 2nd half
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

 
  bool isPalindrome(ListNode* head) {
      ListNode* temp = head;
      int cnt = 1;
      while(temp!=NULL){
          temp = temp->next;
          cnt++;
      }
      int half = cnt/2;
      temp = head;
      ListNode* t2 = head;
      while(half>0){
          temp = temp->next;
          half--;
      }
      ListNode* t1 = reverseList(temp);
      while(t1!=NULL){
          if(t2->val!=t1->val){
              return false;
          }
          t2 = t2->next;
          t1 = t1->next;
      }

      return true;
  }

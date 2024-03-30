    // sexy problem +++++

// There is a singly-linked list head and we want to delete a node node in it.
// You are given the node to be deleted node. You will not be given access to the first node of head.
// All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

// problme link : https://leetcode.com/problems/delete-node-in-a-linked-list/

class Solution {
public:


    // change nodes value to next node value nd skip next node

    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

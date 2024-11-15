/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// Function to reverse k nodes of the linked list
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode *curr = head;
    int count = 0;
    
    // Count k nodes
    while (curr && count < k) {
        curr = curr->next;
        count++;
    }
    
    // If we have k nodes, reverse them
    if (count == k) {
        curr = reverseKGroup(curr, k); // Reverse next k group
        
        // Reverse current k group
        while (count-- > 0) {
            struct ListNode* temp = head->next;
            head->next = curr;
            curr = head;
            head = temp;
        }
        head = curr;
    }
    return head;
}

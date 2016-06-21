/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
 /* so the  idea of this recursion was to check for the base case where the
 head's pointer would point to NULL where we checked the terminating case.
 */
 
struct ListNode* deleteDuplicates(struct ListNode* head) {
    
    if(head == NULL || head->next == NULL){
        
        return head;
        
    }
    
    /* we would check for repeatations and call the function over again and 
    again to find the array if we reach the end without finding repeatations,
    we returned the unchanged pointer containing all elements in the array.
    */
    
    head-> next = deleteDuplicates(head->next);
    
    if (head->val == head->next->val){
        
       return head->next;     
        
        
    }else{    
        
         return head;

    }
}
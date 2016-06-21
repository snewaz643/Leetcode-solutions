/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
 /* Before the function was called A -> B -> C -> D */
 
 
void deleteNode(struct ListNode* node) {
    
	/* the key was to remove the pointer linking to the next element thereby 
	
	the  third element in the list */
	
    struct ListNode* temp;
    
    /* take a temporary node capture it by the pointer linking it */
    
    temp = node->next;
    
    /* temp holds both the value and the next pointer(which links to element C 
    which is held in temp-> next 
    */
    
    node-> val = temp -> val;
    
    /*here we get rid of the link to c by removing the link in temp so now it 
    
    points now to D */
    
    node -> next = temp -> next;
    
    free(temp);
  
}

/* Now A -> B -!> C -> D 
   
   Rather becomes A -> B -> D

*/

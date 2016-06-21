/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
 
  struct ListNode* temp;
  
  struct ListNode* previous = NULL;
  
  /* set 2 pointers at two ends initially to be looped*/
  
  while(head!=NULL){
      
  	  /* make temp pointer point to the next element and then pass it over 
  	  head when cleared(as in head passes over the pointer to elements at the
  	  back)
  	  */
  	  
      temp = head->next;
      
      /* make the head point to last element and its pointer to NULL and 
      pass over previous (pointer) that traverses through the list till it 
      reaches first element
      */
      
      head->next = previous;
      
      /* clear up the head variable and traverse through the element in usual
      order and pass the next to last element and pointer to the previous 
      pointer
      */
      
      previous = head; 
      
      head = temp;
      
      /* reverse the process till the pointer to head traverses through the list
      and the previous reaches the first element then terminate loop and return
      list.
      */
      
  }
  
  return previous;
    
}
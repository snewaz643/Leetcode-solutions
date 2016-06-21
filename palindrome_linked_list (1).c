/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
 
  struct ListNode *slow = head;
  struct ListNode *fast = head;
  struct ListNode *aux = NULL;
  
  /* traverse through the linked list setting up  two pointers to reverse
  the list with the end pointer pointed to first element in the list and other
  one pointed out to the last element
  */
    
  while(fast&&fast->next){
      
      struct ListNode *temp = slow;
      
      slow = slow->next;
      
      fast = fast->next->next;
      
      temp->next = aux;
      
      aux = temp;
      
  }   
  
  /*it handles the negative number of nodes
  
  example --- A->B->C  -------------- B->C->A so we need to shuffle between
  
  index 0 and 1 so it becomes C->B->A.
  
  */
  
  if(fast){
      
      slow = slow->next;
      
  }
  
  /* we then check if the  values forwards and backwards are same or not
  if so we then continue traversing through the reverse linked list till slow
  reaches NULL and returning true or else we return false and do not traverse  
  through the list.
  
  */
  
  while(slow && aux->val == slow->val){
      
      aux = aux->next;
      
      slow = slow->next;
      
      
  }
    
  return slow == NULL;    
    
}
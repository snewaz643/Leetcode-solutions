int removeDuplicates(int* nums, int numsSize) {
   
    int i;
   
    int *start = nums;
   
    /* start the first element and the next element searching for matches and if you find reduce size of the array.
    then go over the each element and the corresponding element over rest of elements in an array.
    at the end return the total duplicates to be removed from that particular array.
    */
 
 
    while(*start!=*(start+numsSize)){ /*the pointers go upto n-1 to avoid index offset issues*/
   
      for(i=1;i<numsSize;i++){
       
       /* start the *num(pointer) and the next pointer and drag compare values but make sure pointers are not at the same memory
       at the same time
       */
 
        if(start == nums+i){
 
           nums+i++;          
 
        }
 
        if(*(nums+i)==*start){
       
           numsSize--;
           
        }
       
      }
   
      *start++;
       
   }
   
   return numsSize;
   
}
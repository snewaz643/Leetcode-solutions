int removeDuplicates(int* nums, int numsSize) {
    
	/* here i looped through the array only once and used pointers to trackout
	elements in the array. Once a count was made we put the element we are to 
	its correct place where there's a recurring element at number of places less
	than the position in the list
	*/
	
    int remove_count = 0;
    
    for(int i =1;i<numsSize;i++){
        
        if(*(nums+i) == *(nums+i-1)){
        
           remove_count++;
           
        }else{
            
            if(remove_count!=0){
                
                *(nums+i-remove_count) = *(nums+i);
                
            }
        }   
        
    }
    
    /* decrease the length by the counts there were redundancies in the sorted
    array.
    */
    
    return numsSize-remove_count;
    
}
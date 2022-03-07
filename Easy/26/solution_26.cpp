int removeDuplicates(vector<int>& nums) {
    int nonDupIndex = 1;
    
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != nums[nonDupIndex - 1]){
            nums[nonDupIndex++] = nums[i];    
        }
    }
    
    return nonDupIndex;
}
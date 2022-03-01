int longestOnes(vector<int>& nums, int k) {
    int start = 0, repeatedOnes = 0, maxLength = 0;
    unordered_map<int,int> table; 
    
    for(int end = 0; end < nums.size(); end++){
        if(nums[end] == 1){
            table[nums[end]]++;
            repeatedOnes = max(repeatedOnes, table[nums[end]]);
        }
        
        if(end - start + 1 - repeatedOnes > k){
            table[nums[start++]]--;
        }
        
        maxLength = max(maxLength, end - start + 1);
    }
    
    return maxLength;
}
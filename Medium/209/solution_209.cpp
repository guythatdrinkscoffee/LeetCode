int minSubArrayLen(int target, vector<int>& nums) {
    int start = 0, currentSum = 0, minLen = INT_MAX;
    
    for(int end = 0; end < nums.size(); end++){
        currentSum += nums[end];
        
        while(currentSum >= target){
            minLen = min(minLen, end - start + 1);
            currentSum -= nums[start];
            start++;
        }
    }
    
    return minLen == INT_MAX ? 0 : minLen;
}
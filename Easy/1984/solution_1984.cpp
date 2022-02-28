int minimumDifference(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end(), greater<int>());
    
    int minDiff = numeric_limits<int>::max(), start = 0;
    
    for(int end = 0; end < nums.size(); end++){
        if(end >= k - 1){
            minDiff = min(minDiff, nums[start] - nums[end]);
            start++; 
        }
    }
    
    return minDiff;
}
double findMaxAverage(vector<int>& nums, int k) {
    int sum = 0, start = 0, maxAvg = numeric_limits<int>::min();
    
    for(int end = 0; end < nums.size(); end++){
        sum += nums[end];
        
        if(end >= k - 1){
            maxAvg = max(maxAvg, sum);
            sum -= nums[start++];
        }
    }
    
    return (double)maxAvg / k ;
}
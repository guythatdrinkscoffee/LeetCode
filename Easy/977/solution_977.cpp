vector<int> sortedSquares(vector<int>& nums) {
    int start = 0, end = nums.size()-1, insertionIndex = nums.size()-1;
    vector<int> squares(nums.size());
    
    while(start <= end){
        if((nums[start] * nums[start]) > (nums[end] * nums[end])){
            squares[insertionIndex--] = nums[start] * nums[start];
            start++;
        } else {
            squares[insertionIndex--] = nums[end] * nums[end];
            end--;
        }
    }
    
    return squares;
}
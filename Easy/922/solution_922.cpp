vector<int> sortArrayByParityII(vector<int>& nums) {
    std::vector<int> ans(nums.size());
    
    int evenIndex = 0, oddIndex = 1;
    
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] % 2 == 0){
            ans[evenIndex] = nums[i];
            evenIndex += 2;
        } else {
            ans[oddIndex] = nums[i];
            oddIndex += 2;
        }
    }
    
    return ans;
}
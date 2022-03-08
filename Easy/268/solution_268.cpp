int missingNumber(vector<int>& nums) {
    int i = 0;
    while(i < nums.size()){
        int j = nums[i];
        
        if(nums[i] < nums.size() && nums[i] != nums[j]){
            swap(nums[i], nums[j]);
        } else {
            i++;
        }
    }
    
    int k = 0;
    while(k < nums.size()){
        if(nums[k] != k){
            return k;
        }
        
        k++;
    }
    
    return k;
}
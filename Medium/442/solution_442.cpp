vector<int> findDuplicates(vector<int>& nums) {
    int i = 0;
    
    while(i < nums.size()){
        int j = nums[i] - 1;
        if(nums[i] != nums[j]){
            swap(nums[i], nums[j]);
        }else {
            i++;
        }
    }
    
    vector<int> ans; 
    
    for(int j = 0; j < nums.size(); j++){
        if(nums[j] != j+1){
            ans.push_back(nums[j]);
        }
    }
    
    return ans;
}
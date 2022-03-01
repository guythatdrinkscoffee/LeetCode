bool containsNearbyDuplicate(vector<int>& nums, int k) {
    std::unordered_map<int,int> table;
    
    for(int i = 0; i < nums.size(); i++){
        
        if(table.find(nums[i]) != table.end()){
            
            if(abs(table[nums[i]] - i) <= k) {
                return true;
            }
        }
        
        table[nums[i]] = i; 
    }
    
    return false;
}
//Two Pointers
vector<int> rearrangeArray(vector<int>& nums) {
    int positiveIndex = 0, negativeIndex = 1; 
    std::vector<int> ans(nums.size());
    
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] >= 0){
            ans[positiveIndex ] = nums[i];
            positiveIndex += 2;
        } else {
            ans[negativeIndex ] = nums[i];
            negativeIndex += 2;
        }
    }

    return ans;
}

//Merge
// vector<int> rearrangeArray(vector<int>& nums) {
//     vector<int> seperated(nums.size());
    
//     int start = 0, end = 0 , i = 0;
    
//     while(start < nums.size()){
//         if(nums[start] >= 0){
//             seperated[i++] = nums[start];
//         }
//         start++;
//     }
    
    
//     while(end < nums.size()){
//         if(nums[end] < 0){
//             seperated[i++] = nums[end];
//         }
//         end++;
//     }
    
    
//     vector<int> ans(nums.size());
    
//     start = 0, end = seperated.size() / 2;
    
//     for(int i = 0; i < seperated.size(); i += 2){
//         ans[i] = seperated[start++];
//         ans[i+1] = seperated[end++];
//     }
    
//     return ans;
// }
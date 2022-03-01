int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int start = 0, sum = 0, ans = 0;
    
    for(int end = 0; end < arr.size(); end++){
        sum += arr[end];
        
        if(end >= k - 1){
            if ((sum / k) >= threshold){
                ans++;
            }
            sum -= arr[start++];
        }
    }
    
    return ans;
}
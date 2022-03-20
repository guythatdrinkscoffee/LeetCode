int maxProduct(vector<int>& nums) {
    priority_queue<int> pq = {nums.begin(), nums.end()};
    
    int first = pq.top();
    pq.pop();
    int second = pq.top();
    
    return (first-1) * (second-1);
}
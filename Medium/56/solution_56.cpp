vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](const vector<int> &x, const vector<int> &y){ 
        return x[0] < y[0];
    });
                
    vector<vector<int>> merged;
    
    vector<int> interval = intervals[0];
    int start = interval[0];
    int end = interval[1];
    
    for(int i = 1; i < intervals.size(); i++){
        interval = intervals[i];
        
        if(interval[0] <= end){
            end = max(end, interval[1]);
        } else {
            merged.push_back({start,end});
            start = interval[0];
            end = interval[1];
        }
    }
    
    merged.push_back({start,end});
    
    return merged;                                                                                  
}
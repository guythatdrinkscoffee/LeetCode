int characterReplacement(string s, int k) {
    int start = 0, repeated = 0, maxLen = 0;
    std::unordered_map<char,int> table;
    
    for(int end = 0; end < s.size(); end++){
        table[s[end]]++;
        
        repeated = max(repeated, table[s[end]]); 
        
        if((end - start + 1 - repeated) > k ){
            table[s[start]]--;
            start++;
        }
        
        maxLen = max(maxLen, end - start + 1);
    }
    
    return maxLen;
}
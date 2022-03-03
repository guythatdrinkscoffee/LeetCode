int lengthOfLongestSubstring(string s) {
    int start = 0, maxLen = 0;
    std::unordered_map<char,int> table;
    
    for(int end = 0; end < s.size(); end++){
        if(table.find(s[end]) != table.end()){
            start = max(start, table[s[end]] + 1);
        }
        
        table[s[end]] = end;
        maxLen = max(maxLen, end - start + 1);
    }
    
    return maxLen;
}
int countGoodSubstrings(string s) {
    int start = 0, goodSubStrings = 0, windowSize = 3;  
    std::unordered_map<char, int> table;
    
    for(int end = 0; end < s.size(); end++){
        table[s[end]]++;
        
        if(end >= windowSize - 1){
            if(table.size() == windowSize){
                goodSubStrings++;
            }
            
            table[s[start]]--;
            if(table[s[start]] == 0){
                table.erase(s[start]);
            }
            start++;
        }
    }
    
    return goodSubStrings;
}
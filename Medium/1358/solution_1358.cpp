int numberOfSubstrings(string s) {
    int start = 0, count = 0;
    std::unordered_map<char, int> table;
    
    for(int end = 0; end < s.size(); end++){
        table[s[end]]++;
        
        while(table.size() == 3){
            table[s[start]]--;
            if(table[s[start]] == 0){
                table.erase(s[start]);
            }
            start++;
        }    
        
        count += start;
    }
    
    return count;
int maxConsecutiveAnswers(string answerKey, int k) {
    int start = 0, count = 0, maxLen = 0;
    unordered_map<char,int> table;
    
    for(int end = 0; end < answerKey.size(); end++){
        table[answerKey[end]]++;
        
        count = max(count, table[answerKey[end]]);
        
        if(end - start + 1 - count > k){
            table[answerKey[start++]]--;
        }
        
        maxLen = max(maxLen, end - start + 1);
    }
    
    return maxLen;
}
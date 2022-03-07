string mergeAlternately(string word1, string word2) {
    int n = word1.size() + word2.size();
    string ans (n, 'x');
    
    int left = 0, right = 0, insertion = 0;
    
    while(left < word1.size() && right < word2.size()){
        ans[insertion] = word1[left++];
        ans[insertion+1] = word2[right++];
        insertion += 2;
    }
    
    if(left < word1.size()){
        while(left < word1.size()){
            ans[insertion++] = word1[left++];
        }
    }else if( right < word2.size()){
        while(right < word2.size()){
            ans[insertion++] = word2[right++]; 
        }
    }
    
    return ans;
}
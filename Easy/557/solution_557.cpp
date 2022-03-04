string reverseWords(string s) {
    int left = 0;
    
    for(int right = 0; right < s.size(); right++){
        if(s[right] == ' ' || right == s.size() - 1){
            int subRight = right == s.size() - 1 ? right: right - 1;
            while(left < subRight){
                swap(s[left], s[subRight]);
                left++;
                subRight--;
            }
            
            left = right + 1;
        }
    }

    return s;
}
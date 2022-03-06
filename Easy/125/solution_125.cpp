bool isPalindrome(string s) {
    int start = 0, end = s.size() - 1;
    
    while(start <= end){
        char leftChar = tolower(s[start]);
        char rightChar = tolower(s[end]);
        
        if(isAlphanumeric(leftChar) && isAlphanumeric(rightChar)) {
            if(leftChar != rightChar){
                return false;
            }
    
            start++;
            end--;
        }else {
            if(!isAlphanumeric(s[start])){
                start++;
            }else if (!isAlphanumeric(s[end])){
                end--;
            }
        }
    }
    
    return true;
}
            
bool isAlphanumeric(char c){
    return isalpha(c) || isdigit(c);
}
string reverseVowels(string s) {
    int start = 0, end = s.size()-1;
    
    while(start <= end){
        if(isVowel(s[start]) && isVowel(s[end])){
            swap(s[start++], s[end--]);
        } else {
            if(!isVowel(s[start])){
                start++;
            } else if(!isVowel(s[end])){
                end--;
            } else {
                start++;
                end--;
            }
        }    
    }
    
    return s;
}

bool isVowel(char c){
    char ch = tolower(c);
    return ch == 'a' || ch == 'e' || ch == 'i' ||  ch == 'o' || ch == 'u';
}
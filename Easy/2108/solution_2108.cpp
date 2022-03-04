string firstPalindrome(vector<string>& words) {
    for(auto word : words){
        if(isPalidrome(word)){
            return true;
        }
    }
    
    return "";
}

bool isPalindrome(string s){
    int p1 = 0;
    int p2 = s.size()-1;
    
    while(p1 <= p2){
        if(s[p1] == s[p2]){
            p1++;
            p2--;
        }else {
            return false;
        }
    }
    
    return true;
}
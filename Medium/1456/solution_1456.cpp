int maxVowels(string s, int k) {
    int start = 0, vowelCount = 0, maxVowels = 0;

    for(int end = 0; end < s.size(); end++){
        char rightLetter = s[end];
        
        if((rightLetter == 'a') || 
            (rightLetter == 'e') || 
            (rightLetter == 'i') || 
            (rightLetter == 'o') || 
            (rightLetter == 'u')){
            vowelCount++;
        }

        
        if(end >= k){
            char leftLetter = s[start];
            if((leftLetter == 'a') || 
                (leftLetter == 'e') || 
                (leftLetter == 'i') || 
                (leftLetter == 'o') || 
                (leftLetter == 'u')){
                vowelCount--;
            }
            start++;
        }
        
        maxVowels = max(maxVowels, vowelCount);
    }
    
    return maxVowels;
}
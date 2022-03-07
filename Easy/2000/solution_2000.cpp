string reversePrefix(string word, char ch) {
    int start = 0, firstOccurrence = 0;
    
    for(int i = 0; i < word.size(); i++){
        if(word[i] == ch){
            firstOccurrence = i;
            while(start < firstOccurrence){
                swap(word[start++] , word[firstOccurrence--]);
            }
            break;
        }
    }

    return word;
}
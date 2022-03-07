bool isHappy(int n) {
    int slow = n, fast = n;
    
    do{        
        slow = squareDigits(slow);
        fast = squareDigits(squareDigits(fast));
    } while(slow != fast);
    
    return slow == 1;
}

int squareDigits(int n){
    int currSum = 0;
    
    while(n > 0){
        int rightDigit = n % 10;
        currSum += rightDigit * rightDigit;
        n /= 10;
    }
    
    return currSum;
}
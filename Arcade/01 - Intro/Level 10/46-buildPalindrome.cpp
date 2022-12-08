bool isPalindrome(string palindrome) {
    size_t len = palindrome.size();
    for (size_t i = 0; i < len / 2; i++) {
        if (palindrome[i] != palindrome[len - i - 1]) {
            return false;
        }
    }
    return true;
}

string toAdd(string palindrome) {
    string toAdd;
    
    for (size_t i = 0; i < palindrome.size() - 1; i++) {
        toAdd += palindrome[i];
    }
    
    reverse(toAdd.begin(), toAdd.end());
    return toAdd;
}

string solution(string st) {
    string palindrome = st;
    size_t last = palindrome.size() - 1;
    
    palindrome += toAdd(palindrome);
    
    string lastPalindrome = palindrome;
    
    bool cut = true;
    while (cut) {
        size_t i;
        for (i = 0; i <= last; i++) {
            if (palindrome.substr(last - i, i + 1) == palindrome.substr(last + 1, i + 1)) {
                palindrome.erase(last + 1, i + 1);
                if (isPalindrome(palindrome)) {
                    lastPalindrome = palindrome;
                }
                break;
            }
        }
        
        if (i > last) {
            cut = false;
        }
    }
    
    return lastPalindrome;
}
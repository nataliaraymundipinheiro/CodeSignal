bool solution(string inputString) {
    size_t len = inputString.length();
    
    // If odd, remove middle character.
    if (len % 2 != 0) {
        inputString.erase(inputString.begin() + (len / 2));
        len--;
    }
    
    for (size_t i = 0; i < len; i++) {
        if (i >= (len / 2)) {
            if (inputString[len - (1 + i)] != inputString[i]) {
                return false;
            }
        }
    }    
    
    return true;
}
bool isDigit(char c) {
    vector<char> digits({'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'});
    return find(digits.begin(), digits.end(), c) != digits.end();
}

bool isLetter(char c) {
    vector<char> letters({'A', 'B', 'C', 'D', 'E', 'F'});
    return find(letters.begin(), letters.end(), c) != letters.end();
}

bool solution(string inputString) {
    if (inputString.size() != 17) return false;
    
    int count = 0;
    int dashes = 0;
    
    for (char c : inputString) {
        if (c == '-') {
            if (count != 2) {
                return false;
            }
            count = 0;
            dashes++;
        } else if (isLetter(c) || isDigit(c)) {
            count++;
        } else {
            return false;
        }
    }
    
    return dashes == 5;
}

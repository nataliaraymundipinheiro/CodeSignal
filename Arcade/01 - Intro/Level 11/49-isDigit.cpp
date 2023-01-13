bool solution(char symbol) {
    vector<char> digits({'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'});
    return find(digits.begin(), digits.end(), symbol) != digits.end();
}

bool solution(int n) {
    vector<int> number;
    
    while (n != 0) {
        number.push_back(n % 10); n /= 10;
    }
    
    int first_half = 0, second_half = 0;
    
    for (size_t i = 0; i < (number.size() / 2); i++) {
        second_half += number[i];
    }
    
    for (size_t i = (number.size() / 2); i < number.size(); i++) {
        first_half += number[i];
    }
    
    return first_half == second_half;
}

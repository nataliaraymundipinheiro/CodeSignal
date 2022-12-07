int solution(int n) {
    int degree = 0;
    
    while (n >= 10) {        
        vector<int> digits;
      
        while (n > 0) {
            digits.insert(digits.begin(), n % 10);
            n /= 10;
        }
        
        int sum = 0;
        for (size_t i = 0; i < digits.size(); i++) {
            sum += digits[i];
        }
        n = sum;
        degree++;
    }
    
    return degree;
}

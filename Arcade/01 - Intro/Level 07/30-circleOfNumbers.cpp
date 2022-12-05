int solution(int n, int firstNumber) {
    int val = firstNumber + n/2;
    
    if (val >= n) {
        val = val - n;
    }
    return val;
}

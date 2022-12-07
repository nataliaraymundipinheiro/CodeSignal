int solution(vector<int> inputArray, int k) {
    int max = 0;
    for (size_t i = 0; i < k; i++) {
        max += inputArray[i];
    }
    
    int sum = max;
    for (size_t i = k; i < inputArray.size(); i++) {
        sum -= inputArray[i - k];
        sum += inputArray[i];
        
        if (sum > max) {
            max = sum;
        }
    }
    
    return max;
}
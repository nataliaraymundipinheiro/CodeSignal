int solution(vector<int> a) {
    int result;
    int min = INT_MAX;
    
    for (int x : a) {
        int value = 0;
        
        for (size_t i = 0; i < a.size(); i++) {
            value += abs(a[i] - x);
        }
        
        if (value < min) {
            result = x;
            min = value;
        }
    }
    
    return result;
}

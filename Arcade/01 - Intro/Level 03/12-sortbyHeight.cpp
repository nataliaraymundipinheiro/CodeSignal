vector<int> solution(vector<int> a) {
    vector<int> output(a.size(), 0);
    
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] == -1) {
            output[i] = -1;
        }
    }
    
    sort(a.begin(), a.end());
    
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] == -1) {
            // Continue;
        } else {
            auto it = find(output.begin(), output.end(), 0);
            *it = a[i];
        }
    }
    
    return output;
}

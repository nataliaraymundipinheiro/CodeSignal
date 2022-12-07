vector<int> solution(vector<int> inputArray, int k) {
    vector<size_t> toRemove;
    int count = 1;
    for (size_t i = 0; i < inputArray.size(); i++) {
        if (count == k) {
            inputArray.erase(inputArray.begin() + i);
            count = 1;
            i--;
        } else {
            count++;
        }
    }
    
    return inputArray;
}

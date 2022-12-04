vector<string> solution(vector<string> inputArray) {
    vector<string> output;
    size_t longestLength = 0;
    
    for (string str : inputArray) {
        if (str.length() > longestLength) {
            longestLength = str.length();
        }
    }
    
    for (string str : inputArray) {
        if (str.length() == longestLength) {
            output.push_back(str);
        }
    }
    
    return output;
}
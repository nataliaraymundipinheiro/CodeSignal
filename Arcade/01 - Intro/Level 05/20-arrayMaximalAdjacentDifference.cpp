int solution(vector<int> inputArray) {
    int largestDiff = 0;
    for (size_t i = 1; i < inputArray.size(); i++) {
        if (abs(inputArray[i - 1] - inputArray[i]) > largestDiff) {
            largestDiff = abs(inputArray[i - 1] - inputArray[i]);
        }
    }
    return largestDiff;
}

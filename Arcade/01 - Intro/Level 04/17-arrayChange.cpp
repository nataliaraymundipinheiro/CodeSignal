int solution(vector<int> inputArray) {
    int moves = 0;
    for (size_t i = 1; i < inputArray.size(); i++) {
        if (inputArray[i - 1] < inputArray[i]) {
            // Do nothing
        } else {
            inputArray[i]++;
            moves++;
            i--;
        }
    }
    return moves;
}

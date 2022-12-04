int solution(vector<int> inputArray) {
    int largestProduct = inputArray[0] * inputArray[1];
    
    for (int i = 2; i < inputArray.size(); i++) {
        if (inputArray[i - 1] * inputArray[i] > largestProduct)
            largestProduct = inputArray[i - 1] * inputArray[i];
    }
    
    return largestProduct;
}

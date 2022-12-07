char solution(string inputString) {
    for (int i = 0; i < inputString.size(); i++) {
        if (isdigit(inputString[i])) {
            return inputString[i];
        }
    }
    return -1;
}

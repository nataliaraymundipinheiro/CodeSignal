string solution(string inputString) {
    string result = "";
    
    for (size_t i = 0; i < inputString.size(); i++) {
        if (isdigit(inputString[i])) {
            result += inputString[i];
        } else {
            break;
        }
    }
    
    return result;
}
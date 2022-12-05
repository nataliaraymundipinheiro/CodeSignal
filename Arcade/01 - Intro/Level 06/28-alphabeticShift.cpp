string solution(string inputString) {
    string output;
    
    for (char character : inputString) {
        if (character == 'z') {
            output += 'a';
        } else {
            output += static_cast<char>(character + 1);
        }
    }
    
    return output;
}

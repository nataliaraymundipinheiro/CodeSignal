vector<size_t> findLastOpenFirstClose(string inputString) {
    size_t last_open = -1;
    size_t first_close = -1;
    for (size_t i = 0; i < inputString.size(); i++) {
        if (inputString[i] == '(') {
            last_open = i;
        }
        if (inputString[i] == ')') {
            first_close = i;
            break;
        }
    }
    return vector<size_t>({last_open, first_close});
}

string reversedString(string inputString, size_t last_open,
                      size_t first_close) {
    cout << "reversedString()" << endl;
    cout << "  inputString = " << inputString;
    cout << " | last_open = " << last_open;
    cout << " | first_close = " << first_close << endl;
    
    string output = inputString;
    output = output.substr(last_open + 1, first_close - last_open - 1);
    reverse(output.begin(), output.end());
    
    cout << "  output = " << output << endl;
    return output;
}

string solution(string inputString) {
    cout << "solution()" << endl;
    
    if (inputString.empty()) {
        return inputString;
    }
    
    // Finds the first iterator of ')':
    vector<size_t> indexes = findLastOpenFirstClose(inputString);
    size_t last_open = indexes[0];
    size_t first_close = indexes[1];
    
    if (indexes[0] == -1 && indexes[1] == -1) {
        return inputString;
    }
    
    string toReverse = reversedString(inputString, last_open, first_close);
    cout << "** toReverse = " << toReverse << endl;
    
    size_t len = (first_close + 1) - last_open;
    cout << "** Length of word to reverse is " << len << endl;
    cout << "** inputString = " << inputString;
    inputString.replace(last_open, len, toReverse);
    cout << " | new inputString = " << inputString << endl;
    
    return solution(inputString);
}
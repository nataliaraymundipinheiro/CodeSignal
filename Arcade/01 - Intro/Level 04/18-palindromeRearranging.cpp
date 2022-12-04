bool solution(string inputString) {
    if (inputString.size() == 0 || inputString.size() == 1) {
        return true;
    }
    
    map<char, int> repetitions;
    for (size_t i = 0; i < inputString.size(); i++) {
        auto lookup = repetitions.find(inputString[i]);
        if (lookup != repetitions.end()) { // found
            lookup->second++;
        } else {
            repetitions[inputString[i]] = 1;
        }
    }

    
    bool once = false;
    for (auto letter : repetitions) {
        if (letter.second % 2 == 1 && once == false) {
            once = true;
        } else if (letter.second % 2 == 1 && once != false) {
            return false;
        } else {
            // Do nothing;
        }
    }
    
    return true;
}

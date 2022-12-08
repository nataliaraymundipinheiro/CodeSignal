bool solution(string inputString) {
    map<char, int> frequencies;
    vector<char> alphabet({'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                           'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'});
    
    for (char c : inputString) {
        frequencies[c] += 1;
    }
    
    for (auto& f : frequencies) {
        auto curr = find(alphabet.begin(), alphabet.end(), f.first);
        
        if (*curr == 'a') {
            continue;
        } else {
            auto prev = curr - 1;
            if (f.second > frequencies[*prev]) {
                return false;
            }
        }
        
    }
    
    return true;
}

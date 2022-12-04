int solution(string s1, string s2) {
    int output = 0;
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    map<char, int> ap1, ap2;
    
    for (char c : s1) {
        ap1[c] += 1;
    }
    
    for (char c : s2) {
        ap2[c] += 1;
    }
    
    for (auto& pair : ap1) {
        auto& lookup = *ap2.find(pair.first);
        if (lookup != *ap2.end()) {
            output += min(lookup.second, pair.second);
        }
    }
    
    return output;
}

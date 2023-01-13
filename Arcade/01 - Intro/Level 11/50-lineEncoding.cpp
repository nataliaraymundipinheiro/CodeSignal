string solution(string s) {
    string result;
    
    char prev = s[0]; int repetitions = 1;
    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == prev) {
            repetitions++;
        } else {
            result += (repetitions == 1) ? "" : to_string(repetitions);
            result += prev;
            
            prev = s[i];
            repetitions = 1;
        }
    }
    
    result += (repetitions == 1) ? "" : to_string(repetitions);
    result += prev;
    
    return result;
}

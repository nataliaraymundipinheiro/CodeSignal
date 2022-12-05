bool solution(string name) {
    for (int i = 0; i < name.length(); i++) {
        if (i == 0 && isdigit(name[i])) {
            return false;
        }
        
        if (isalpha(name[i])) {
            // It's fine
        } else if (isdigit(name[i])) { // 0 1 2 3 4 5 6 7 8 9
            // It's fine
        } else if (name[i] == '_') {
            // It's fine
        } else {
            return false;
        }
    }
    
    return true;
}

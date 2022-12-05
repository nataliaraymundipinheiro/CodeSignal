// Correct function
bool differsByOne(string s1, string s2) {
    // If strings are the same, they don't differ by one.
    if (s1 == s2) {
        // cout << "\"" << s1 << "\" and \"" << s2 << "\" differ by less than one character." << endl;
        return false;
    }
    
    int difference = 0;
    
    // The sizes of s1 and s2 are guaranteed to be the same, so it doesn't matter which one we use.
    for (size_t i = 0; i < s1.length(); i++) {
        if (s1[i] == s2[i]) {
            // Do nothing.
        } else {
            difference++;
        }
        
        if (difference > 1) {
            // cout << "\"" << s1 << "\" and \"" << s2 << "\" differ by more than one character." << endl;
            return false;
        }
    }
    
    // cout << "\"" << s1 << "\" and \"" << s2 << "\" differ by one character." << endl;
    return true;
}

void print(vector<string> inputArray) {
    cout << endl;
    for (string str : inputArray) {
        cout << str << " ";
    }
    cout << endl;
}

// Find all possible combinations of the strings.
vector<vector<string>> possibleCombinations(vector<string> inputArray) {
    vector<vector<string>> result;
    
    // Save a temporary value so we don't alter inputArray.
    vector<string> tmp = inputArray;
    // Make sure we sort the vector first so we can get all permutations.
    sort(tmp.begin(), tmp.end());
    
    // While there is a next permutation for the vector:
    while (next_permutation(tmp.begin(), tmp.end())) {
        result.push_back(tmp);
    }
    
    return result;
}

bool solution(vector<string> inputArray) {
    vector<vector<string>> permutations = possibleCombinations(inputArray);
    
    for (vector<string> permutation : permutations) {
        // print(permutation);
        
        bool breakStatement = false;
        
        for (size_t i = 1; i < permutation.size(); i++) {
            if (differsByOne(permutation[i - 1], permutation[i])) {
                // Do nothing.
            } else {
                // cout << "A break statement has been reached." << endl;
                breakStatement = true;
                break;
            }
        }
        
        cout << breakStatement << endl;
        if (!breakStatement) {
            // cout << "There is at least one permutation where condition is satisfied." << endl;
            return true;
        }
    }
    
    // cout << "There are no permutations where condition is satisfied." << endl;
    return false;
}

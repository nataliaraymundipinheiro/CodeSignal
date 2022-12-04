string print(vector<int> v) {
    string output = "< ";
    for (int i = 0; i < v.size(); i++) {
        output += v[i];
        output += " ";
    }
    output += ">";
    return output;
}

bool solution(vector<int> a, vector<int> b) {
    if (a.empty() && b.empty()) {
        return true;
    }
    
    if (a == b) {
        return true;
    }
    
    if (a.size() != b.size()) {
        return false;
    }
    
    vector<int> tmp_a = a, tmp_b = b;
    sort(tmp_a.begin(), tmp_a.end());
    sort(tmp_b.begin(), tmp_b.end());
    if (tmp_a != tmp_b) {
        return false;
    }
    
    tmp_a = a, tmp_b = b;
    bool found_diff = false;
    bool found_once = false;
    int to_swap_idx = -1;
    for (int idx_a = 0; idx_a < tmp_a.size(); idx_a++) {
        if (tmp_a[idx_a] == tmp_b[idx_a]) {
            // Continue, do nothing.
        } else {
            if (found_once) {
                return false;
            }
            if (!found_diff) {
                found_diff = true;
                to_swap_idx = idx_a;
            } else {
                if (tmp_a[to_swap_idx] == tmp_b[idx_a] && tmp_b[to_swap_idx] == tmp_a[idx_a]) {
                    found_once = true;
                } else {
                    return false;
                }
            }
        }
    }
    return true;
}
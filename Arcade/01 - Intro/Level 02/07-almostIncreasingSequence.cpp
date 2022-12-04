bool solution(vector<int> sequence) {
    bool removed = false;

    for (size_t i = 0; i < (sequence.size() - 1); i++) {
        if (sequence[i] < sequence[i + 1]) {
            // Do nothing.
        } else {
            if (!removed) {
                removed = true;
                
                if (i == sequence.size() - 2 || sequence[i] < sequence[i + 2]) {
                    sequence.erase(sequence.begin() + i + 1);
                } else {
                    sequence.erase(sequence.begin() + i);
                }
                
                i = -1;
            } else {
                return false;
            }
        }
    }

    return true;
}

int maxVotes(vector<int> votes) {
    int max = 0;
    for (int candidate : votes) {
        if (candidate > max) {
            max = candidate;
        }
    }
    return max;
}

int solution(vector<int> votes, int k) {
    int max = maxVotes(votes);
    if (k == 0) {
        int maxNum = 0;
        for (int candidate : votes) {
            if (max == candidate) {
                maxNum++;
            }
        }
        if (maxNum > 1) {
            return 0;
        } else {
            return 1;
        }
    }
    
    int result = 0;
    for (int candidate : votes) {
        if (candidate + k > max) {
            result++;
        }
    }
    
    return result;
}

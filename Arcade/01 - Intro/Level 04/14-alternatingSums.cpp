vector<int> solution(vector<int> a) {
    vector<int> team1, team2;
    
    for (size_t i = 0; i < a.size(); i++) {
        if (i % 2 == 0)
            team1.push_back(a[i]);
        else
            team2.push_back(a[i]);
    }
    
    return {accumulate(team1.begin(), team1.end(), 0), accumulate(team2.begin(), team2.end(), 0)};
}

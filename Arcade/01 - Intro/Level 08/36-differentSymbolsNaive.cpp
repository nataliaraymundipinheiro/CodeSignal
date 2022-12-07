int solution(string s) {
    vector<char> visited;
    for (char c : s) {
        if (find(visited.begin(), visited.end(), c) != visited.end()) {
            // Found
        } else {
            // Not found
            visited.push_back(c);
        }
    }
    return visited.size();
}

int solution(vector<int> statues) {
    sort(statues.begin(), statues.end());
    
    int output = 0;
    int statue = statues[0];
    
    for (size_t i = 0; i < statues.size(); i++) {
        if (statue != statues[i]) {
            while (statue != statues[i]) {
                statue++;
                output++;
            }
        }
        
        statue++;
    }
    
    return output;
}

vector<vector<int>> solution(vector<vector<bool>> matrix) {
    vector<vector<int>> minesweeper;
    
    for (int row = 0; row < matrix.size(); row++) {
        vector<int> line;
        
        for (int col = 0; col < matrix[row].size(); col++) {
            int mineCount = 0;
            
            if (row > 0 && col > 0 && matrix[row - 1][col - 1]) mineCount++;
            if (row > 0 && matrix[row - 1][col]) mineCount++;
            if (row > 0 && col + 1 < matrix[row].size() && matrix[row - 1][col + 1]) mineCount++;
            
            if (col > 0 && matrix[row][col - 1]) mineCount++;
            if (col + 1 < matrix[row].size() && matrix[row][col + 1]) mineCount++;
    
            if (row + 1 < matrix.size() && col > 0 && matrix[row + 1][col - 1]) mineCount++;
            if (row + 1 < matrix.size() && matrix[row + 1][col]) mineCount++;
            if (row + 1 < matrix.size() && col + 1 < matrix[row].size() && matrix[row + 1][col + 1]) mineCount++;
            
            line.push_back(mineCount);
        }
        
        minesweeper.push_back(line);
    }
    
    return minesweeper;
}

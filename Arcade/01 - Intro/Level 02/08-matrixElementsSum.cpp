int solution(vector<vector<int>> matrix) {
    vector<int> colSum(matrix[0].size(), 0);
    vector<bool> colToSkip(matrix[0].size(), false);
    
    for (size_t row = 0; row < matrix.size(); row++) {
        for (size_t col = 0; col < matrix[row].size(); col++) {
            if (colToSkip[col] == true) {
                // Skip this column
            } else {
                if (matrix[row][col] == 0) {
                    colToSkip[col] = true;
                } else {
                    colSum[col] += matrix[row][col];
                }
            }
        }
    }
    
    int sum = 0;
    for (size_t col = 0; col < colSum.size(); col++) {
        sum += colSum[col];
    }
    return sum;
}

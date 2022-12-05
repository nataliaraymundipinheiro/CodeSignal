vector<vector<int>> solution(vector<vector<int>> image) {
    // Finding out the number of squares.
    int squares = pow(2, (image[0].size()) - 2);
    
    vector<vector<int>> output = image;
    
    for (int row = 1; row < image.size() - 1; row++) {
        for (int col = 1; col < image[row].size(); col++) {
            int average = (image[row - 1][col - 1] + 
                          image[row - 1][col] + 
                          image[row - 1][col + 1] + 
                          image[row][col - 1] + 
                          image[row][col] + 
                          image[row][col + 1] + 
                          image[row + 1][col - 1] + 
                          image[row + 1][col] + 
                          image[row + 1][col + 1]) / 9;
                          
            output[row][col] = average;
        }
    }
    
    // Then remove first and last rows, first and last cols.
    output.erase(output.begin()); output.erase(output.begin() + output.size() - 1);
    for (int i = 0; i < output.size(); i++) {
        output[i].erase(output[i].begin());
        output[i].erase(output[i].begin() + output[i].size() - 1);
    }
    
    return output;
}

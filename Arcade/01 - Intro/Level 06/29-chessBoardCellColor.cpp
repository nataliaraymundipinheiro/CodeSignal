bool solution(string cell1, string cell2) {
    string row1 = cell1.substr(0, 1);
    string col1 = cell1.substr(1, 1);
    
    string row2 = cell2.substr(0, 1);
    string col2 = cell2.substr(1, 1);
    
    vector<vector<bool>> chessboard(8, vector<bool>(8));
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if ((i + j) % 2 == 0) {
                chessboard[i - 1][j - 1] = true;
            } else {
                chessboard[i - 1][j - 1] = false;
            }
        }
    }
    
    int i1, j1, i2, j2;
 
    if (row1 == "A") i1 = 1;
    else if (row1 == "B") i1 = 2;
    else if (row1 == "C") i1 = 3;
    else if (row1 == "D") i1 = 4;
    else if (row1 == "E") i1 = 5;
    else if (row1 == "F") i1 = 6;
    else if (row1 == "G") i1 = 7;
    else if (row1 == "H") i1 = 8;
    
    if (col1 == "1") j1 = 1;
    else if (col1 == "2") j1 = 2;
    else if (col1 == "3") j1 = 3;
    else if (col1 == "4") j1 = 4;
    else if (col1 == "5") j1 = 5;
    else if (col1 == "6") j1 = 6;
    else if (col1 == "7") j1 = 7;
    else if (col1 == "8") j1 = 8;
    
    if (row2 == "A") i2 = 1;
    else if (row2 == "B") i2 = 2;
    else if (row2 == "C") i2 = 3;
    else if (row2 == "D") i2 = 4;
    else if (row2 == "E") i2 = 5;
    else if (row2 == "F") i2 = 6;
    else if (row2 == "G") i2 = 7;
    else if (row2 == "H") i2 = 8;
    
    if (col2 == "1") j2 = 1;
    else if (col2 == "2") j2 = 2;
    else if (col2 == "3") j2 = 3;
    else if (col2 == "4") j2 = 4;
    else if (col2 == "5") j2 = 5;
    else if (col2 == "6") j2 = 6;
    else if (col2 == "7") j2 = 7;
    else if (col2 == "8") j2 = 8;
    
    return (chessboard[i1 - 1][j1 - 1] == chessboard[i2 - 1][j2 - 1]);
}

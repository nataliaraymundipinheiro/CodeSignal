bool solution(string bishop, string pawn) {
    vector<char> horizontal({'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'});
    vector<char>   vertical({'1', '2', '3', '4', '5', '6', '7', '8'});
    
    vector<size_t> bishopPosition(2), pawnPosition(2);
    for (size_t p = 0; p < 8; p++) {
        if (bishop[0] == horizontal[p]) {
            bishopPosition[0] = p;
        }
        if (bishop[1] == vertical[p]) {
            bishopPosition[1] = p;
        }

        if (pawn[0] == horizontal[p]) {
            pawnPosition[0] = p;
        }
        if (pawn[1] == vertical[p]) {
            pawnPosition[1] = p;
        }
    }
    
    for (size_t b = 1; b < 8; b++) {
        // Up-right
        if (bishopPosition[0] + b == pawnPosition[0] && bishopPosition[1] + b == pawnPosition[1]) {
            return true;
        }
        
        // Up-left
        if (bishopPosition[0] - b == pawnPosition[0] && bishopPosition[1] + b == pawnPosition[1]) {
            return true;
        }
        
        // Down-right
        if (bishopPosition[0] + b == pawnPosition[0] && bishopPosition[1] - b == pawnPosition[1]) {
            return true;
        }
        
        // Down-left
        if (bishopPosition[0] - b == pawnPosition[0] && bishopPosition[1] - b == pawnPosition[1]) {
            return true;
        }
    }
    
    return false;
}

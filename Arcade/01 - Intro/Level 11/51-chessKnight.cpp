int find(vector<char> v, char c) {
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i] == c) {
            return i;
        }
    }
}

int solution(string cell) {
    vector<char> horizontal = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    vector<char> vertical = {'1', '2', '3', '4', '5', '6', '7', '8'};

    int horizontal_position = find(horizontal, cell[0]);
    int vertical_position = find(vertical, cell[1]);
    cout << "Indexes are (" << horizontal_position << ", " << vertical_position << ")." << endl;
    
    int output = 0;
    
    // 1 up, 2 left
    if (horizontal_position - 2 >= 0 && vertical_position + 1 <= 7) {
        cout << "1 up, 2 left is valid" << endl;
        output++;
    }
    
    // 1 up, 2 right
    if (horizontal_position + 2 <= 7 && vertical_position + 1 <= 7) {
        cout << "1 up, 2 right is valid" << endl;
        output++;
    }
    
    // 2 up, 1 left
    if (horizontal_position - 1 >= 0 && vertical_position + 2 <= 7) {
        cout << "2 up, 1 left is valid" << endl;
        output++;
    }
    
    // 2 up, 1 right
    if (horizontal_position + 1 <= 7 && vertical_position + 2 <= 7) {
        cout << "2 up, 1 right is valid" << endl;
        output++;
    }
    
    // 1 down, 2 left
     if (horizontal_position - 2 >= 0 && vertical_position - 1 >= 0) {
        cout << "1 down, 2 left is valid" << endl;
        output++;
    }
    
    // 1 down, 2 right
    if (horizontal_position + 2 <= 7 && vertical_position - 1 >= 0) {
        cout << "1 down, 2 right is valid" << endl;
        output++;
    }
    
    // 2 down, 1 left
    if (horizontal_position - 1 >= 0 && vertical_position - 2 >= 0) {
        cout << "2 down, 1 left is valid" << endl;
        output++;
    }
    
    // 2 down, 1 right
    if (horizontal_position + 1 <= 7 && vertical_position - 2 >= 0) {
        cout << "2 down, 1 right is valid" << endl;
        output++;
    }
    
    return output;
}

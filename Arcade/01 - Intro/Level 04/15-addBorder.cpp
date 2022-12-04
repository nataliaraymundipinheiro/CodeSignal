vector<string> solution(vector<string> picture) {
    string asteriskRow = "**";
    for (int i = 0; i < picture[0].length(); i++) {
        asteriskRow += "*";
    }
    cout << asteriskRow << endl;
    
    picture.insert(picture.begin(), asteriskRow); // add to start
    picture.push_back(asteriskRow); // add to end
    
    for (int row = 1; row < picture.size() - 1; row++) {
        string str = "*";
        str += picture[row];
        str += "*";
        picture[row] = str;
    }
    
    return picture;
}

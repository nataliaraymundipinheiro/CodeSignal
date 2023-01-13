int solution(int n) {
    string str = to_string(n);
    cout << "string is " << str << endl;

    int max = INT_MIN;
    
    for (int i = 0; i < str.size(); i++) {
        cout << "char is " << str[i] << endl;
        
        string tmp = str;
        tmp.erase(i, 1);
        cout << "tmp is " << tmp << endl;
        
        cout << "max is " << max << endl;
        
        int num = stoi(tmp);
        cout << "num is " << num << endl;
        
        if (num > max) {
            max = num;
        }
        
        cout << "max is now " << max << endl << endl;
    }
    
    return max;
}

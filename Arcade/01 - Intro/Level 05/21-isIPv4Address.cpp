// I had some trouble with this code.
// This solution is not entirely mine.

bool solution(string inputString) {
    using namespace std;
    int ds = 0;
    int l = -1;
    for (int i = 0; i < inputString.size(); i++) {
        if (inputString[i] != '.' && (inputString[i] < 48 || inputString[i] > 57)) return false;
        if (inputString[i] == '.') {
            if (i - l < 2 || i - l > 4) return false;
            string x = inputString.substr(l + 1, i - l - 1);
            if (x.size() > 1 && x[0] == '0') return false;
            if (stoi(x) > 255) return false;
            ds++;
            l = i;
        }
    }
    int i = inputString.size();
    if (i - l < 2 || i - l > 4) return false;
    string x = inputString.substr(l + 1, i - l - 1);
    if (x.size() > 1 && x[0] == '0') return false;
    if (stoi(x) > 255) return false;
    return ds == 3;
}

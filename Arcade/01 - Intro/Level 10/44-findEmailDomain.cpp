string solution(string address) {
    string result;
    for (size_t i = address.size() - 1; i >= 0; i--) {
        if (address[i] == '@') {
            break;
        } else {
            result += address[i];
        }
    }
  
    reverse(result.begin(), result.end());
    return result;
}

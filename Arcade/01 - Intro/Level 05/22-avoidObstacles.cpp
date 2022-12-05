// void print(vector<int> inputArray) {
//     // cout << "< ";
//     for (int num : inputArray) {
//         // cout << num << " ";
//     }
//     // cout << ">" << endl;
// }

int solution(vector<int> inputArray) {
    // Sort the array
    sort(inputArray.begin(), inputArray.end());
    int len = inputArray.size();
    
    // print(inputArray);

    int jump;
    for (jump = 1; jump <= inputArray[len - 1]; jump++) {
        // cout << "\njump = " << jump << endl;
        bool worked = true;
        for (int i = 0; i < inputArray[len - 1]; i += jump) { // Start at 1, assume 0 doesnt have an obstacle
            // cout << "** position = " << i << endl;
            // cout << "** position + jump = " << i + jump << endl;
            // If my position + jump size doesn't have an obstacle, it's fine.
            // Else, break and increase jump by one.
            if (find(inputArray.begin(), inputArray.end(), i + jump) != inputArray.end()) {
                // cout << "**   position + jump is found on inputArray" << endl;
                worked = false;
            } else {
                // cout << "**   position + jump is fine" << endl;
            }
        }
        
        if (worked) {
            break;
        }
    }
    
    return jump;
}

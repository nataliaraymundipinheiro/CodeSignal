int solution(int upSpeed, int downSpeed, int desiredHeight) {
    int height = 0, days = 0;
    cout << "Plant starts out with height = 0 and days = 0." << endl;
    
    while (height < desiredHeight) {
        days++;
        
        // One day:
        height += upSpeed;
        
        if (height >= desiredHeight) {
            cout << "The plant first reaches a height " << height << " on day " << days << "." << endl;
            break;
        }
        
        // One night:
        height -= downSpeed;
        
        cout << "For day = " << days << ", the plant ends with height = " << height << "." << endl;
    }
    
    cout << "At the end, the plant has height = " << height << " after " << days << " days." << endl;
    return days;
}

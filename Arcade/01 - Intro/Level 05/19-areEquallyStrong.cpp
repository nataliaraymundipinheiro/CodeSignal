bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int yourStrongest = (yourLeft > yourRight) ? yourLeft : yourRight;
    int yourWeakest = (yourLeft > yourRight) ? yourRight : yourLeft;
    cout << "Your strongest is " << yourStrongest << endl;
    cout << "Your weakest is   " << yourWeakest << endl;
    
    int friendsStrongest = (friendsLeft > friendsRight) ? friendsLeft : friendsRight;
    int friendsWeakest = (friendsLeft > friendsRight) ? friendsRight : friendsLeft;
    cout << "Your friend's strongest is " << friendsStrongest << endl;
    cout << "Your friend'sweakest is    " << friendsWeakest << endl;
    
    return yourStrongest == friendsStrongest && yourWeakest == friendsWeakest;
}

int solution(int deposit, int rate, int threshold) {
    int years = 0;

    double result = deposit;
    double percent = (double)rate / 100 + 1;
    
    while (result < threshold) {
        result *= percent;
        years++;
    }
    
    return years;
}

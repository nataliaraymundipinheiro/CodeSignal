int solution(int year, int century) {
    if (1 <= year && year <= 100) {
        return century;
    } else {
        century++;
        return solution(year - 100, century);
    }      
}

int solution(int year) {
    return solution (year, 1);
}
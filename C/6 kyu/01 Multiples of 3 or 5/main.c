int solution(int number) {
    int result = 0;
    for (int i = 0; i < number;result += (i % 3 == 0 || i % 5 == 0) ? i : 0, i++);
    return (result);
}

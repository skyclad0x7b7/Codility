int solution(int X, int Y, int D) {
    if( (Y - X) % D ) return ((Y - X) / D) + 1;
    return (Y - X) / D;
}
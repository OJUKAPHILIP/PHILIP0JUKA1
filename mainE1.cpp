bool is_leap_year(unsigned int Y) {
    // If the year is a century year (divisible by 100)
    if (Y % 100 == 0) {
        // It is a leap year only if it is also divisible by 400
        return Y % 400 == 0;
    } else {
        // If the year is not a century year, it is a leap year if it is divisible by 4
        return Y % 4 == 0;
    }
}
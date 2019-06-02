long long int count2sinRangeAtDigit(long long int number, long long int d)
{
    string news = to_string(d);
    long long int count_2 = 0;
    for(long long int i = 0; i < news.size(); i++)
    {
        if (news[i] == '2')
            count_2 += 1;
    }
    return count_2;
}


long long int numberOf2sinRange(long long int number)
{
    long long int sum = 0;
    for(long long int i = 0; i <= number; i++)   
    {
        sum += count2sinRangeAtDigit(number, i);
    }
    return sum;
    // sum  = count2sinRangeAtDigit(number, 12);
}

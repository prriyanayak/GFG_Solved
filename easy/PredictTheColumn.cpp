int columnWithMaxZeros(int N){
    
    // Your code here
    int max = -1;
    int index = -1;
    for(int j = 0; j < N; j++)
    {
        int count = 0;
        for(int i = 0; i < N; i++)
        {
            if (M[i][j] == 0)
                count += 1;
        }
        // cout << "Count for " << j << ":" << count << endl;
        if (count > max)
        {
            max = count;
            index = j;
        }
    }
    return index;
    
}

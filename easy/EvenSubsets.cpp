int countSumSubsets(int arr[], int N)
{
    int powerSetSize = pow(2, N);
    // string str;
    int counter, j;
    int count = 0;
    for(counter = 1; counter < powerSetSize; counter++) 
    { 
        vector<int> sumvector;
        for(j = 0; j < N; j++) 
        { 
            if(counter & (1 << j)) 
                sumvector.push_back(arr[j]); 
        } 
        int sum = 0;
        for(int i = 0; i < sumvector.size(); i++)
        {
            sum += sumvector[i];
        }
        if (sum%2 == 0)
            count += 1;
    }
    return count;
}

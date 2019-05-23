vector<int> threeWayPartition(vector<int> A, int a, int b)
{
    vector<int>aNew,atob,bNew;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<a)
            aNew.push_back(A[i]);
        else if(A[i]>b)
            bNew.push_back(A[i]);
        else
            atob.push_back(A[i]);
    }
    int i=0;
    while(i<atob.size())
    {
        aNew.push_back(atob[i]);
        i++;
    }
    i=0;
    while(i<bNew.size())
    {
        aNew.push_back(bNew[i]);
        i++;
    }
    return aNew;
}

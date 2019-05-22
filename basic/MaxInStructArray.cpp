int findMax(Height arr[], int n)
{
	vector<int> array;
	for(int i = 0; i < n; i++)
	{
		int conv = arr[i].feet * 12;
		int sum = conv + arr[i].inches;
		array.push_back(sum);
	}
	sort(array.rbegin(), array.rend());
	return array[0];
    
}

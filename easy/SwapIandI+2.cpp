void swapElements(int arr[], int sizeof_array){
    for(int i = 0; i < sizeof_array-2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i+2];
        arr[i+2] = temp;
    }
}

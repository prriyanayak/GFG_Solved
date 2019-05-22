void interchange(int r,int c)
{
    //Your code here
    for(int i = 0; i < r; i++)
    {
        int temp = arr[i][0];
        arr[i][0] = arr[i][c-1];
        arr[i][c-1] = temp;
    }
  
  //Printing the modified matrix
    for(int i=0;i<r;i++)
	   { 
	       for(int j=0;j<c;j++)
    	    {
    	        cout<<arr[i][j]<<" ";
    	        
    	    }
    	 cout<<endl;
	   }
}

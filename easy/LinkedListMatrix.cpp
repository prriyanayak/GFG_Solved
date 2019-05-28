Node* construct(int arr[][MAX], int i, int j, int m, int n) 
{ 
    if (i > n - 1 || j > m - 1) 
        return NULL; 
    Node* temp = new Node(); 
    temp->data = arr[i][j]; 
    temp->right = construct(arr, i, j + 1, m, n); 
    temp->down  = construct(arr, i + 1, j, m, n); 
    return temp; 
} 
  
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
        Node *newLL;
        newLL = construct(mat, 0, 0, n, n);
        return newLL;
}

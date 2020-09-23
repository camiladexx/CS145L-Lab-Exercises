void bubbleSort(int arr[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {   
        for (j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) {  
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
void selectionSort(int arr[], int n)
{
  for (int step = 0; step < n - 1; step++)
  {
    int min_idx = step;
    for (int i = step + 1; i < n; i++)
    {
      if (arr[i] < arr[min_idx])
        min_idx = i;
    }
    swap(&arr[min_idx], &arr[step]);
  }
}

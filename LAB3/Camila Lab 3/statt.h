int sum(int arr[], int n){
    int sum = 0;
    for (int arrcount = 0; arrcount < n; arrcount++) 
    sum += arr[arrcount]; 
  
    return sum;
}

int ave(int arr[], int n){
    int ave = 0;
    for (int arrcount = 0; arrcount < n; arrcount++) 
    ave += arr[arrcount]; 
    ave = ave/5;
  
    return ave;
}

int low(int arr[], int n){
    int low = arr[0];
    for (int arrcount = 0; arrcount < n; arrcount++) 
        if (arr[arrcount] < low){
          low = arr[arrcount];  
        } 
 
    return low;
}

int high(int arr[], int n){
    int high = arr[0];
    for (int arrcount = 0; arrcount < n; arrcount++) 
        if (arr[arrcount] > high){
          high = arr[arrcount];  
        } 
 
    return high;
}

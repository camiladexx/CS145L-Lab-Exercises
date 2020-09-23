#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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


int main()
{
    int arr[5], min, max, arrcount, choiceagain;
    int choice = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("---- CAMILA, DEXTER B. LAB EXER 2 ----\n");
    arrcount = 0;
    while( arrcount < 5){
        printf("ENTER INTEGER NUMBER: ");
        scanf("%d", &arr[arrcount]);
        printf("\n");
        arrcount++;
    }
    
    printf("YOU ENTERED THE NUMBERS: \n");
    arrcount = 0;
    while( arrcount < 5){
         printf( "%d", arr[arrcount]);
         printf("\n");
        arrcount++;
    }

    again:
    choice = 0;
    printf("WHAT DO YOU WANT TO DO? \n");
    printf("[1] SUM\n");
    printf("[2] AVERAGE\n");
    printf("[3] MINIMUM\n");
    printf("[4] MAXIMUM\n");
    printf("[5] EXIT\n");
    printf("MAKE YOUR CHOICE: ");
    scanf("%d", &choice);
    
    if(choice == 1){
        printf("YOU PRESSED 1(SUM)! \n");
        printf("THE SUM IS: %d", sum(arr, n));
        printf("\nDO YOU WANT TO TRY IT AGAIN? [1] YES | [2] NO :");
        scanf("%d", &choiceagain);
        
        if(choiceagain == 1){
        goto again;
        }
        
        else if(choiceagain == 2){
        exit(0);
        }
        
    }
    
    else if(choice == 2){
        printf("YOU PRESSED 2(AVERAGE)! \n");
        printf("THE AVERAGE IS: %d", ave(arr, n));
        printf("\nDO YOU WANT TO TRY IT AGAIN? [1] YES | [2] NO :");
        scanf("%d", &choiceagain);
        
        if(choiceagain == 1){
        goto again;
        }
        
        else if(choiceagain == 2){
        exit(0);
        }
      
    }
    
    else if(choice == 3){
        printf("YOU PRESSED 3(MINIMUM)! \n");
        printf("THE MINIMUM IS: %d", low(arr, n));
        printf("\nDO YOU WANT TO TRY IT AGAIN? [1] YES | [2] NO :");
        scanf("%d", &choiceagain);
        
        if(choiceagain == 1){
        goto again;
        }
        
        else if(choiceagain == 2){
        exit(0);
        }
       
    }
    
    else if(choice = 4){
        printf("YOU PRESSED 4(MAXIMUM)! \n");
        printf("THE MAXIMUM IS: %d", high(arr, n));
        printf("\nDO YOU WANT TO TRY IT AGAIN? [1] YES | [2] NO :");
        scanf("%d", &choiceagain);
        
        if(choiceagain == 1){
        goto again;
        }
        
        else if(choiceagain == 2){
        exit(0);
        }
    }
    
    else if(choice = 5){
        exit(0);
    }
    
    
    return 0;
}

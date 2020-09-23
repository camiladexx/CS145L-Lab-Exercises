#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    printf("[5] BUBBLE SORT\n");
    printf("[6] SELECTION SORT\n");
    printf("[0] EXIT\n");
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
        printf("YOU PRESSED 5(BUBBLE SORT)! \n");
        bubbleSort(arr, n);
        printf("SORTED ARRAY:\n");
  		for (int i = 0; i < n; i++)
     		printf("%d\n", arr[i]);
        printf("\nDO YOU WANT TO TRY IT AGAIN? [1] YES | [2] NO :");
        scanf("%d", &choiceagain);
        
        if(choiceagain == 1){
        goto again;
        }
        
        else if(choiceagain == 2){
        exit(0);
        }
    }
    
    else if(choice = 6){
        printf("YOU PRESSED 6(SELECTION SORT)! \n");
        selectionSort(arr, n);
        printf("SORTED ARRAY:\n");
  		for (int i = 0; i < n; i++)
     		printf("%d\n", arr[i]);
        printf("\nDO YOU WANT TO TRY IT AGAIN? [1] YES | [2] NO :");
        scanf("%d", &choiceagain);
        
        if(choiceagain == 1){
        goto again;
        }
        
        else if(choiceagain == 2){
        exit(0);
        }
    }
    
    else if(choice = 0){
        exit(0);
    }
    
    
    return 0;
}

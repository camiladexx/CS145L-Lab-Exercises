/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package camila_activity4;

/**
 *
 * @author cisconetacad
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Camila_Activity4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        
            Scanner in = new Scanner(System.in);
           
          
        statClass stats = new statClass();
        int[] arr = stats.statNum;
        int choice;
        do{
           
        System.out.printf("---- CAMILA, DEXTER B. LAB EXER 4 ---- \n");
        System.out.printf("[1] SUM\n");
        System.out.printf("[2] AVERAGE\n");
        System.out.printf("[3] MINIMUM\n");
        System.out.printf("[4] MAXIMUM\n");
        System.out.printf("[5] EXIT\n");
        System.out.printf("MAKE YOUR CHOICE: ");
        choice = in.nextInt();
              
          switch(choice){
            case 1:
                System.out.println("The sum is " + stats.sum(arr));
                break;
            case 2:
                System.out.println("The ave is " + stats.ave(arr));
                break;
            case 3:
                System.out.println("The minimum is " + stats.low(arr));
                break;
            case 4:
                System.out.println("The maximum is " + stats.high(arr));
                break;
            case 5:
                System.exit(0);
                break;
            }
        }
        while(choice != 5);
        }
            
    
}

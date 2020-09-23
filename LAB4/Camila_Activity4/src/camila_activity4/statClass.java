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
public class statClass implements statInt {
    
    int[] statNum = {1,2,3,4,5};

    @Override
    public int sum(int[] s) {
         int su = 0;
        for(int arrcount = 0; arrcount < 5; arrcount++){
            su += statNum[arrcount];
        }
        return su;
    }

    @Override
    public int ave(int[] a) {
        int av = 0;    
        for(int arrcount = 0; arrcount < 5; arrcount++){
        av += statNum[arrcount];
        }
        av = av/5;
        return av;
    }

    @Override
    public int low(int[] l) {
        int lo = 0;    
        lo = statNum[0];
        for(int arrcount = 0; arrcount < 5; arrcount++){
        if(statNum[arrcount] < lo){
                lo = statNum[arrcount];
            }
            
            }
        return lo;
    }

    @Override
    public int high(int[] h) {
        int hi = 0;
        hi = statNum[0];
        for(int arrcount = 0; arrcount < 5; arrcount++){
        if(statNum[arrcount] > hi){
                hi = statNum[arrcount];
            }
            
            }
        return hi;
    }


}

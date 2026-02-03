// You are given a large integer represented as a integer array digits, where each digits[i] is the ith digit of the integer. 
// The digits are ordered from most significant to least significant in left to right order. The large integer doesn't contain any loading 0's. 
// Increment the large integer by one and return the array of digits.
#include <stdio.h>
 int main() {
    int a[5] = {9, 2, 3, 9, 9};
    int k[5];
    int j[6];
    
    int b=0;
    int i, c, d, f, h;
    for(i=0; i<5; i++) {
        b = b*10 + a[i];
    }
    d = b++;
    f = d / 1000;
    h = d % 10;
    if(a[0] == 9 && h<=9) {

    }
    if(a[4]>=9) {
        b++;
         for(c=5; c>=0; c--) {
            
            j[c] = b % 10;
            b = b / 10;
        }
        for(c=0; c<=5; c++) {
        printf("%d ", j[c]); 
    }    
    } else {
             b++;
        
             for(c=4; c>=0; c--) {
                k[c] = b % 10;
                b = b / 10;
             }
               for(c=0; c<=4; c++) {
               printf("%d ", k[c]);
             }    
}

    return 0;
 }
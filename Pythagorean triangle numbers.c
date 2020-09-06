/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c = 0; 
    int limit = 300; 
    int m = 2; 
  
    while (c < 300) { 
  
        for (int n = 1; n < m; ++n) { 
  
            a = m * m - n * n; 
            b = 2 * m * n; 
            c = m * m + n * n; 
  
            if (c > 300) 
                break; 
  
            printf("%d %d %d\n", a, b, c); 
        } 
        m++; 
    } 
    
    return 0; 
}

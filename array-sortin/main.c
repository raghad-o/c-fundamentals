#include<stdio.h> 
void main() 
{ 
 int i,j,temp; 
    int a[10] = {10, 7, 5, 8, 9, 6, 3, 2, 4, 1}; 
    for(i = 0; i<10; i++) 
    { 
     for(j=i+1; j<10; j++) 
        { 
         if(a[j] > a[i]) 
            { 
             temp = a[i]; 
                a[i] = a[j]; 
                a[j] = temp; 
            } 
        } 
    } 
    printf("Printing Sorted Element list ...\n"); 
    for(i = 0; i<10; i++) 
    { 
    printf("%d\n",a[i]); 
    } 
} 

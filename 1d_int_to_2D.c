 #include<stdio.h> 
#include<string.h> 


        int main() 
    { 
        int arr[3][3];
        int arr2[9]={1,2,3,4,5,6,7,8,9}; 
    
        int i,j,k=0; 
    
        for(i=0; i<3;i++){
            for(j=0; j<3;j++){
              arr[j][i] = arr2[3 *  j+i];
              
            }
            
        }
    
     for(i=0; i<3; i++) { 
        for(j=0; j<3; j++) 
          printf("%2d  ", arr[j][i]); 
        printf("\n"); 
      } 
    
        return 0; 
    } 

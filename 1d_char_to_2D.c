#include<stdio.h> 
#include<string.h> 
 
int main() { 

	char *d[9][9] ={0};  // Destination array 

	
    char * s[9]={"orange","apple","table","chair","cable","TV", "124","HI"};   

	int i,j,k=0; 
  
    for(i=0; i<3;i++){
        for(j=0; j<3;j++){
      
            d[j][i] = s[ 3 *  j+i];
           
        }
            }
    
    for(i=0; i<3; i++) { 
        for(j=0; j<3; j++) 
            printf("%s  ", d[j][i]); 
            printf("\n"); 
    } 
    

	return 0; 
} 

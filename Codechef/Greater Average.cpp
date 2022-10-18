#include <stdio.h>

int main(void) { 
int T;
    float a,b,c;
    scanf("%d",&T);
while(T--){
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    
    if((a+b)/2 > c){
    
    printf("yes \n");
    }
    else
    printf("No \n");
} 
	// your code goes here
	return 0;
}


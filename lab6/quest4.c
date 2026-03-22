#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    
    for(a; a<=b; a++){
        if(a<=9){
            switch (a){
                case 1:
                    printf("One");
                    break;
                case 2:
                    printf("Two");
                    break;
                case 3:
                    printf("Three");
                    break;
                case 4:
                    printf("Four");
                    break;
                case 5:
                    printf("Five");
                    break;
                case 6:
                    printf("Six");
                    break;
                case 7:
                    printf("Seven");
                    break;
                case 8:	
                    printf("Eight");
                    break;
                case 9:
                    printf("Nine");
                    break;
            }
        }
        else if(a%2==0){
                printf("Even");
        }
        else{
                printf("Odd");
        }
        if(a < b){
            printf(", ");
        }
    }
    return 0;
}
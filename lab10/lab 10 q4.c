//Declare a char array of size 1000, and take user input of a sentence. The sentence can contain as
//many words as the user wishes (less than 1000 characters). After taking input, you must create a 2D
//char array using ONLY POINTERS using calloc/malloc. You must parse through the original input
//char array and extract all the words from it into your new 2D char array. Example is given below:
//Example:
//Original Input: I will get A+ in PF-Lab if I work hard
//2D Array Output:
//I
//will
//get
//A+
//in
//PF-Lab
//if
//i
//work
//Hard

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char arr[1000];

    printf("Enter the sentence: \n");
    gets(arr);

    int count = 0;
    for (int i = 0; *(arr + i) != '\0'; i++) {
        if (*(arr + i) == ' ' || *(arr + i) == '\n') {
            count++;
        }
    }
    count++;

    char** ptr = (char**)malloc(count * sizeof(char*));

    int i = 0;
    int start = 0;
    for (int j = 0; *(arr + j) != '\0'; j++) {
        if (*(arr + j) == ' ') {
            int len = j - start;
            *(ptr + i) = (char*) malloc((len + 1) * sizeof(char));
            strncpy(*(ptr + i), arr + start, len);
            *(*(ptr+i) + len) = '\0';
            i++;
            start = j + 1;
        }
    }
    
    int len = strlen(arr) - start;
    if (len > 0) {
        *(ptr + i) = (char*)malloc((len + 1) * sizeof(char));
        strncpy(*(ptr + i), arr + start, len);
        *(*(ptr + i) + len) = '\0';
    }

    // Display the 2D array
    printf("2D Array Output:\n");
    for (int j = 0; j < count; j++) {
        printf("%s\n", *(ptr + j));
    }

    for (int j = 0; j < count; j++) {
        free(*(ptr + j));
    }
    free(ptr);

    return 0;
}

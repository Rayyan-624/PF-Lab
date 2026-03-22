//Consider a String entered by the user which he wants to encrypt and then decrypt the information.
//Perform this functionality via the filing technique by first inserting the encrypted text in the file
//then read the encrypted text to decode it back to string.
//Input:
//Enter String = Hello World
//Output:
//Normal Text
//Hello World
//Encrypted text inserted in file
//Igopt&amp;^w{vo
//Decrypted text Read then decoded from file
//Hello World
//(Note: For Encryption the algorithm would be is to take the length of the string then add the number
//based on the index position of the character of the string when inserting into the file)
//Example:
//ABC = //Here A is at position 1 B is at position 2 and c is at position 3 if we add these position
//values to
//their ascii code then the ascii values become
//Original values = 65 66 67; modified = 66 68 70 which converts the text to B D F

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[100];

    printf("Enter String = ");
    fgets(str, sizeof(str), stdin);

    // Encrypting
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '\0' && str[i] != '\n') { 
            str[i] = str[i] + (i + 1);
        }
    }

    // Inserting into the file
    FILE *file = fopen("file6.txt", "w");

    if (file != NULL) {
        fputs(str, file);
        fclose(file);
    } else {
        printf("Cannot create the file\n");
        exit(1);
    }

    printf("Encrypted text inserted into the file\n%s\n", str);

    // Reading the file and decrypting it
    file = fopen("file6.txt", "r");

    if (file != NULL) {
        while (fgets(str, sizeof(str), file) != NULL) {
        	
            for (int i = 0; i < strlen(str); i++) {
                if (str[i] != '\0' && str[i] != '\n') { 
                    str[i] = str[i] - (i + 1);
                }
        }
        printf("Decrypted string = %s\n", str);
        }
        fclose(file);
    } 
	else {
        printf("Error opening the file\n");
        exit(1);
    }
    
    return 0;
}
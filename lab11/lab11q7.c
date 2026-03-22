//7. Let us work on the menu of a library. Create a structure containing book information like
//accession number, name of author, book title and flag to know whether book is issued or not.
//Create a menu in which the following can be done.
//1 - Display book information
//2 - Add a new book
//3 - Display all the books in the library of a particular author
//4 - Display the number of books of a particular title
//5 - Display the total number of books in the library
//6 - Issue a book
//(If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets
//increased by 1)

#include <stdio.h>
#include <string.h>

struct lib{
	int access_no;
	char author_name[20];
	char book_title[30];
	int isIssued;
	
};

void DisplayBooks(struct lib book[], int numBooks){
	for(int i= 0; i < numBooks; i++){
		printf("Book Title: %s\n", book[i].book_title);
		printf("Author Name: %s\n", book[i].author_name);
		printf("Accession Number: %d\n", book[i].access_no);
	}
}

void AddBook(struct lib book[], int *numBooks){
	if(*numBooks < 10){
	printf("Enter Book Title: ");
	scanf(" %s", book[*numBooks].book_title);
	printf("Enter Author Name: ");
	scanf( "%s", book[*numBooks].author_name);
	printf("Enter accession number: ");
	scanf("%d", &book[*numBooks].access_no);
	book[*numBooks].isIssued = 0;
	(*numBooks)++;
	printf("Book added \n");
    }
    else {
    	printf("Library is full\n");
	}
}

void DisplayAuthourBooks(struct lib book[], int numBooks, char auth_name[]){
	for(int i = 0; i < numBooks; i++){
		if(strcmp(auth_name, book[i].author_name) == 0){
			printf("Book: %s\n", book[i].book_title);
		}
	}
}

void DisplayTitleBooks(struct lib book[], int numBooks, char tit_name[]){
	int count=0;
	for(int i = 0; i < numBooks; i++){
		if(strcmp(tit_name, book[i].book_title) == 0){
			count++;
		}
	}
	printf("No. of books with title %s: %d \n", tit_name, count);
}

void TotalBooks(int numBooks){
	printf("Total number of books: %d", numBooks);
}

void IssueBook(struct lib book[], int numBooks){
	int accession_number;
	printf("Enter accession number of the book to be issued: ");
	scanf("%d", &accession_number);
	
	for(int i = 0; i < numBooks; i++){
	    if(accession_number == book[i].access_no){
	    	if(book[i].isIssued == 0){
	    		book[i].isIssued = 1;
	    		printf("Book issued\n");
			}
			else {
				printf("Book issued already\n");
			}
		}
		else {
			printf("Invalid Accession Number\n");
		}
}}

int main(){
	struct lib book[10];
	int numBooks=0;

	for(int i = 0; i < 3; i++){
	printf("Enter Book Title: ");
	scanf(" %s", book[i].book_title);
	printf("Enter Author Name: ");
	scanf( "%s", book[i].author_name);
	printf("Enter accession number: ");
	scanf("%d", &book[i].access_no);
	book[i].isIssued = 0;
	numBooks++;
    }
    
    int choice;
    printf("Press '1' for all book information\n");
    printf("Press '2' for adding a new book\n");
    printf("Press '3' for books of particular author\n");
    printf("Press '4' for books of particular title\n");
    printf("Press '5' for total no. of books\n");
    printf("Press '6' for issuing a book\n");
    scanf("%d", &choice);
    
    char auth_name[20], tit_name[30];
    
	switch (choice){
		case 1:
			DisplayBooks(book, numBooks);
			break;
		case 2:
			AddBook(book, &numBooks);
			break;
		case 3:
			printf("Enter author's Name: ");
			scanf(" %s", auth_name[20]);
			DisplayAuthourBooks(book, numBooks, auth_name);
			break;
		case 4:
			printf("Enter title to display no. of books with it: ");
			scanf(" %s", tit_name[20]);
			DisplayTitleBooks(book, numBooks, tit_name);
			break;
		case 5:
			TotalBooks(numBooks);
			break;
		case 6:
			IssueBook(book, numBooks);
			break;
		default:
			printf("Invalid Choice\n");
			break;
		}
	return 0;
}

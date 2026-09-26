#include <stdio.h>
typedef struct book{
	char bname[20];
	int id;
	char author[23];
	int price;
}book;
void storedata(struct book *);
void displaydata(struct book );
void main(){
	struct book b1;
	printf("\n======Enter the book details=======\n");
	storedata(&b1);
	displaydata(b1);
}
void storedata(struct book *b1)
	{
    printf("Enter Book Name: ");
    scanf(" %s", b1->bname);

    printf("Enter Book ID: ");
    scanf("%d", &b1->id);

    printf("Enter Author Name: ");
    scanf(" %s", b1->author);

    printf("Enter Book Price: ");
    scanf("%d", &b1->price);
}
void displaydata(struct book b1){
	
    printf("\n--- Book Details ---\n");
    printf("Book Name : %s\n", b1.bname);
    printf("Book ID   : %d\n", b1.id);
    printf("Author    : %s\n", b1.author);
    printf("Price     : %d ", b1.price);
}



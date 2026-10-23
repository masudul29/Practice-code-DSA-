#include <stdio.h>

// Defining the structure
struct Book {
    char title[100];
    char author[100];
    char publisher[100];
    int year;
}s1,s2,s3,s4;

int main() {
    int n, i;
    printf("How many books do you want to list?");
    scanf("%d",&n);
    //getchar(); // To clear the buffer after scanf

    //struct Book b[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Title: ");
         gets(s1.title);
        printf("Author: ");
         gets(s2.author);
        printf("Publisher: ");
         gets(s3.publisher);
        printf("Publishing Year: "); scanf("%d", &s4.year);
        //getchar(); // Clear buffer for the next iteration
    }

    printf("\n--- List of Books ---\n");
    for(i = 0; i < n; i++) {
        printf("%d. Title: %s | Author: %s | Publisher: %s | Year: %d\n",
               i+1, s1.title, s2.author, s3.publisher, s4.year);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

// Define the Book structure
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[3]; // Array to store 3 books
    // int i;
    
    // Input details for 3 books
    for(int i = 0; i < 3; i++) {
        printf("\nEnter details for Book %d:\n", i+1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title); // Read entire line including spaces
        
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    
    // Find book with highest and lowest price
    int highest = 0, lowest = 0;
    for(int i = 1; i < 3; i++) {
        if(books[i].price > books[highest].price) {
            highest = i;
        }
        if(books[i].price < books[lowest].price) {
            lowest = i;
        }
    }
    
    // Display results
    printf("\nBook with highest price:\n");
    printf("Title: %s\n", books[highest].title);
    printf("Author: %s\n", books[highest].author);
    printf("Price: %.2f\n\n", books[highest].price);
    
    printf("Book with lowest price:\n");
    printf("Title: %s\n", books[lowest].title);
    printf("Author: %s\n", books[lowest].author);
    printf("Price: %.2f\n", books[lowest].price);
    
    return 0;
}

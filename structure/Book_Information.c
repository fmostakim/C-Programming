#include<stdio.h>
#include<string.h>
struct Book
{
    char title[100];
    char author[50];
    float price;
};

int main(){
    struct Book mybook;

    printf("Enter Title: ");
    scanf(" %99[^\n]", mybook.title);

    printf("Enter Author: ");
    scanf(" %49[^\n]",mybook.author);

    printf("Enter price: ");
    scanf("%f",&mybook.price);

    printf("\n--- Book Information ---\n");
    printf("Tile: %s\n",mybook.title);
    printf("Author: %s\n",mybook.author);
    printf("Price: %.2f\n",mybook.price);

    return 0;
}

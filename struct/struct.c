#include <stdio.h>
#include <string.h>
struct Book{
    int id;
    char *name;
    int price;
};
int main(){
    struct Book book;
    book.id=9;
    book.name="Hello Struct";
    book.price=10;

    printf("id: %d\n",book.id);
    printf("name: %s\n", book.name);
    printf("price: %d\n", book.price);





    return 0;
}
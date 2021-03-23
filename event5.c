#include "phoenixLib.h"

struct Book{ // Описание структуры
    char name[100]; // Название
    int year; // Год выпуска
    int pages; // Страницы
    int price; // Цена
};

int main(){
    translateOutput(); // Кириллица в консоль.

    struct Book Book; // Локальная переменная структуры Book.

    scanf("%s", Book.name); // Ввод имени и далее других параметров.
    scanf("%d", &Book.year);
    scanf("%d", &Book.pages);
    scanf("%d", &Book.price);
    // printf("%s%d%d%d", Book.name, Book.year, Book.pages, Book.price);



    return 0;
}
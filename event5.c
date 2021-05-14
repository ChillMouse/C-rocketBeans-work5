#include "phoenixLib.h"
#include <malloc.h>
#define quantity 4
struct Book { // Описание структуры
    char name[100]; // Название
    int year; // Год выпуска
    int pages; // Страницы
    int price; // Цена
};

struct Book p[quantity];

void sort_by_name();

int main(){
    translateOutput(); // Кириллица в консоль.
    int i, n;

    for (i = 0; i < quantity; i++) {
        n = i + 1;
        printf("\n Ввод данных книги %d", *&n);

        printf("\n Ввод названия книги (до 100 символов) для книги № %d:", *&n);
        scanf("%s", &p[i].name); // Ввод имени и далее других параметров.

        printf("\n Ввод года издания книги для книги № %d:", *&n);
        scanf("%d", &p[i].year);

        printf("\n Ввод колличества страниц для книги № %d:", *&n);
        scanf("%d", &p[i].pages);

        printf("\n Ввод цены для книги № %d:", *&n);
        scanf("%d", &p[i].price);
    }

    sort_by_name(p);

    for (i = 0; i < quantity ; i++) {
        printf("\n Название книги: %s", p[i].name);
        printf("\n Год издания: %d", p[i].year);
        printf("\n Колличество страниц: %d", p[i].pages);
        printf("\n Цена: %d", p[i].price);
    }

    return 0;
}

void sort_by_name(struct Book *p){
    int i, didSwap = 1, limit = quantity - 1;
    struct Book temp;

    while (didSwap) {
        didSwap = 0;
        for (i = 0; i < limit; i++) {
            if (strcmp (p[i].name, p[i + 1].name) > 0) {
                temp = p[i];
                p[i] = p[i + 1];
                p[i + 1] = temp;
                didSwap = 1;
            }
        }
        limit--;
    }
}

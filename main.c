#include <stdio.h>
#include <stdlib.h>
#include "column.h"
#include <locale.h>

int main() {
    // tests
    /*char *title = "test";
    column *column = create_column("tst");
    printf("Column title: %s\n", column->title);
    insert_value(column, 424578);
    insert_value(column, 4245);
    printf("Column data: %d\n", column->data[1]);
    printf("Column size: %d\n", column->size);
    printf("Number of occurences of %d: %d\n",column->data[0],
           nb_occurences(column, column->size, 424578));
    printf("Value at index 1: %d\n", value_at_index(column, 1));
    printf("Number of values greater than %d: %d\n", 4245, greater_than(column, 4245));
    printf("Number of values less than %d: %d\n", 4245, less_than(column, 4245));
    printf("Number of values equal to %d: %d\n", 4245, same_than(column, 4245));*/
    setlocale(LC_ALL, "en_US.UTF-8");
    printf("How do you want your column to be named?\n");
    char title[256];
    scanf("%s", title);
    column *column = create_column(title);
    printf("How many values do you want to enter for now ?\n");
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter value number %d\n", i + 1);
        int value;
        scanf("%d", &value);
        insert_value(column, value);
    }
    display_column(column);
    printf("How many values do you want me to hardfill ?\n");
    int size_hardfill;
    scanf("%d", &size_hardfill);
    int randint = rand() % RAND_MAX;
    for (int i = 0; i < size_hardfill; i++)
    {
        insert_value(column, randint);
        randint = rand() % RAND_MAX;
    }
    display_column(column);

    return 0;

}
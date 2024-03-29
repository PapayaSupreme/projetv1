#include <stdio.h>
#include "column.h"

int main() {
    // tests
    char *title = "test";
    column *column = create_column("tst");
    printf("Column title: %s\n", column->title);
    insert_value(column, 424578);
    insert_value(column, 4245);
    printf("Column data: %d\n", column->data[1]);
    printf("Column size: %d\n", column->size);
    printf("Number of occurences of %d: %d\n",column->data[0],
           nb_occurences(column, column->size, 424578));
    printf("Value at index 1: %d\n", value_at_index(column, 1));

    return 0;
}
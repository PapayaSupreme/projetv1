#include <stdio.h>
#include "column.h"

int main() {
    char *title = "test";
    column *column = create_column("tst");
    printf("Column title: %s\n", column->title);
    insert_value(column, 424578);
    insert_value(column, 4245);
    printf("Column data: %d\n", column->data[1]);
    return 0;
}

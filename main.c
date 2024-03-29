#include <stdio.h>
#include "column.h"

int main() {
    char *title = "test";
    column *column = create_column(title);
    printf("Column title: %s\n", column->title);

    return 0;
}

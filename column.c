//
// Created by pablo on 29/03/2024.
//

#include "column.h"
#include <stdlib.h>
#include <stdio.h>

column *create_column(char *title) {
    column *column = malloc(sizeof(column));
    column->title = title;
    column->data = NULL;
    column->size = 0;
    return column;
}

int insert_value(column *col, int value) {
    if (col->size % REALOC_SIZE == 0) {
        col->data = realloc(col->data, (col->size + REALOC_SIZE) * sizeof(int));
    }
    col->data[col->size] = value;
    col->size++;
    return 0;
}


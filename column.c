//
// Created by pablo on 29/03/2024.
//

#include "column.h"
#include <stdlib.h>

column *create_column(char *title) {
    column *column = malloc(sizeof(column));
    column->title = title;
    column->data = NULL;
    return column;
}
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
        col->physical_size += REALOC_SIZE;
    }
    col->data[col->size] = value;
    col->size++;
    return 0;
}

int nb_occurences(const column *col, int size, int value) {
    int nb = 0;
    for (int i = 0; i < size; i++)
    {
        if (col->data[i] == value)
        {
            nb++;
        }
    }
    return nb;
}

int value_at_index(const column *col, int index) {
    if (index >= col->size)
    {
        printf("Index out of range\n");
        return -1;
    }
    return col->data[index];
}

int greater_than(const column *col, int value) {
    int nb = 0;
    for (int i = 0; i < col->size; i++)
    {
        if (col->data[i] > value)
        {
            nb++;
        }
    }
    return nb;
}

int less_than(const column *col, int value) {
    int nb = 0;
    for (int i = 0; i < col->size; i++)
    {
        if (col->data[i] < value)
        {
            nb++;
        }
    }
    return nb;
}

int same_than(const column *col, int value) {
    int nb = 0;
    for (int i = 0; i < col->size; i++)
    {
        if (col->data[i] == value)
        {
            nb++;
        }
    }
    return nb;
}

void display_column(const column *col) {
    printf("Column title: %s\n", col->title);
    printf("Column data: ");
    for (int i = 0; i < col->size; i++)
    {
        printf("%d ", col->data[i]);
    }
    printf("\n");
}



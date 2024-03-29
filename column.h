//
// Created by pablo on 29/03/2024.
//

#ifndef PROJETV1_FUNCTIONS_H
#define PROJETV1_FUNCTIONS_H
#define REALOC_SIZE 256

// function to dynamically create a column from a title

//create column struct
typedef struct {
    char *title;
    int *data;
    int size;
} column;

column *create_column(char *title);
int insert_value(column *col, int value);
int nb_occurences(const column *col, int size, int value);
int value_at_index(const column *col, int index);
int greater_than(const column *col, int value);
int less_than(const column *col, int value);
int same_than(const column *col, int value);
#endif //PROJETV1_FUNCTIONS_H

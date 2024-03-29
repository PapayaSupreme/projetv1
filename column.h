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
} column;
column *create_column(char *title);


#endif //PROJETV1_FUNCTIONS_H

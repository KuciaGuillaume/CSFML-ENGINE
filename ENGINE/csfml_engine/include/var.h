/*
** EPITECH PROJECT, 2021
** CSFML engine
** File description:
** engine.h
*/

#include "engine.h"
#include "my.h"

#ifndef VAR_
    #define VAR_

struct var_s
{

};
typedef struct var_s var_t;

void create(var_t *var);
void update(var_t *var);
void engine_is_open(int *start, var_t *var);

#endif

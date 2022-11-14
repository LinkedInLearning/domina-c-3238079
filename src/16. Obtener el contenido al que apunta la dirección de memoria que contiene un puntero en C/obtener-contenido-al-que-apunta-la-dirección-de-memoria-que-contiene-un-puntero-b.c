/*
 * Curso: Domina C
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    int numeroAleatorio = 10;
    int *p_numeroAleatorio = &numeroAleatorio;

    printf("El contenido de la variable a la que apunta el punero es: %d", *p_numeroAleatorio);

    return 0;
}
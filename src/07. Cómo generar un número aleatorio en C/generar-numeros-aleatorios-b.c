/*
 * Curso: Domina C
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){

    srand(time(NULL));
    int numeroAleatorio = rand();

    printf("\nNúmero pseudo-aleatorio generado: %d\n", numeroAleatorio);

    return 0;
}
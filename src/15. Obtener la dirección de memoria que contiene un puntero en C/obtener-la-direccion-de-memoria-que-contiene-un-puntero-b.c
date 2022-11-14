/*
 * Curso: Domina C
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    int numeroAleatorio;
    int *p_numeroAleatorio = &numeroAleatorio;

    printf("Dirección: %p", p_numeroAleatorio);

    return 0;
}
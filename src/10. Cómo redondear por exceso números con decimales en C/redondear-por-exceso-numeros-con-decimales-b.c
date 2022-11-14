/*
 * Curso: Domina C
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>
#include <math.h>

int main(){

    float numeroQueDeseamosRedondear = 93.45;

    double numeroRedondeado = ceil(numeroQueDeseamosRedondear);

    printf("Numero redondeado: %d", (int)numeroRedondeado);

    return 0;
}
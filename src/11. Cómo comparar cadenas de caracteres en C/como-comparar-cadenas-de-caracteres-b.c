/*
 * Curso: Domina C
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string.h>

int main(){

    int resultadoComparacion = strcmp(correoElectronico1, correoElectronico2);

    if(resultadoComparacion == 0){
        // son iguales
    }
    else if(resultadoComparacion > 0){
        // correoElectronico1 > correoElectronico2
    }
    else {
        // correoElectronico2 > correoElectronico1
    }

    return 0;
}
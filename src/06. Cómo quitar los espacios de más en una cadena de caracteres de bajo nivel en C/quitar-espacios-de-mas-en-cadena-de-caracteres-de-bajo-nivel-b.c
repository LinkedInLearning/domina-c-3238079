/*
 * Curso: Domina C
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <stdio.h>

int main(){

    char correoElectronico[] = "conta  cto @ eliezer lop ez. com";
    int contador = 0;

    for (int i = 0; correoElectronico[i] != '\0'; i++){
        if(correoElectronico[i] != ' '){
            correoElectronico[contador] = correoElectronico[i];
            contador++;
        }
    }

    correoElectronico[contador] = '\0';

    printf("\n%s\n", correoElectronico);

    return 0;
}
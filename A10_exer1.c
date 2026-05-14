#include <stdio.h>

int main () {
    char nome[100];
    char disciplina[100];
    float soma;
    float media;

    printf("Digite um nome: ");
    scanf("%s", &nome);

    printf("Digite a disciplina: ");
    scanf("%s", &disciplina);
    
    float notas[3];
    
    for(int i = 0; i < 3; i++) {
        printf("Digite a nota:", i);
        scanf("%f", &notas[i]);
    }

    soma = notas[0]+notas[1]+notas[2];

    media = soma/3;

    printf("%s, obteve %1.f pontos na media da disciplina %s.", nome,media,disciplina);
    return 0;
}
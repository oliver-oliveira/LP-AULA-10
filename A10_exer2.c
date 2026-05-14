#include <stdio.h>

int main () {
    char senha[100];
    int i = 0;
    
    printf("Digite uma senha: ");
    scanf("%99s", senha);
    
    while(senha[i] != '\0') {
        i++;
    }
    
    if(i >= 8) {
        printf("Senha valida!\n");
    } else {
        printf("Senha invalida, precisa de pelo menos 8 caracteres.\n");
    }
    return 0;
}

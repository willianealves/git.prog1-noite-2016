//Trabalho AV2 Linguagem C
//  Aluno: Maria Williane 

#include <stdio.h>
int main(void) {
    struct Alunos
    {
        char nome[30];
        float nota;
    };
    struct Alunos alunos[30];
    struct Alunos aux[30];
    int count,change,i,final;
    final = 1;
    count = 0;
    i = 0;
    change = 0;
    printf("\nMeu nome e Williane Alves e este programa pode ser visto no seguinte endereço do github:\n https://github.com/willianealves/TrabalhoAv2\n");
    for(count = 0 ; count < 30 ; count++) {
        printf("\nNome do Aluno:\n");
        scanf("%s", alunos[count].nome) ; 
        printf("Entre com a nota de %s\n", alunos[count].nome);
        scanf("%f", &alunos[count].nota);
    }
    while (final > 0) {
           for (count = 0; count < 30;count++) {
                for (i = 0; i < 30 ;i++) {
                    if (alunos[i].nota < alunos[i+1].nota) {
                        aux[i] = alunos[i];
                        alunos[i] = alunos[i+1];
                        alunos[i+1] = aux[i];
                        change++;
                      }
                }
                if (change > 0) {
                      change = 0;
                  }  
                else {
                      final = 0;
                  }
            }
 
    }
    printf("\n    Listagem da AV1\n\n");
    printf("Nome\t\t\tNota\n");
    printf("---------------------------------------");
    for(count = 0 ; count < 30 ; count++) {
         printf("\n%s\t\t\t%.2f\n", alunos[count].nome,alunos[count].nota);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int acertos = 0;

    // 1. Lê o número de questões
    printf("Qual o numero de questoes: ");
    if (scanf("%d", &n) != 1)
        return 0;

    // 2. Aloca memória para as strings (n + 1 para o caractere '\0')
    char *gabarito = (char *)malloc((n + 1) * sizeof(char));
    char *respostas = (char *)malloc((n + 1) * sizeof(char));

    // 3. Lê as cadeias de caracteres
    printf("O gabarito da prova: ");
    scanf("%s", gabarito);
    printf("As suas repsotas: ");
    scanf("%s", respostas);

    // 4. Compara as respostas
    for (int i = 0; i < n; i++)
    {
        if (gabarito[i] == respostas[i])
        {
            acertos++;
        }
    }

    // 5. Saída do resultado
    printf("%d\n", acertos);

    // 6. Limpa a memória alocada
    free(gabarito);
    free(respostas);

    return 0;
}
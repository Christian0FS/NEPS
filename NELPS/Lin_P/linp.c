#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char mensagem[1001];

    printf("Digite seu codigo: ");
    if (scanf("%[^\n]", mensagem) != 1)
    {
        return 0;
    };

    int tam = strlen(mensagem);

    for (int i = 0; i < tam; i++)
    {
        if (mensagem[i] == 'p')
        {
            printf("%c", mensagem[i + 1]);
            i++;
        }
        else
        {
            printf("%c", mensagem[i]);
        }
    }
    printf("\n");
    return 0;
}
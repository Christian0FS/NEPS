#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char t[101];
    char s[101];

    printf("Digite a string S e T: ");
    if (scanf("%s %s", t, s) != 2)
        return 0;

    int tam = strlen(s);

    int des_base = (t[0] - s[0] + 26) % 26;
    int possivel = 1;

    for (int i = 0; i < tam; i++)
    {
        int des_atual = (t[i] - s[i] + 26) % 26;

        if (des_atual != des_base)
        {
            possivel = 0;
            break;
        }
    }
    if (possivel)
    {
        printf("Sim\n");
    }
    else
    {
        printf("Nao\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strupr(char *nome)
{
    char *p = nome;

    while (*p)
    {
        *p = toupper(*p);
        p++;
    }

    return nome;
}

int main()
{
    char nome[81], lista[81], armnome[81], maior[81] = {""}, aux[81];
    int i = 0, result;

    while (scanf("%s", nome) != EOF)
    {
        i++;
        strcpy(armnome, nome);
        strupr(nome);


        result = strcmp(maior, nome);
        if (result < 0)
        {
             strcpy(aux, armnome);
        }
        if (result > 0)
        {
            strcpy(aux, armnome);
        }

        strcpy(maior, nome);
    }

    printf("%s",aux);

    return 0;
}
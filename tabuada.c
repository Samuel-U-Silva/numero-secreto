#include <stdio.h>
#include <locale.h>

void tabuada(int numero)
{
    int i = 1;
    printf("Tabuada do %d\n", numero);
    while(i <= 10)
    {
        printf("%d * %d = %d \n", numero, i, (i*numero));
         i++;
    }
}
int main()
{
    int numero = 0;
    setlocale(LC_ALL, "portuguese");
    printf("Qual tabuada você deseja ver visualizar ?\n");
    scanf("%d", &numero);

    tabuada(numero);
}
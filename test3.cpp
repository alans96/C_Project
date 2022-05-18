#include <stdio.h>

int main(int argc, char const *argv[])
{
    int minhaIdade;

    minhaIdade = 25;

    int maeIdade;
    maeIdade = 48;

    int paiIdade = 40;

    printf("Minha idade e' = %i.\nPai idade = %i\nMae idade = %i\n",
    minhaIdade, paiIdade, maeIdade);

    int idadeTotal;

    idadeTotal = minhaIdade + paiIdade + maeIdade;

    printf("%i", idadeTotal);

    return 0;
}

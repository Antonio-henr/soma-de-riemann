#include <stdio.h>
#include <math.h>

int main()
{
    double quantTermos, grau, termo1, termo2, termo3, retangulos, x1, x2 = 0.0;
    // printf("quantos termos tem a funcao? ate 3 termos ");

    // scanf("%lf", &quantTermos);

    // printf("eh uma equacao do segundo grau? (1= sim, 0= nao)");
    // scanf("%lf", &grau);

    printf("insira a potencia do primeiro termo:");
    scanf("%lf", &termo1);
    printf("insira a quantidade de vezes que multiplica o segundo termo: ");
    scanf("%lf", &termo2);
    printf("insira a constante: ");
    scanf("%lf", &termo3);
    printf("insira a quantidade de rentangulos que voce deseja");
    scanf("%lf", &retangulos);

    printf("digite o intervalo [x1-x2]");
    scanf("%lf", &x1);
    scanf("%lf", &x2);

    double tamRetangulo, resultado = 0.0;

    tamRetangulo = (x2 - x1) / retangulos;

    for (double i = (x1+tamRetangulo); i <= x2; i += tamRetangulo)
    {
        resultado += (pow(i, termo1) - (termo2 * i) + termo3) * tamRetangulo;

        printf("x= %lf resultado parcial %lf \n\n",i,(pow(i, termo1) - (termo2 * i) + termo3) * tamRetangulo);
    }

    printf("%lf", resultado);

        return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Sua função
double f(double x) {
    return x*x*x - x - 1;
}

int main() {
    double a, b, fa, fb, xk, fxk, erro;
    int max_iteracoes, iteracao;

    printf("Intervalo: (%.3f %.3f)\n",a,b);
    scanf("%lf", &a);
    system("cls");
    printf("Intervalo: (%.3f %.3f)\n",a,b);
    scanf("%lf", &b);
    system("cls");
    printf("Intervalo: (%.3f %.3f)\n\n",a,b);


    fa = f(a);
    fb = f(b);
    if (fa * fb > 0) {
        printf("\nA funcao nao muda de sinal no intervalo [%f, %f].\n", a, b);
        return 1;
    }


    printf("\nDigite o n. maximo de iteracoes (k):\n(o criterio de parada eh o erro absoluto exceto este seja 0. caso nao saiba, digite qualquer valor acima da qtd. de iteracoes que quiser ex: 50)\n");
    scanf("%d", &max_iteracoes);
    printf("Digite o erro absoluto f(xk) (padrao, 0): ");
    scanf("%lf", &erro);


    for (iteracao = 1; iteracao <= max_iteracoes; iteracao++) {

        xk = (a * fb - b * fa) / (fb - fa);


        fxk = f(xk);


        printf("\nk %d:\n", iteracao);
        printf("fa = %f, fb = %f, a = %f, b = %f, xk = %f, fxk = %f\n", fa, fb, a, b, xk, fxk);

        if (fabs(fxk) < erro) {
            printf("\n[[Raiz encontrada: x = %lf]]\n", xk);
            return 0;
        }

        // Atualiza os valores de a, b, fa e fb
        if (fxk * fa < 0) {
            b = xk;
            fb = fxk;
        } else {
            a = xk;
            fa = fxk;
        }
    }

    printf("[[N. ma1ximo de iteracoes alcancado. Raiz aproximada: %lf]]\n",xk);
    return 1;
}

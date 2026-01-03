#include <stdio.h>

int main() {
    int opcao;
    float numero1, numero2, resultado;
    char continuar;

    do {
        printf("===============================\n");
        printf("   Calculadora Simples\n");
        printf("===============================\n");
        printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");

        if (scanf("%d", &opcao) != 1){
          printf("A opção deve ser um número válido! Tente novamente.\n");
          while (getchar() != '\n');
          continue;
        }
        if(opcao < 1 || opcao > 5){
          printf("A opção selecionada não existe! Tente novamente.\n");
          continue;
        }

        if (opcao == 5) break;

        printf("Digite o primeiro número: ");
        scanf("%f", &numero1);

        printf("Digite o segundo número: ");
        scanf("%f", &numero2);

        if(numero1)
        switch (opcao){
            case 1: resultado = numero1 + numero2;
                printf("Resultado: %.2f + %.2f = %.2f\n", numero1, numero2, resultado);
                break;
            case 2:
                resultado = numero1 - numero2;
                printf("Resultado: %.2f - %.2f = %.2f\n", numero1, numero2, resultado);
                break;
            case 3:
                resultado = numero1 * numero2;
                printf("Resultado: %.2f * %.2f = %.2f\n", numero1, numero2, resultado);
                break;
            case 4:
                if(numero2 == 0){
                    printf("Erro: Divisão por zero não é permitida.\n");
                    continue;
                }else{
                    resultado = numero1 / numero2;
                    printf("Resultado: %.2f / %.2f = %.2f\n", numero1, numero2, resultado);
                    break;
                }
        }


        do {
            printf("Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &continuar);

            while (getchar() != '\n');

            if (continuar != 's' && continuar != 'S' &&
                continuar != 'n' && continuar != 'N') {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }
        } while (continuar != 's' && continuar != 'S' &&
                 continuar != 'n' && continuar != 'N');

        if (continuar == 'n' || continuar == 'N') {
            break;
        }

    } while (continuar == 's' || continuar == 'S');
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
}

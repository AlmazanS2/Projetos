#include <stdio.h>
#include <string.h>


void questao1() {
    int n, a = 0, b = 1, c;
    int pertence = 0;

    printf("Informe um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: %d, %d", a, b);

    while (b <= n) {
        c = a + b;
        a = b;
        b = c;
        printf(", %d", b);

        if (b == n) {
            pertence = 1;
            break;
        }
    }

    printf("\n");

    if (pertence)
        printf("%d pertence a sequencia de Fibonacci.\n", n);
    else
        printf("%d nao pertence a sequencia de Fibonacci.\n", n);
}


void questao2() {
    char str[100];
    int i, count = 0;

    printf("Informe uma string para contar ocorrencias de 'a': ");
    fgets(str, sizeof(str), stdin); 

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    printf("A letra 'a' aparece %d vez(es).\n", count);
}


void questao3() {
    int INDICE = 12, SOMA = 0, K = 1;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("O valor final de SOMA e: %d\n", SOMA);
}


void questao4() {
    printf("Complete as sequencias:\n");
    printf("a) 1, 3, 5, 7, %d\n", 9);         
    printf("b) 2, 4, 8, 16, 32, 64, %d\n", 128); 
    printf("c) 0, 1, 4, 9, 16, 25, 36, %d\n", 49); 
    printf("d) 4, 16, 36, 64, %d\n", 100);     
    printf("e) 1, 1, 2, 3, 5, 8, %d\n", 13);   
    printf("f) 2, 10, 12, 16, 17, 18, 19, %d\n", 200); 
}

void questao5() {

    int resposta;

    printf("Voce esta em uma sala com tres interruptores, cada um conectado a uma lampada em salas diferentes.\n");
    printf("Voce nao pode ver as lampadas da sala em que esta, mas pode ligar e desligar os interruptores quantas vezes quiser.\n");
    printf("Seu objetivo e descobrir qual interruptor controla qual lampada, usando apenas duas idas ate uma das salas das lampadas.\n\n");

    printf("Escolha a resposta correta:\n");
    printf("1. Ligue o primeiro interruptor, espere alguns minutos, depois desligue e ligue o segundo. Va ate a sala para verificar.\n");
    printf("2. Ligue o segundo interruptor por 5 minutos, depois ligue o terceiro. Va ate a sala para verificar.\n");
    printf("3. Ligue os tres interruptores ao mesmo tempo, depois va ate a sala das lampadas para verificar.\n");
    printf("4. Ligue apenas o segundo interruptor, espere, e va verificar na sala das lampadas.\n");

    printf("\nDigite o numero da alternativa correta: ");
    scanf("%d", &resposta);

    if (resposta == 1) {
        printf("Correto! O primeiro interruptor deixa a lampada quente, o segundo controla a lampada acesa e o terceiro fica apagado e frio.\n");
    } else {
        printf("Incorreto. Tente novamente e preste atencao nas condicoes dadas.\n");
    }

}

int main() {
    int opcao;

    printf("Escolha a questao que deseja executar:\n");
    printf("1. Verificar se um numero pertence a sequencia de Fibonacci\n");
    printf("2. Contar ocorrencias da letra 'a' em uma string\n");
    printf("3. Calcular valor final da variavel SOMA\n");
    printf("4. Completar sequencias logicas\n");
    printf("5. Resolver problema dos interruptores\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    getchar(); 

    switch (opcao) {
        case 1:
            questao1();
            break;
        case 2:
            questao2();
            break;
        case 3:
            questao3();
            break;
        case 4:
            questao4();
            break;
        case 5:
            questao5();
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

#import<stdio.h>
#import<stdlib.h>
#import<locale.h>

//Entrada de dados.
main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    float m;
    char r;
    char g;
    char nome [30]; // *** PARA LER STRINGS N�O COLOCA "&"**

    printf("Digite um numero inteiro: ");
    fflush(stdin); // Limpa o buffer de entrada (teclado)
    scanf("%d",&num);

    printf("Digite um numero real: ");
    fflush(stdin); // Limpa o buffer de entrada (teclado)
    scanf("%f", &m);

    printf("Digite s� uma letra: ");
    fflush(stdin); // Limpa o buffer de entrada (teclado)
    scanf("%c", &r);

    printf("Digite outra letra: ");
    fflush(stdin);
    g = getchar(); // getchar substitui o scanf

    printf("DIGITE SEU NOME: ");
    fflush(stdin);
    gets(nome); // COMANDO para ler strings

    printf("Voc� acabou de digitar os valores: %d, %.1f e a letra %c, %c,%s .Obrigado!", num, m, r, g, nome);

}

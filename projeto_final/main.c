#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int linhasA;
    int colunasA;
    int linhasB;
    int colunasB;
    int matriza[50][50];
    int matrizb[50][50];
    int matrizc[50][50];
    int i,j,k;
    FILE *file;
    FILE *file1;
    FILE *fileout;
    int m[10][10];
    char localA[100];
    char localB[100];
    char localC[100];
    int x;

    printf("PROGRAMA DE MANIPULACAO DE MATRIZES\n");
    printf("(1) Definir o tamanho da matriz A\n");
    printf("(2) Definir o tamanho da matriz B\n");
    printf("(3) Preencher a matriz A com valores aleatorios\n");
    printf("(4) Preencher a matriz B com valores aleatorios\n");
    printf("(5) Atribuir valores manualmente para os elementos da matriz A\n");
    printf("(6) Atribuir valores manualmente para os elementos da matriz B\n");
    printf("(7) Calcular A+B\n");
    printf("(8) Calcular A-B\n");
    printf("(9) Calcular A*B\n");
    printf("(10) Imprimir matriz A\n");
    printf("(11) Imprimir matriz B\n");
    printf("(12) Imprimir matriz C\n");
    printf("(13) Ler a matriz A de um arquivo\n");
    printf("(14) Ler a matriz B de um arquivo\n");
    printf("(15) Escrever a matriz C em um arquivo\n");
    printf("(16) Sair\n");

    printf("escreva o local do arquivo A, se tiver:");
    fgets( localA,100, stdin );
    localA[43]=0;

    printf("escreva o local do arquivo B, se tiver:");
    fgets( localB,100, stdin );
    localB[43]=0;

    printf("escreva o local do arquivo C, se tiver:");
    fgets( localC,100, stdin );
    localC[43]=0;


    do{

        printf("PROGRAMA DE MANIPULACAO DE MATRIZES\n");
        printf("(1) Definir o tamanho da matriz A\n");
        printf("(2) Definir o tamanho da matriz B\n");
        printf("(3) Preencher a matriz A com valores aleatorios\n");
        printf("(4) Preencher a matriz B com valores aleatorios\n");
        printf("(5) Atribuir valores manualmente para os elementos da matriz A\n");
        printf("(6) Atribuir valores manualmente para os elementos da matriz B\n");
        printf("(7) Calcular A+B\n");
        printf("(8) Calcular A-B\n");
        printf("(9) Calcular A*B\n");
        printf("(10) Imprimir matriz A\n");
        printf("(11) Imprimir matriz B\n");
        printf("(12) Imprimir matriz C\n");
        printf("(13) Ler a matriz A de um arquivo\n");
        printf("(14) Ler a matriz B de um arquivo\n");
        printf("(15) Escrever a matriz C em um arquivo\n");
        printf("(16) Sair\n");
        printf("digite sua operacao:");
        scanf("%d", &valor);

        switch (valor) {
        case 1:
            printf("defina o valor de linhas da matriz A:");
            scanf("%d", &linhasA);

            printf("defina o valor de colunas da matriz A:");
            scanf("%d", &colunasA);
            printf("\n\n");

            break;

        case 2:///////////////////////////////////////////////////////////////////////
            printf("defina o valor de linhas da matriz B:");
            scanf("%d", &linhasB);

            printf("defina o valor de colunas da matriz B:");
            scanf("%d", &colunasB);
            printf("\n\n");

            break;

        case 3:
        {
            for ( i=0; i<50; i++ )
                for ( j=0; j<50; j++ )
                {
                    matriza[i][j] = rand()%100;
                }
            for ( i=0; i<50; i++ )
                for ( j=0; j<50; j++ )
                {
                    printf ("\nElemento[%d][%d] = %d\n", i, j,matriza[ i ][ j ]);
                }
        }
            printf("\n\n");
            break;

        case 4:
            for ( i=0; i<50; i++ )
                for ( j=0; j<50; j++ )
                {
                    matrizb[i][j] = rand()%100;
                }
            for ( i=0; i<50; i++ )
                for ( j=0; j<50; j++ )
                {
                    printf ("\nElemento[%d][%d] = %d\n", i, j,matrizb[ i ][ j ]);
                }
            printf("\n\n");
            break;

        case 5:
            for ( i=0; i<linhasA; i++ )
                for ( j=0; j<colunasA; j++ )
                {
                    printf ("\nElemento[%d][%d] = ", i+1, j+1);
                    scanf("%d", &matriza[i][j]);
                }
            printf("\n\n");
            break;

        case 6:
            for ( i=0; i<linhasB; i++ )
                for ( j=0; j<colunasB; j++ )
                {
                    printf ("\nElemento[%d][%d] = ", i+1, j+1);
                    scanf("%d", &matrizb[i][j]);
                }
            printf("\n\n");
            break;

        case 7:

            if(linhasA==linhasB && colunasA==colunasB){
                for(i=0; i<linhasA;i++)
                    for(j=0; j<colunasA; j++)
                    {
                        matrizc[i][j] = matriza[i][j] + matrizb[i][j];
                    }
                printf("\n\n");
                break;
            }else{
                printf("valor de colunas diferente do valor de linhas");
                printf("\n\n");
            }
            break;

        case 8:
            if(linhasA==linhasB && colunasA==colunasB){
                for(i=0; i<linhasA;i++)
                    for(j=0; j<colunasA; j++){
                        matrizc[i][j] = matriza[i][j] - matrizb[i][j];
                    }
                printf("\n\n");
                break;
            }else {
                printf("valor de colunas diferente do valor de linhas");
                printf("\n\n");
                break;
            }


        case 9:
            if (colunasA == linhasB) {
                for (i=0;i<linhasA; i++) {
                    for (j=0; j<linhasA; j++) {
                        for (k=0; k<colunasA; k++) {
                            matrizc[i][j] = matrizc[i][j] + (matriza[i][k] * matrizb[k][j]);

                        }
                    }
                }
                printf("\n\n");
                break;
            }else{
                printf("nao eh possivel calcular essa multiplicacao");
                printf("\n\n");
                break;
            }


        case 10:
            for (i=0;i<linhasA;i++) {
                printf("\n");
                for (j=0;j<colunasA;j++)
                    printf(" %d",matriza[i][j]);
            }
            printf("\n\n");
            break;


        case 11:
            for (i=0;i<linhasB;i++) {
                printf("\n");
                for (j=0;j<colunasB;j++)
                    printf(" %d",matrizb[i][j]);
            }
            printf("\n\n");
            break;


        case 12:
            for (i=0;i<linhasB;i++) {
                printf("\n");
                for (j=0;j<colunasA;j++)
                    printf("%d",matrizc[i][j]);
            }
            printf("\n\n");
            break;

        case 13:

            file =
                    fopen(localA,"r");
            fscanf(file,"%d %d", &linhasA, &colunasA);

            for(int i=0; i<linhasA; i++){
                for(int j=0; j<colunasA; j++){
                    fscanf(file,"%d", &matriza[i][j]);
                }
            }
            printf("\n");
            break;

        case 14:
            file1 =
                    fopen(localB,"r");
            fscanf(file1,"%d %d", &linhasB, &colunasB);

            for(int i=0; i<linhasB; i++){
                for(int j=0; j<colunasB; j++){
                    fscanf(file1,"%d", &matrizb[i][j]);
                }
            }
            printf("\n");
            break;

        case 15:

            fileout =
                    fopen(localC,"w");

            fprintf(fileout,"%d %d\n", colunasA, linhasB);

            for(int i=0; i<colunasA; i++){
                for(int j=0; j<linhasB; j++){
                    fprintf(fileout,"%d ", matrizc[j][i]);
                }
                fprintf(fileout, "\n");
            }
            fclose(fileout);
            break;
        }
    }while(valor!=16);
}

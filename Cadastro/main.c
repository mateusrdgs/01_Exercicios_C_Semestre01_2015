#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>>
int main(){

	//Seta localização de escrita igual ao do ambiente de execução
	setlocale(LC_CTYPE ,"");

	//Declaração de variáveis aqui
	int opcao=0, contador = 0, totalA=0, totalB=0, totalC=0, totalD=0, i=0;
	int vetCodigos[100] = {0}, vetGeneros[100] = {0};
    float vetNota1[100] = {0}, vetNota2[100] = {0};
    float media = 0, mediaGeral = 0, porcentagemA = 0, porcentagemB = 0, porcentagemC = 0, porcentagemD = 0, porcentoTotal = 100;

	do{

		system("cls");
		printf("============================\n");
		printf("-     MENU DE OPÇÕES       -\n");
		printf("============================\n");
		printf("1) Inserir nova nota\n");
		printf("2) Listar todas notas\n");
		printf("3) Listar alunos aprovados\n");
		printf("4) Listar alunos em exame final\n");
		printf("5) Listar alunos reprovados\n");
		printf("6) Média geral dos alunos\n");
		printf("7) Frequência de intervalos\n");
		printf("0) Sair do programa\n");
		printf("============================\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &opcao);

		switch(opcao){

			case 1:
				system("cls");
				printf("============================\n");
				printf("-      INSERIR NOTA        -\n");
				printf("============================\n");
                printf("Digite o código do aluno: ");
				scanf("%d", &vetCodigos[contador]);
				printf("Digite o gênero do aluno (0 = Masc, 1 = Fem): ");
				scanf("%d", &vetGeneros[contador]);
				printf("Digite a nota 1 do aluno: ");
				scanf(" %f", &vetNota1[contador]);
				printf("Digite a nota 2 do aluno: ");
				scanf(" %f", &vetNota2[contador]);
				contador++;
				printf("\n");
				system("pause");

			break;


			case 2:
				system("cls");
				printf("============================\n");
				printf("-      LISTAR NOTAS        -\n");
				printf("============================\n");
                printf("A quantidade de alunos cadastrados é: %d\n", contador);
                printf("-----------------------------");
                for(i=0; i < contador; i++)
                {
                    printf("\nCódigo do aluno: %d", vetCodigos[i]);
                    if((vetGeneros[i] == 0) || (vetGeneros[i]%2 == 0))
                    {
                       printf("\nSexo: Masculino");
                    }
                    else if((vetGeneros[i] == 1) || (vetGeneros[i]%2 == 1))
                    {
                       printf("\nSexo: Feminino");
                    }
                    printf("\nNota 1: %.2f", vetNota1[i]);
                    printf("\nNota 2: %.2f\n", vetNota2[i]);
                    media = ((vetNota1[i]+vetNota2[i])/2);
                    printf("Média: %.2f\n", media);
                    printf("-----------------------------");
                }
                printf("\n");
				system("pause");
			break;


			case 3:
				system("cls");
				printf("============================\n");
				printf("-     ALUNOS APROVADOS     -\n");
				printf("============================");
                for(i=0; i < contador; i++)
                {
                    media = 0;
                    media = ((vetNota1[i]+vetNota2[i])/2);
                    if(media>=7)
                    {
                        printf("\nCódigo do aluno: %d", vetCodigos[i]);
                        if((vetGeneros[i] == 0) || (vetGeneros[i] % 2 == 0))
                        {
                           printf("\nSexo: Masculino");
                        }
                        else if((vetGeneros[i] == 1) || (vetGeneros[i] % 2 == 1))
                        {
                           printf("\nSexo: Feminino");
                        }
                        printf("\nNota 1: %.2f", vetNota1[i]);
                        printf("\nNota 2: %.2f\n", vetNota2[i]);
                        media = ((vetNota1[i]+vetNota2[i])/2);
                        printf("Média: %.2f\n", media);
                        printf("-----------------------------");
                    }
                }
                printf("\n");
				system("pause");
			break;


			case 4:
				system("cls");
				printf("============================\n");
				printf("-    ALUNOS RECUPERAÇÃO    -\n");
				printf("============================");
                for(i=0; i < contador; i++)
                {
                    media = 0;
                    media = ((vetNota1[i]+vetNota2[i])/2);
                    if(media<7 && media >=5)
                    {
                        printf("\nCódigo do aluno: %d", vetCodigos[i]);
                        if((vetGeneros[i]== 0) || (vetGeneros[i]%2 == 0))
                        {
                           printf("\nSexo: Masculino");
                        }
                        else if((vetGeneros[i] == 1) || (vetGeneros[i]%2 == 1))
                        {
                           printf("\nSexo: Feminino");
                        }
                        printf("\nNota 1: %.2f", vetNota1[i]);
                        printf("\nNota 2: %.2f\n", vetNota2[i]);
                        media = ((vetNota1[i]+vetNota2[i])/2);
                        printf("Média: %.2f\n", media);
                        printf("-----------------------------");
                    }
                }
                printf("\n");
				system("pause");
			break;


			case 5:
				system("cls");
				printf("============================\n");
				printf("-    ALUNOS REPROVADOS     -\n");
				printf("============================");
				for(i=0; i < contador; i++)
                {
                    media = 0;
                    media = ((vetNota1[i]+vetNota2[i])/2);
                    if(media<5)
                    {
                        printf("\nCódigo do aluno: %d", vetCodigos[i]);
                        if((vetGeneros[i] == 0) || (vetGeneros[i]%2 == 0))
                        {
                           printf("\nSexo: Masculino");
                        }
                        else if((vetGeneros[i]== 1) || (vetGeneros[i]%2 == 1))
                        {
                           printf("\nSexo: Feminino");
                        }
                        printf("\nNota 1: %.2f", vetNota1[i]);
                        printf("\nNota 2: %.2f\n", vetNota2[i]);
                        media = ((vetNota1[i]+vetNota2[i])/2);
                        printf("Média: %.2f\n", media);
                        printf("-----------------------------");
                    }
                }
                printf("\n");
				system("pause");

			break;

			case 6:
				system("cls");
				printf("============================\n");
				printf("-       Média geral        -\n");
				printf("============================");
				media = 0;
				for(i=0; i < contador; i++)
                {
                    media += ((vetNota1[i]+vetNota2[i])/2);

                }
                mediaGeral = media/i;
                printf      ("\nMédia geral da turma:% .2f\n", mediaGeral);
                printf("\n");
				system("pause");
			break;

			case 7:
				system("cls");
				totalD = 0;
				totalC = 0;
				totalB = 0;
				totalA = 0;
				porcentagemD = 0;
				porcentagemC = 0;
				porcentagemB = 0;
				porcentagemA = 0;
				printf("============================\n");
				printf("-       Frequências        -\n");
				printf("============================");
				for(i=0; i < contador;i++)
                {
                    media = 0;
                    media = ((vetNota1[i]+vetNota2[i])/2);
                    if(media>=0 && media<=2.5)
                    {
                        totalD++;
                    }
                    else if(media>=2.6 && media<=5)
                    {
                        totalC++;
                    }
                    else if(media >=5.1 && media<=7.5)
                    {
                        totalB++;
                    }
                    else if(media >=7.6 && media <=10)
                    {
                        totalA++;
                    }
                }
                if(totalD == 0)
                {
                    porcentoTotal = porcentoTotal;
                    porcentagemD = 0;
                }
                else if(totalD > 0)
                {
                    porcentagemD = (((float)totalD/i)*100);
                    porcentoTotal -= porcentagemD;
                }
                if(totalC == 0)
                {
                    porcentoTotal = porcentoTotal;
                    porcentagemC = 0;
                }
                else if(totalC > 0)
                {
                    porcentagemC = (((float)totalC/i)*100);
                    porcentoTotal -=porcentagemB;
                }
                if(totalB == 0)
                {
                    porcentoTotal = porcentoTotal;
                    porcentagemB = 0;
                }
                else if (totalB > 0)
                {
                    porcentagemB = (((float)totalB/i)*100);
                    porcentoTotal -= porcentagemB;
                }
                if(totalA == 0)
                {
                    porcentoTotal = porcentoTotal;
                    porcentagemA = 0;
                }
                else if(totalA > 0)
                {
                    porcentagemA = (((float)totalA/i)*100);
                }

                printf("\n0.0 - 2.5: %d (%.2f)\n", totalD, porcentagemD);
                printf("2.6 - 5.0: %d (%.2f)\n", totalC, porcentagemC);
                printf("5.1 - 7.5: %d (%.2f)\n", totalB, porcentagemB);
                printf("7.6 - 10 : %d (%.2f)\n\n", totalA, porcentagemA);

				system("pause");
			break;

		}

	}while(opcao != 0);

	return 0;
}

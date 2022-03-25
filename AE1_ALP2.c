#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int op, vv, vp, vv1=0, vv2=0, vv3=0, vvn=0, vvi=0, vp1=0, vp2=0, vpn=0, vpi=0;
	
	printf("1 - Votar \n2 - Apuração dos votos \n3 - Sair\n");
	scanf("%d", &op);
	system("cls");
	
	while(op < 3)
	{
		if(op == 1)
		{
			printf("Voto para Vereador\n");
			printf("\n111 - Vereador Joao do Frete\n222 - Vereador Maria da Pamonha\n333 - Vereador Zé da Farmacia\n444 - Voto Nulo\n");
			scanf("%d", &vv);
			system("cls");
			
			switch(vv)
			{
				case 111:
					vv1++;
					break;
					
				case 222:
					vv2++;
					break;
					
				case 333:
					vv3++;
					break;
					
				case 444:
					vvn++;
					break;
					
				default:
					vvi++;
					break;
			}
		
			printf("Voto confirmado!\n");
			printf("\nVoto para Prefeito\n");
			printf("\n11 - Prefeito Dr. Zureta\n22 - Prefeito Senhor Gomes\n44 - Voto Nulo\n");
			scanf("%d", &vp);
			system("cls");
			
			switch(vp)
			{
				case 11:
					vp1++;
					break;
					
				case 22:
					vp2++;
					break;
					
				case 44:
					vpn++;
					break;
					
				default:
					vpi++;
					break;
			}
			printf("Voto Confirmado!\n");
		}
		
		else
		{
			printf("\nApuração dos votos: Vereador\n");
			printf("\nVereador Joao do Frete: %d\n", vv1);
			printf("Vereador Maria da Pamonha: %d\n", vv2);
			printf("Vereador Ze da Farmacia: %d\n", vv3);
			printf("Votos nulos: %d\n", vvn);
			printf("votos invalidos: %d\n", vvi);
			printf("\n--------------------------------------\n");
			printf("\nApuração dos votos: Prefeito\n");
			printf("\nPrefeito Dr. Zureta: %d\n", vp1);
			printf("Prefeito Senhor Gomes: %d\n", vp2);
			printf("Votos Nulos: %d\n", vpn);
			printf("Votos invalidos: %d\n", vpi);
			printf("\n----------------------------------------\n");
			printf("O que deseja fazer agora?\n");
		}
		
		printf("\n1 - Votar \n2 - Apuração dos votos \n3 - Sair\n");
		scanf("%d", &op);
		system("cls");
	}
	printf("Obrigado!");
	return (0);
}

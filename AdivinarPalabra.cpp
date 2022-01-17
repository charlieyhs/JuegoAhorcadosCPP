#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	bool acierto = false;	
	char oculta[20];
	char caracter;
	char adivinar[20];
	char copia[20];
	
	int intentos = 5;
	int longitud;
	
	printf("\nDigita Palabra Oculta: ");
	gets(oculta);
	longitud = strlen(oculta);
	
	for(int i=0;i<longitud;i++){
		adivinar[i] = '-';
	}
	strcpy(copia,oculta);
	do{
		
		system("cls");
		acierto = false;
		
		printf("\t\t\tBienvenido");		
		printf("\n\n\tPalabra Oculta: %s",adivinar);
		printf("\n\tintentos: %d",intentos);
		
		if(strcmp(adivinar,copia)==0){
			printf("\n\n\t\tFELICITACIONES, HA ENCONTRADO LA PALABRA OCULTA\n");
			exit(1);
		}
		
		printf("\n\tDigite Letra: ");
		scanf("%s",&caracter);
		
		for(int j=0;j<longitud;j++){
			if(caracter == copia[j]){
				adivinar[j] = caracter;
				acierto = true;
			}
		}
		if(acierto==false){
			intentos--;
		}
		
	}while(intentos > 0);

	printf("\n\t\tHAS PERDIDO, LA PALABRA ERA: %s\n",copia);
}
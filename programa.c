#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

void minijuego1(){
	char respuesta[50],acertar[50]="potasio";
	int puntos1=0;
	
	printf("PRIMER MINIJUEGO\n");
	printf("Disponemos de los siguientes compuestos:\n");     
	printf("Oxigeno\nOxigeno\nTantalo\nSilicio\nFosforo\n");
	printf("A partir de sus simbolos, se debe formar el nombre de otro elemento de la tabla periodica\n");
	while(puntos1!=5){
		printf("Respuesta(en minusculas):");
		scanf("%s",respuesta);
		if(strcmp(respuesta,acertar)==0){
			printf("Acertaste\n");
			puntos1=puntos1+5;
		} else {
			printf("Has fallado\n");
			puntos1=puntos1+0;
		}
	}
	
	printf("Puntos: %d\n",puntos1);
	
}

void SopaLetras (){
		
	int oportunidades=5, puntos2=0;
	int palabra1=0,palabra2=0,palabra3=0,palabra4=0,palabra5=0, palabra6=0;//0=disponible||1=ocupada
	char s[20];
    
	do{
       system("cls");
        	printf("Te faltan %i palabras por encontrar\n", oportunidades);
            printf("\n  t a t u o m b m i k n a k m i b k n g a\n");
            printf("\n  h a d f n b r j b s j m e n y b m i n u\n");
            printf("\n  g h e f s v e r l e n m e y e r m s f u\n");
            printf("\n  l r s i d v h y f d r w f b o j u b m o\n");
            printf("\n  p j t j m l j l k u t o l p s a n l g b\n");
            printf("\n  i u r d o r a d o w n e t f j a d o u u\n");
        	printf("\n  l r u s d v h y f d r w f b h j o b m l\n");
            printf("\n  e o i r e u p t q u i e r e w v k b k j\n");
            printf("\n  i u r d t e s v l m g o i e a w n i i u\n");
            printf("\n\nPalabra:");
            scanf("%s", & s);
            if(strcmp(s, "dorado")==0&&palabra1==0){
                printf("Palabra encontrada! 5 puntos\n");
                puntos2=puntos2+5;
                oportunidades=oportunidades-1;
                palabra1=1;
                system("pause");
            }else if(strcmp(s, "erlenmeyer")==0&&palabra2==0){
                printf("Palabra encontrada!\n");
                puntos2=puntos2+5;
                oportunidades=oportunidades-1;
                palabra2=1;
                system("pause");
            }else if(strcmp(s, "mundo")==0&&palabra3==0){
                printf("Palabra encontrada!");
                puntos2=puntos2+5;
                oportunidades=oportunidades-1;
                palabra3=1;
                system("pause");
            }else if(strcmp(s, "destruir")==0&&palabra4==0){
                printf("Palabra encontrada!\n");
                puntos2=puntos2+5;
                oportunidades=oportunidades-1;
            	palabra4=1;
            	system("pause");
            }else if(strcmp(s, "quiere")==0&&palabra5==0){
                printf("Palabra encontrada!\n");
                puntos2=puntos2+5;
                oportunidades=oportunidades-1;
            	palabra5=1;
            	system("pause");
            }else if(strcmp(s, "paso")==0&&palabra6==0){
            	printf("Te has rendido :( \n)");
            	oportunidades=0;
            	 puntos2=puntos2+0;
            	system("pause");
            }else{
                printf("\n\nIncorrecto. Esa palabra no esta o ya la has escrito.\n");
                puntos2=puntos2-1;
                system("pause");
            }
    }while(oportunidades!=0);
	

	system("cls");
    printf("Muy bien!\n");
    printf("puntuacion:%d", puntos2);
	
}
int main(){
    char opcion;
    int puntuacion;
    char nombre[50],respuesta;
    
    FILE*fentrada;
    FILE*fsalida;

    do
    {
        printf("Bienvenido el Erlenmeyer Dorado valiente\n");
        printf("1. REGLAS\n");
        printf("2. JUGAR\n");
        printf("3. RANKING\n");
        printf("4. SALIR\n");

        do
        {
            printf("Introduce una opcion:\n");
            fflush( stdin );
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '4' );
        /* La opción sólo puede ser '1', '2', '3' o '4' */

        switch ( opcion )
        {
            case '1': printf("LAS REGLAS SON LAS SIGUIENTES:\n");
            		system("pause");
        			system("cls");
                      break;

            case '2': printf("MINIJUEGO 1\n");
					minijuego1();
					system("pause");
        			system("cls");
        			
					printf("MINIJUEGO 2\n");
        			
        			SopaLetras();
        			system("pause");
        			system("cls");
                      break;

            case '3': 
            	fentrada=fopen("entrada.txt","r");
            	if(fentrada==NULL){
            		printf("Error en la apertura del fichero de entrada\n");
            		return 0;
				}
				
				while(fscanf(fentrada,"%s %d",nombre,&puntuacion)!=EOF){
					printf("%s %d\n",nombre,puntuacion);
					fprintf(fsalida,"%s %d\n",nombre,puntuacion);
				}
				
				fsalida=fopen("salida.txt","w");
				if(fentrada==NULL){
					printf("Error en la apertura del fichero de salida\n");
					return 0;
				}
				
				fclose(fentrada);
				fclose(fsalida);
                      break;
        }

    } while ( opcion != '4' );

    return 0;
}

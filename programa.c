#include <conio.h>
#include <stdio.h>

int main()
{
    char opcion;
    int puntuacion;
    char nombre[50];
    
    FILE*fentrada;
    FILE*fsalida;

    do
    {
        printf("Bienvenido el Erlenmeyer Dorado valiente\n");
        printf("1. REGLAS\n");
        printf("2. JUGAR");
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
                      break;

            case '2': 
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

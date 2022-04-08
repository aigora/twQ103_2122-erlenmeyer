#include <stdio.h>

int main(){
	int opcion;

    do
    {
		printf("Bienvenido al Erlenmeyer Dorado valiente.\n");
		printf("1. REGLAS\n");
		printf("2. JUGAR\n");
		printf("3. RANKING\n");
		printf("4. SALIR");
        do
        {
            printf("Introduzca opcion:");
            scanf( "%d", &opcion);
        } while ( opcion < '1' || opcion > '4' );

        switch ( opcion )
        {
            case '1': 
                      break;

            case '2': 
                      break;
            case '3':
                      break;            	
        }

    } while ( opcion != '4' );

	return 0;
}

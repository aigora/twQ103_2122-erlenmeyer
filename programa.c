#include <stdio.h>

int main(){
	int opcion;

    do
    {
		printf("Bienvenido al Erlenmeyer Dorado valiente.\n");
		printf("1. JUGAR\n");
		printf("2. RANKING\n");
		printf("3. SALIR");
        do
        {
            printf("Introduzca opcion:");
            scanf( "%d", &opcion);
        } while ( opcion < '1' || opcion > '3' );

        switch ( opcion )
        {
            case '1': 
                      break;

            case '2': 
                      break;
        }

    } while ( opcion != '3' );

	return 0;
}

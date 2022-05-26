#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

struct usuario{
	char nombre;
	int puntos;
	int logro;
};

int minijuego1(int puntuacion){
	char respuesta[50],acertar[50]="potasio";
	int puntos1=0;
	
	printf("Mike se encuentra en el laboratorio  como un dia mas. Es uno de los mejores quimicos que hay. Su trabajo consiste en comprobar que todas las formulas esten elaboradas correctamente.\n");
	printf("Casi finalizando su turno, recibe una llamada. Al descolgar el telefeono, una voz misteriosa dice: \n -Veamos que tan buen quimico eres- dice la voz en tono desafiante.\n");
	printf("Al pronunciar la ultima palabra cuelgan. Mike estaba bastante desconcertado ante esta situacion. En ese momento se escucha un fuerte golpe en la puerta. Cuando va a revisar, se encuentra una nota con lo siguiente escrito: \n");
	printf("                                 MINIJUEGO 1\n");
	
	printf("Disponemos de los siguientes compuestos:\n");     
	printf("Oxigeno\nOxigeno\nTantalo\nSilicio\nFosforo\n");
	printf("A partir de sus simbolos, se debe formar el nombre de otro elemento de la tabla periodica\n");
	printf("Si necesitas una ayuda escribe 'pista'.\n");
	while(puntos1!=5){ //hasta que no la acierte(consiga los puntos) segirá estando el minijuego
		printf("Respuesta(en minusculas):");
		scanf("%s",respuesta); //solucion: 'potasio'
		if(strcmp(respuesta,acertar)==0){
			printf("ENHORABUENA!!! Acertaste\n");
			puntos1=puntos1+5;
		}else if(strcmp(respuesta,"pista")==0){ //ayuda por si el jugador no puede resolverlo
			printf("Los simbolos son:\n -Oxigeno: O (OJO HAY 2!!)\n -Tantalio: Ta\n -Silicio: Si\n -Fosforo: P\n");
			printf("Reorganizando esas silabas/letras, puedes crear el nombre de otro elemento?\n");
		}else {
			printf("Has fallado\n");
			//puntos1=puntos1+0;
		}
	}
	
	puntuacion=puntuacion+puntos1;
	return puntuacion;
}

int minijuego2(int puntuacion){
	int elegir;
	char adivinanza[500]="Si tres ninyos cazan tres moscas en tres minutos. Cuanto tardaran treinta ninyos en cazar treinta moscas?";// respuesta: '3'
	char aux;
	int i,j=0, contador=0, puntos2=5;
	int resp;
	int aux2=0;
	
	
	printf("Eso ha sido pan comido para nuestro quimico Mike. \n-Que seria de nuestra vida sin el potasio-penso Mike para sí mismo.\n");
	printf("Como cada dia, Mike siempre revisa el correo antes de finalizar su turno. Estaba terminando de revisar los correos pendientes cuando le llego uno de un usuario desconocido.\n");	
	printf("'Dirigete al vestibulo'- decia aquel misterioso correo. Como ya era su hora de salida, le pillaba de paso.\n");
	printf("Para llegar al vestibulo tenia 2 opciones: ir por las escaleras o ir por el ascensor.Su laboratorio estaen la planta 4...\n");
	printf("                                 MINIJUEGO 2\n");
	printf("Por donde deberia ir Mike? (1) escaleras o (2) ascensor\n");
	
	
	do{
		printf("Elige un numero:");
		scanf("%d", &elegir);
	}while(elegir!=1 && elegir !=2);
	
	
	if(elegir==1){
		printf("Mike comienza a bajar las escaleras. Antes de llegar a la primera planta encuentra una nota con lo siguiente.\n");
		printf("'Fue buena idea bajar por las escaleras' penso Mike.\n");
		printf("\n       ADIVINANZA\n");
		printf("%s\n",adivinanza);
		while(aux2!=1){ 
			printf("Respuesta numerica:");
			scanf("%d",&resp);
			if(resp==3){
				printf("BIEN HECHO\n");
				aux2+=1;
			}else{
				printf("Incorrecto, vuelve a intentarlo\n");
			}
		}
	}else if(elegir==2){
		printf("Mike ha subido al ascensor y ha dado al boton para bajar al vestibulo. Mientras baja, el ascensor se para. No funciona.\n ");
		printf("Por seguridad Mike decide bajar del ascensor y aun esta en la planta 2.\n ");
		printf("\n");
		printf("Como consecuencia de la fatal decision de ir en ascensor estas maldecido y verás el proximo acertijo al reves. ''Porque el vago siempre trabaja 2 veces''\n");
		printf("Mike comienza a bajar las escaleras. Antes de llegar a la primera planta encuentra una nota con lo siguiente.\n");
		printf("\n       ADIVINANZA\n");
		
		while (adivinanza[j]!='\0'){
                contador++;
                j++;
        }

        // Este código invierte la cadena
        for (i=0;i<contador/2;i++) {
                aux=adivinanza[contador-1-i];
                adivinanza[contador-1-i]=adivinanza[i];
                adivinanza[i]=aux;
        }
        
        printf ("%s\n", adivinanza);
        
        
		while(aux2!=1){ 
			printf("Respuesta numerica:");
			scanf("%d",&resp);
			if(resp==3){
				printf("BIEN HECHO\n");
				aux2+=1;
			}else{
				printf("Incorrecto, vuelve a intentarlo\n");
			}
		}
	}
	
	puntuacion=puntuacion+puntos2;
    
    return puntuacion;
}

int SopaLetras (int puntuacion){
		
	int oportunidades=5, puntos3=0; //con las oportunidades contaremosel num de palabras encontras, si llega a 0 ha encontrado todas las palabras o ha pasado.
	int palabra1=0,palabra2=0,palabra3=0,palabra4=0,palabra5=0, palabra6=0;//0=disponible||1=ocupada de esta manera no se pueden devolver palabras.
	char s[20], volvermenu[20];
    
	do{
       system("cls");
            printf("En la nota hay una firma extrañamente familiar, la del Dr. Zalben con lo siguiente escrito:\n ");
        	printf("Acierta todas las palabra para dar con mis intenciones:\n");
        	printf("(Te faltan %i palabras por encontrar)\n", oportunidades);
            printf("\n  t a t u o m b m i k n a k m i b k n g a\n");
            printf("\n  h a d f n b r j b s j m e n y b m i n u\n");
            printf("\n  g h e f s v e r l e n m e y e r m s f u\n");
            printf("\n  l r s i d v h y f d r w f b o j u b m o\n");
            printf("\n  p j t j m l j l k u t o l p s a n l g b\n");
            printf("\n  i u r d o r a d o w n e t f j a d o u u\n");
        	printf("\n  l r u s d v h y f d r w f b h j o b m l\n");
            printf("\n  e o i r e u p t q u i e r e w v k b k j\n");
            printf("\n  i u r d t e s v l m g o i e a w n i i u\n");
	    printf("\n");
	    printf("Si deseas rendirte escribe 'paso'\n");
            printf("\n\nPalabra:");
            scanf("%s", & s);
            if(strcmp(s, "dorado")==0&&palabra1==0){
                printf("Palabra encontrada! 5 puntos\n");
                puntos3=puntos3+5;
                oportunidades=oportunidades-1;
                palabra1=1;
                system("pause");
            }else if(strcmp(s, "erlenmeyer")==0&&palabra2==0){
                printf("Palabra encontrada!\n");
                puntos3=puntos3+5;
                oportunidades=oportunidades-1;
                palabra2=1;
                system("pause");
            }else if(strcmp(s, "mundo")==0&&palabra3==0){
                printf("Palabra encontrada!");
                puntos3=puntos3+5;
                oportunidades=oportunidades-1;
                palabra3=1;
                system("pause");
            }else if(strcmp(s, "destruir")==0&&palabra4==0){
                printf("Palabra encontrada!\n");
                puntos3=puntos3+5;
                oportunidades=oportunidades-1;
            	palabra4=1;
            	system("pause");
            }else if(strcmp(s, "quiere")==0&&palabra5==0){
                printf("Palabra encontrada!\n");
                puntos3=puntos3+5;
                oportunidades=oportunidades-1;
            	palabra5=1;
            	system("pause");
            }else if(strcmp(s, "paso")==0&&palabra6==0){
            	printf("Te has rendido :( \n");
            	printf("Las palabras eran:\n -erlenmeyer\n -dorado\n -quiere\n -destruir\n -mundo\n");
            	puntos3=puntos3+0;
            	printf("Deseas volver al menu principal? Escribe 'si' o 'no'.\n");
            	scanf("%s", &volvermenu);
            	if(strcmp(volvermenu,"si")==0){
            		printf("puntos de este minijuego: %d\n");
            		break;
            	}else if (strcmp(volvermenu, "no")==0){
            		oportunidades=0;
				}
            	system("pause");
            }else{
                printf("\n\nIncorrecto. Esa palabra no esta o ya la has escrito.\n");
                puntos3=puntos3-1;
                system("pause");
            }
    }while(oportunidades!=0);
	

	system("cls");
    printf("Muy bien!\n");
    printf("puntuacion del minijuego:%d\n", puntos3);
    
    puntuacion=puntuacion+puntos3;
    
    return puntuacion;
	
}

int codigosecreto(int puntuacion){
char frase[1000]="ippfNtxpofipsff iivpttextxpmipfxoxftxs fpeinx xiefpl tfaiputfxlipxaff txttAfix2ptxfip0xtx3fp, ptxyifpa xffsiiptaxfibpxxtxfefxips xfcpixutiaptxfliptxf.";
  char fraseResultante[500];
  char caracter[1];
  char aux[400],  aux1[400],  aux2[400], aux3[400], aux4[400];
  int i, j;

  printf("Mike estaba muy preocupado por esta situación, donde estaria el Dr. Zalben?\n");
  printf("Vuelve a sonar el telefono, esta vez el mensaje era el siguiente:\n");
  printf("-'Has mirado la guantera del coche? JAJAJAJA'- la voz se rie con voz tenebrosa.\n");
  printf("Mike va corriendo hasta el coche y se encuentra otra nota con lo siguiente:\n");
  printf("'Si mi ubicacion deseas conocer, primero las letras has de esconder.'\n");
  system("pause");
  system("cls");
  printf("Hay que eliminar las letras que sobran para descubrir el mensaje secreto.(Nota: si hay 2 letras iguales juntas seguro que sobran)\n");
  printf ("%s\n ",frase);
  // nos aseguramos que elimine las letras correctas
  while(strcmp(caracter, "f")!=0 && strcmp(caracter, "i")!=0 && strcmp(caracter, "p")!=0 && strcmp(caracter, "x")!=0 && strcmp(caracter, "t")!=0 ){
	printf ("\nIntroduzca el caracter a eliminar: \n");
	gets (caracter);
  }
  
  i = 0;
  j = 0;
  
  // eliminamos el caracter en la cadena
  while (frase[i] != '\0'){
    if (caracter[0] != frase[i]){
      fraseResultante[j] = frase[i];
	  j++;
    }
    
    i++;
  }
  
  fraseResultante[j] = '\0';
  printf ("\n\nFrase resultante: \n\n%s", fraseResultante);

	i=0;
	while (fraseResultante[i]!='\0'){
		aux[i]=fraseResultante[i];
		i++;
	}
	//eliminamos 1 de las 5 letras
	
	aux[i]='\0';
	
	while(strcmp(caracter, "f")!=0 && strcmp(caracter, "i")!=0 && strcmp(caracter, "p")!=0 && strcmp(caracter, "x")!=0 && strcmp(caracter, "t")!=0 ){
		printf ("\nIntroduzca el caracter a eliminar: \n");
		gets (caracter);
	}
	
	i = 0;
	j = 0;
  
  while (aux[i] != '\0'){
    if (caracter[0] != aux[i]){
      fraseResultante[j] = aux[i];
	  j++;
    }
    
    i++;
  }
  
  fraseResultante[j] = '\0';
  printf ("\n\nFrase resultante: \n\n%s", fraseResultante);

	i=0;
	while (fraseResultante[i]!='\0'){
		aux1[i]=fraseResultante[i];
		i++;
	}
	//eliminamos 2 de las 5 letras
	
	aux1[i]='\0';
	
	while(strcmp(caracter, "f")!=0 && strcmp(caracter, "i")!=0 && strcmp(caracter, "p")!=0 && strcmp(caracter, "x")!=0 && strcmp(caracter, "t")!=0 ){
		printf ("\nIntroduzca el caracter a eliminar: \n");
		gets (caracter);
	}
	i = 0;
    j = 0;
  
  while (aux1[i] != '\0'){
    if (caracter[0] != aux1[i]){
      fraseResultante[j] = aux1[i];
	  j++;
    }
    
    i++;
  }
  
  fraseResultante[j] = '\0';
  printf ("\n\nFrase resultante: \n\n%s", fraseResultante);

	i=0;
	while (fraseResultante[i]!='\0'){
		aux2[i]=fraseResultante[i];
		i++;
	}
	//eliminamos 3 de las 5 letras
	
	aux2[i]='\0';
	
	while(strcmp(caracter, "f")!=0 && strcmp(caracter, "i")!=0 && strcmp(caracter, "p")!=0 && strcmp(caracter, "x")!=0 && strcmp(caracter, "t")!=0 ){
		printf ("\nIntroduzca el caracter a eliminar: \n");
		gets (caracter);
	}
	i = 0;
    j = 0;
  
  while (aux2[i] != '\0'){
    if (caracter[0] != aux2[i]){
      fraseResultante[j] = aux2[i];
	  j++;
    }
    
    i++;
  }
  
  fraseResultante[j] = '\0';
  printf ("\n\nFrase resultante: \n\n%s", fraseResultante);

	i=0;
	while (fraseResultante[i]!='\0'){
		aux3[i]=fraseResultante[i];
		i++;
	}
	//eliminamos 4 de las 5 letras
	
	aux3[i]='\0';
	
	while(strcmp(caracter, "f")!=0 && strcmp(caracter, "i")!=0 && strcmp(caracter, "p")!=0 && strcmp(caracter, "x")!=0 && strcmp(caracter, "t")!=0 ){
		printf ("\nIntroduzca el caracter a eliminar: \n");
		gets (caracter);
	}
	i = 0;
    j = 0;
  
  while (aux3[i] != '\0'){
    if (caracter[0] != aux3[i]){
      fraseResultante[j] = aux3[i];
	  j++;
    }
    
    i++;
  }
  
  fraseResultante[j] = '\0';
  printf ("\n\nFrase resultante: \n\n%s", fraseResultante);// heliminamos ya las letras y descframos el mensaje.
  
  puntuacion=puntuacion+25;
  
  return puntuacion;
}

int minijuego3(int puntuacion){
	int jug, maq, r,puntos4=0,auxganar=0,auxperder=0;
	printf(" Piedra, papel o tijera contra el Dr Zalben\n");
	printf("-'Quien gane al mejor de 3 se lleva el erlenmeyer dorado'- dijo Dr. Zalben.\n");
	printf("Mucha suerte, el mundo esta en tus manos (literalmente)");
	do{
		do{
			printf("Para jugar ingresaras solo el numero que corresponda a tu eleccion:\n");
			srand(time(NULL));
			r=rand()%3;
		
			printf("0-------Piedra\n");
			printf("1-------Papel\n");
			printf("2-------Tijeras\n");
			printf("Selecciona elnumero con que quieres jugar\n");
			scanf("%d", &jug);
		
			switch (jug){
				case 0:
					printf("Elegiste Piedra\n");
    				if (r==0){
						printf("\tElegi Piedra\n");
    					printf("\tEmpate\n");
    					puntos4=puntos4+0;
    				}else if (r==1){ 
						printf("\tElegi Papel\n");
						printf("\tGana Dr.Zalben\n");
						puntos4=puntos4+0;
						auxperder++;
					}else if (r==2){
						printf("\tElegi Tijeras\n");
						printf("\tTu ganas\n");
						puntos4=puntos4+10;
						auxganar++;
					}
					break;
			
				case 1:
					printf("Elegiste Papel\n");
    	    			if (r==0){
        	    			printf("\tElegi Piedra\n");
            				printf("\tTu ganas\n");
            				puntos4=puntos4+10;
            				auxganar++;
        				}else if (r==1){
                			printf("\tElegi Papel\n\n");
                			printf("\tEmpate\n");
                			puntos4=puntos4+0;
            			}else if (r==2){
	                    	printf("\tElegi Tijeras\n");
							printf("\t\t\tGana Dr.Zalben\n");
							puntos4=puntos4+0;
							auxperder++;
        	        	}
						break;
					
				case 2 :
					printf("Elegiste Tijeras\n");
					if (r==0){
	            		printf("\tElegi Piedra\n\n");
    	        		printf("\t\t\tGana Dr. Zalben\n\n\n");
        	    		puntos4=puntos4+0;
        	    		auxperder++;
					}else if (r==1){
                		printf("\tElegi Papel\n\n");
            			printf("\t\t\tTu ganas\n\n\n");
            			puntos4=puntos4+10;
            			auxganar++;
					}else if (r==2){
                    	printf("\tElegi Tijeras\n\n");
						printf("\t\t\tEmpate\n\n\n");
						puntos4=puntos4+0;
                	}	
					break;
				
				default:
    				printf("Por favor solo introduce los numeros que aparecen en el menu");
			} 
		}while(jug!=0 && jug!=1 && jug!=2 && auxganar!=3 && auxperder!=3);
	}while(auxganar!=3 && auxperder!=3);
	
	getch();
	
	printf("puntuacion del minijuego:%d\n", puntos4);
	
	puntuacion=puntuacion+puntos4;
	return puntuacion;
}

int main(){
    char opcion;
    int puntuacion=0, orden=1;
    char nombre[50],respuesta;
    struct usuario jugador[100];
	int contador=0, i;
    FILE*fentrada;

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
				printf("Se trata de un juego donde hay que superar una serie de minijuegos y acertijos para llegar al final de la historia.\n");
            	printf("Nuestro protagonista Mike tiene que impedir que el Dr.Zalben se apropie del legendario erlenmeyer dorado. Es por eso que necesita de tu ayuda para enfrentarse a todos los retos que se le presente.\n");
            	printf("Cada minijuego superado te da una serie de puntos, cuanto mas dificil, mas puntos. Si se supera todas los acertijos y  minijuegos correctamente , se obtendra ### puntos.\n");
				printf("\n");
				printf("IMPORTANTE!!!\n");
            	printf("- Si te rindes en los minijuegos no se te sumara los puntos o no al completo.\n");
            	printf("- Si sales en mitad de partida (no puedes voler?)\n");            	
            	printf("- Si ya estabas registrado, puedes mejorar la puntuacion (siempre que no sea la puntuacion maxima). \n");
            	printf("- El apartado de ganado en el ranking quiere decir que si tienes un 0 ganaste y si tienes un 1 no pudiste derrotar al malo.\n ");
            	system("pause");
        		system("cls");
                break;
                

            case '2':   system("cls");
            	fentrada=fopen("entrada.txt","r");//abrimos el fichero para modificar y poner los datos del jugador.
            	
				//minijuego1
				puntuacion=puntuacion+minijuego1(puntuacion);
				printf("Puntuacion= %d\n", puntuacion);
				printf("NOTA:Sabias que el potasio es el elemento '19' en la tabla periodica?");
				system("pause");
				system("cls");
        	
				//minijuego2
        		puntuacion=minijuego2(puntuacion);
        		printf("puntuacion total=%d\n", puntuacion);
        		system("pause");
        		system("cls");
        		
        		//sopa de letra
        		printf("                                 MINIJUEGO 3\n");
        		puntuacion=SopaLetras(puntuacion);
        		printf("puntuacion total=%d\n", puntuacion);
        		system("pause");
        		system("cls");
        		
        		printf("Oh,no! El Dr. Zalben quiere destruir el mundo! Y lo hara con la ayuda del erlenmeyer dorado!\n");
        		printf("Mike habia oido hablar del erlenmeyer dorado por el mundo quimico, pero pensaba que se trataba de una simple leyenda.\n");
        		printf("La leyenda decia que cualquier reaccion quimica que se produjese en el, iba ser infinita. De alguna manera tiene el poder de regenerar la ultima reaccion que hubiese.\n");
        		printf("Esto podia ser una bendicion o una maldicion segun en manos de quien llegara, podria regenerar la cura de alguna enfermedad letal como la de algun tipo de veneno.\n");
        		printf("Sea como sea, que caiga en manos de Dr. Zalben no debe de ser buena senyal. Mike tiene que encontrarla antes de que sea tarde.");
        		system("pause");
        		system("cls");
        		
        		//codigo secreto
				printf("                                 MINIJUEGO 4\n");
				puntuacion=codigosecreto(puntuacion);
				printf("ENHORABUENA!! Has decifrado el mensaje\n");
				printf("\n puntuacion total=%d\n",puntuacion);
				system("pause");
        		system("cls");
        		
        		//piedra,papel o tijera
        		printf("En el aula A203 fue donde Mike conocio por primera vez a Dr.Zalben. Ambos prometian ser los prodigios de la quimica, pero Zalben lejos de ayudar, queria dominar.");
        		printf("Queria ser un quimico capaz de crear la enfermedad mas letal y ser el unico que tuviese la cura, solo el podria beneficiarse, incluso economicamente."),
        		printf("Los más altos cargos se enteraron de esto y lo consideraron una amenaza para la humanidad. Estaba en busca y captura, pero pudo escapar y esconderse de la justiacia, hasta hoy");
        		printf("\n");
        		printf("Mike debia darse prisa, el tiempo estaba en su contra.\n");
        		printf("Cogio el coche y se dirigio al aula. Ahi estaba él. Ahora debian demostrar quien era el mejor en una épica batalla");
        		printf("                                 MINIJUEGO 5\n");
        		puntuacion=minijuego3(puntuacion);
        		printf("puntuacion total=%d\n",puntuacion);
        		system("pause");
        		system("cls");
        		
        		
                break;

            case '3': 
            	fentrada = fopen("entrada.txt", "r");
        		if (fentrada == NULL) {
                	printf("Error de lectura\n");
                	return 0;
        		}
        		
				i=0;
        		contador=0;
        		while (fscanf(fentrada, "%s %d %d", jugador[i].nombre, jugador[i].puntos, jugador[i].logro) != EOF) {
                	i++;
                	contador++;                
				}
        		fclose(fentrada);
        		
        		for(i=0; i<contador; i++){
        			if (jugador[i].puntos>jugador[i+1].puntos) {
        				printf("%d %s %d %d", orden, jugador[i].nombre, jugador[i].puntos, jugador[i].logro);
            			orden++;
            		} 
				}
        
                break;
        }

    } while ( opcion != '4' );

    return 0;
}
   

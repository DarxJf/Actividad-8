#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>


int main(void){	
	initscr();			/* Start curses mode 		  */
  char null=true;
  int Si;
    printw("Si eres capaz de aguantar esta secuencia 10 veces recibiras un premio");
    refresh();
    printw("\n");
    refresh();
    printw("Pulsa cualquier tecla para empezar");
    refresh();
    getch();
    clear();
    for(int i=10;i>=0;i--){	
     
    printw("Hola Mundooo");	
	  refresh();			/* Print it on to the real screen */
    sleep(2);       /* Para agregar tiempo en c con unistd.h*/
    clear();
   
  printw("                              Osiosi");
  refresh();
  sleep(2);
  clear();

  printw("No me funcionaron las librerias profe aiuda   ");
  refresh();
  sleep(2);
  clear();

  printw("Busque las librerias que necesitaba y todo bien, tal vez deba instalarlas");
  refresh();
  sleep(2);
  clear();

  
    
       
      printw("Veo que se ha repetido varias veces ¿el usuario desea salir del bucle?\n");
       refresh();
       
       
       printw("Inserte 1 si desea salir, 2 si desea continuar: ");
       refresh();
       scanw("%d", &Si);
       clear();
       if(Si==1){

  printw("Muchas gracias\n");
  refresh();
  sleep(2);
  printw("\n");
  refresh();
  printw("Pulse cualquier tecla para continuar");
  refresh();
  getch();
  clear();
         break;
         return 0; 
       } clear();
    
  
  
    }
  printw("Muchas gracias por llegar hasta aqui\n");
  refresh();
  sleep(3);
  printw("Pulse cualquier tecla para terminar con este programa");
  refresh();
  getch();
  endwin();			/* End curses mode		  */
	return 0;
}

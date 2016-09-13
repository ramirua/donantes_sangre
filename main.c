#include <stdio.h>
#include <stdlib.h>


int main()
{
	int edad,i, peso, totalh=0,menor=99999;
	char nombre[25],tipo,sexo,resp;
    float totala=0,totalb=0,totalc=0,totald=0,totalp=0, promedio;
   
 for(i=0;i<5;i++)
 {
     printf("\n\n\n ciclo = %d \n\n",i);
 	 
	  do{ 
	  fflush(stdin);
 		printf("\n nombre del donante: ");
 		fflush(stdin);
		gets(nombre);
 		printf("\n edad: ");
 		scanf("%d",&edad);
 		printf("\n sexo (F)(M): ");
 		scanf("%s",&sexo);
 		printf("\n peso: ");
 		scanf("%d",&peso);
 		printf("\n tipo de sangre (a)A, (b)B, (c)C, (d)AB: ");
 	    tipo=tolower(getch());   
	
 	    if(edad>18 && edad<60 && peso>=50)
 	    {
 	    	printf("\n es acta para donar");
 	    if(tipo=='a')
		 	totala+=0.5;
		 if(tipo=='b')	
 	    	totalb+=0.5;
 	      if(tipo=='c')
 	        totalc+=0.5;
 	    	if(tipo=='d')
 	    	{
 	    		 totald+=0.5;
 	    		 if(menor>peso)
 	    		 {
 	    		 	menor=peso;
				 }
			 }
 	         
 	          
 	          if(i==1|| i==3)
 	          {
 	          	if(sexo=='m')
 	          	totalh=totalh+1;
 	          	totalp+=peso;
			   }
		 }
		 else
		  printf("\n no es acta para donar");
		
		
 		printf("\n va a donar sangre S/N: ");
 		resp=tolower(getch());
 		
	 }while(resp=='s'|| resp=='S');
 
 }
 
 promedio=totalp/totalh;
	
	printf("\n total de sangre tipo A es: %.2f",totala);
	printf("\n total de sangre tipo B es: %.2f",totalb);
	printf("\n total de sangre tipo C es: %.2f",totalc);
	printf("\n total de sangre tipo AB es: %.2f",totald); 
	printf("\n cantidad de hombres: %d y peso total %.2f el promedio fue de: %.2f",totalh,totalp,promedio); 
	printf("\n el menor peso de mujeres fue: %d", menor);
	return 0;
}

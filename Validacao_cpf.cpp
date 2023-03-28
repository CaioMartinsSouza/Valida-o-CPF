#include <stdio.h>
 	main(){
 		int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,res1,res2;
 		
 		printf("--------------- Validacao de CPF ---------------\n");
 		printf("Digite seu CPF numero por numero (apenas numeros)\n");
 		scanf ("%d\n", &n1);
 		scanf ("%d\n", &n2);
 		scanf ("%d\n", &n3);
 		scanf ("%d\n", &n4);
 		scanf ("%d\n", &n5);
 		scanf ("%d\n", &n6);
 		scanf ("%d\n", &n7);
 		scanf ("%d\n", &n8);
 		scanf ("%d\n", &n9);
 		scanf ("%d\n", &n10);
 		scanf ("%d", &n11);
 		
 		res1= (n9*2+n8*3+n7*4+n6*5+n5*6+n4*7+n3*8+n2*9+n1*10)*10%11;
 		
 			if (res1==n10){
 				res2= (res1*2+n9*3+n8*4+n7*5+n6*6+n5*7+n4*8+n3*9+n2*10+n1*11)*10%11;
 			
 					if (res2==n11){
 					printf ("\nCPF valido !!!");
 		        	}
						else{
		 					printf("CPF invalido !!!");
		 					}
 						}
			 		  		else{
		 						printf("CPF invalido !!!");
		 						}

}
	 

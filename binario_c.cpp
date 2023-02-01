#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char num[10];
	char *str1;

	printf("Ingrese un numero decimal del 1 al 9\n");
	gets(num);
	
	if(strlen(num)<=1){
		
		if(num[0]=='0'){	printf("\nNumero Binario: 0");	}
		else if(num[0] == '1'){	printf("\nNumero Binario: 1");	}
		else if(num[0] == '2'){	printf("\nNumero Binario: 10");	}
		else if(num[0] == '3'){	printf("\nNumero Binario: 11");	}
		else if(num[0] == '4'){	printf("\nNumero Binario: 100");	}
		else if(num[0] == '5'){	printf("\nNumero Binario: 101");	}
		else if(num[0] == '6'){	printf("\nNumero Binario: 110");	}
		else if(num[0] == '7'){	printf("\nNumero Binario: 111");	}
		else if(num[0] == '8'){	printf("\nNumero Binario: 1000");	}
		else if(num[0] == '9'){	printf("\nNumero Binario: 1001");	}	
		
		else{
			printf("\nEste es un caracter invalido");
		}
	}
	
	else{
		printf("\nEste valor es mayor a 9 o menor que 0");
	}
	getch();
}

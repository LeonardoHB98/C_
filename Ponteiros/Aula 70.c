#include <locale.h> //setlocale
#include <stdlib.h> // system

// PRE INCREMENTO E POS INCREMENTO


int main(){
	
	int x=1,y=0;

	// pre incremento ++x
	x = x+1;
	y = x;
	
	printf("pre incremento\n");
	printf("%i\n",x);
	printf("%i\n\n",y);
	
	x=1,y=0;
	
	//pos incremento x++
	
	printf("pos incremento\n");
	y = x;
	x = x+1;  
	
	printf("%i\n",x);
	printf("%i\n\n",y);
	return 0;
	
}

////#include <stdio.h>
////
////
////
////int main(void) {
////	
////	struct horario{
////		int hr;
////		int min;
////		int s;
////	};
////	
////	struct horario agora, *depois;
////	
////	depois = &agora;
////	
////	depois->hr=20;
////	depois->min=80;
////	depois->s=50;
////	
////	
////	int somatorio = 100;
////	
////	struct horario antes;
////	
////	antes.hr = somatorio * depois->s;
////	antes.min = agora.hr - depois->min;
////	antes.s = depois->min - depois->s;
////	
////	printf("%i:%i:%i", agora.hr,agora.min,agora.s);
////	printf("\n%i:%i:%i \n", antes.hr,antes.min,antes.s);
////
////	
////	return 0;
////}

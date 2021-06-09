//#include <locale.h> //setlocale
//#include <stdlib.h> // system
//
///////////// 		LISTA CONCATENADA e funcao que retorna ponteiro - 
//
//struct lista{
//	
//	int valor;
//	struct lista *proximo;
//};
//
//struct lista *procurarValor(struct lista *pLista, int valor){// retorna um endereco de memoria de uma estrutura 
//	
//	while(pLista != (struct lista*)0){
//		
//		if(pLista->valor==valor){
//			
//			return(pLista);
//			
//		}else{
//			
//			pLista = pLista->proximo;
//			
//		}
//		return (struct lista *) 0;
//	}
//	
//}
//int main(void){
//
//	struct lista *procurarValor(struct lista *pLista, int valor);
//	
//	struct lista m1,m2,m3;
//	
//	struct lista *resultado, *gancho = &m1;
//	
//	int recebe; 
//	
//		m1.valor = 5;
//		m2.valor = 10;
//		m3.valor = 15;
//		
//		m1.proximo = &m2;
//		m2.proximo = &m3;
//		m3.proximo = 0;
//		
//		
//	printf("Digite valor da pesquisa: ");
//	scanf("%i",&recebe);
//	
//	resultado = procurarValor(gancho,recebe);
//	
//	if(resultado == (struct lista *)0){
//		printf("valor nao encontrado\n");
//	}else{
//		printf(" valor eh de %i\n", resultado->valor);
//	}
//	
//	getchar();
//	return 0;
//	
//}

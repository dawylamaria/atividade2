#include <iostream>

using namespace std;

void questao1(){
				
	int valor;
			
	cout << "Digite um valor:" << endl;
	cin >> valor;
				
	if(valor < 0 ){
		printf("o numero %i eh positivo! \n", valor);
	}
	else {
					
	printf("o numero %i eh positivo!\n" , valor);
	}
}

using namespace std;

void questao2(){
	
	int num1 , num2;
	
	cout <<"Digite o primeiro numero:" << endl;
	
	cin >> num1;
	
	cout << "Digite o segundo numero:" << endl;
	
	cin >> num2;
	
	if (num1 > num2){
		printf("%i eh o maior numero\n", num1);
		
	} else {
		printf("%i eh o maior numero\n", num2);
		
	}
}
using namespace std;

void questao3(){
	char sexo;
	
	cout <<"Digite f para feminino e m para masculino:" << endl;
	
	cin >> sexo;
	
	if(sexo == 'F' || sexo == 'f'){
		cout<< "Feminino" << endl;
	}
	else if( sexo == 'M' || sexo == 'm'){
		
		cout << "Masculino" << endl;
		
	}
	else {
		cout << "sexo invalido!" << endl;
	}
}

using namespace std;

void questao4(){
	
	int numero, menorNumero, maiorNumero, soma;
	int quantidade;
	
	cout<< "Digite a quantidade de numeros que deseja analisar:" << endl ;
	
	cin >> quantidade ;
	
	cout << "Digite o primeiro numero:" << endl;
	
	cin >> numero ;
	
	menorNumero = maiorNumero = soma = numero;
	
	int i = 1;
	while(i < quantidade){
		cout << "Digite o proximo numero:" << endl;
		
		cin >> numero;
		
		soma += numero;
		
		if(numero < menorNumero){
			menorNumero = numero;
		}
		 if(numero > maiorNumero){
		 	maiorNumero = numero;
		 	
		 }
		 
		 i++;
		
	}
	
	printf("Menor numero: %i\n" , menorNumero);
	printf("Maior numero: %i\n" , maiorNumero);
	printf("soma: %i\n" , soma);
	
}

using namespace std;

void questao5(){
	
	int numero;
	
	cout <<"Digite um numero:" << endl;
	cin >> numero;
	
	for(int i = 1; i <= 10 ; i++){
		
		int resultado = numero * i;
		
		cout << numero << "x" << i << "=" << resultado << endl;		
	}

}

using namespace std;
void questao6(){
	
	int n;
	
	cout << "Digite o numero de valores a serem lidos:" << endl;
	cin >> n;
	
	for (int i = 0 ; i < n; i++ ){
		
		int num;
		bool primo = true;
		
		cout << "Digite um numero:" << endl;
		cin >> num;
		
		if(num <= 1){
			primo = false; 
			printf("o numero %i nao eh primo \n", num);
		}
		else {
			
			for (int j = 2; j * j <= num; j++ ){
				if (num % j == 0){
					primo = false;

					break;
				}
			}
			
		if(primo){
			printf("o numero %i eh primo\n", num);
		}
		else{
			printf("o numero %i nao eh primo\n", num);
		}
			

		}
		
	}
}

using namespace std;

void questao7(){
	
	int n;
	int numero;
	int somaPares = 0;
	int somaImpares = 0;
	
	cout << "Digite a quantidade de numeros a serem lidos:" << endl;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		 
		 cout << "Digite um numero" << endl;
		 cin >> numero;
		 
		 if(numero > 1000){
		 	cout << "saindo do loop!"<< endl;
		 	break;
		 }
		 
		 if(numero % 2 == 0){
		 	
		 	somaPares += numero;
		 	
		 }
		 else {
		 	somaImpares += numero;
		 }
		
	}
	
	cout << "Soma dos numeros pares: " << somaPares << endl;
	cout << "Soma dos numeros impares: " << somaImpares << endl;
	
}
using namespace std;
void questao8(){
	int n;
	
	cout << "Digite o valor de n:" << endl;
	cin >> n;
	
	int primeiroTermo = 1, segundoTermo = 1;
	int enesimoTermo;
	
	for (int i = 3; i <= n; i++) {
        enesimoTermo = primeiroTermo + segundoTermo;
        primeiroTermo = segundoTermo;
        segundoTermo = enesimoTermo;
    }
    if (n == 1 || n == 2) {
        enesimoTermo = 1;
    }
	
	printf("o %i enesimo termo: %i\n", n, enesimoTermo);
}
using namespace std;
void questao9(){
	
	double salario;
	double aumento;
	double novoSalario;
	
	cout<< "Digite seu salario:" << endl;
	cin >> salario;
	
	if(salario <= 280){
		aumento = salario * 0.20;
		novoSalario = salario + aumento;
		
	}
	else if(salario <= 700){
		aumento = salario * 0.15;
		novoSalario = salario + aumento;
		
	}
	else if(salario <= 1500){
		aumento = salario * 0.1;
		novoSalario = salario + aumento;
		
	}
	
	else {
		aumento = salario * 0.05;
		novoSalario = salario + aumento;
		
	}
	
	cout << "Salario antes do reajuste: R$ " << salario << endl;
    cout << "Percentual de aumento aplicado: " << (aumento / salario) * 100 << "%" << endl;
    cout << "Valor do aumento: R$ " << aumento << endl;
    cout << "Novo salario: R$ " << novoSalario << endl;
    
	
}

using namespace std;

void questao10(){
	
	string musicas[] = {
        "MEIO DIA",
        "ROCK NO SERTAO",
        "SAGA DE UM VAQUEIRO",
        "BOTA PEGADO PAREA",
        "PONTO FINAL",
        "LUZ CAMERA ACAO",
        "TOMA CONTA DE MIM",
        "OLHA PRO CEU",
        "OLHINHOS DE FOGUEIRA",
        "RANCHEIRA",
        "AVOANTE"
    };

    int botao1, botao2;
    cout << "Digite os numeros dos botoes (0 a 5): ";
    cin >> botao1 >> botao2;

    int soma = botao1 + botao2;

    if (soma >= 0 && soma <= 10) {
        cout << "Musica correspondente: " << musicas[soma] << endl;
    } else {
        cout << "Combinacao de botoes invalida!" << endl;
    }

}

using namespace std;

int main(int argc, char** argv) {
	
	int escolha;
	
	cout << "Escolha a questao (1 a 10):" << endl;
	cin >> escolha;
	
	switch (escolha){
		
		case 1 :
			
			questao1();
			break;
			
		case 2:
			questao2();
			break;
		
		case 3:
			questao3();
			break;
		
		case 4:
			questao4();
			break;
			
		case 5:
			questao5();
			break;
		
		case 6:
			questao6();
			break;
			
		case 7:
			questao7();
			break;
			
		case 8:
			questao8();
			break;
			
		case 9:
			questao9();
			break;
			
		case 10:
			questao10();
			break;
			
		default:
			cout << "opcao invalida!" << endl;
	}
	
	system("pause");
	return 0;
}

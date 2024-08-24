#include <stdio.h>
#include <math.h>
double soma (double n1, double n2);
double sub (double n1, double n2);
double div (double n1, double n2);
double mult (double n1, double n2);
double media(double n1, double n2);
//porcentagem
void eq2s (double a, double b, double c);
int main(){
	/*
	printf("soma %2.f\n",soma(8,3));
	printf("sub %2.f\n",sub(8,3));
	printf("div %2.f\n",div(8,3));
	printf("mult %.2f\n",mult(8,3));
	printf("media %.2f\n",media(8,3));
	/*/
	double valor1, valor2, valor3;
	char op;
	printf("Escolha a operacao; \n");
	printf("+ Adicao\n");
	printf("- Subtracao\n");
	printf("/ Divisao\n");
	printf("* Multiplicacao\n");
	printf("m Media\n");
	printf("s Equacao 2 grau\n");
	scanf("%c",&op);
	if(op != 's'){
	printf("Digite o primeiro numero: ");
	scanf("%lf",&valor1);
 	printf("Digite o segundo numero: ");
	scanf("%lf",&valor2);
	}else{
	printf("Digite valor de a: ");
	scanf("%lf",&valor1);
 	printf("Digite valor de b: ");
	scanf("%lf",&valor2);
	printf("Digite valor de c: ");
	scanf("%lf",&valor3);
	}
	
	if(op == '+')printf("Soma = %.2f",soma(valor1,valor2));
	else if(op == '-')printf("Sub = %.2f",sub(valor1,valor2));
	else if(op == '/')printf("Div = %.2f",div(valor1,valor2));
	else if(op == '*')printf("Mult = %.2f",mult(valor1,valor2));
	else if(op == 'm')printf("Media = %.2f",media(valor1,valor2));
	else if(op == 's')eq2s(valor1, valor2, valor3);
	else{
		printf("Operacao %c invalida!",op);
	}
	return 0;
}
double soma (double n1, double n2){
	return n1+n2;
	}	
double sub (double n1, double n2){
	return n1-n2;
	}	
	double div (double n1, double n2){
	return n1/n2;
	}	
	double mult (double n1, double n2){
	return n1*n2;
	}
	double media (double n1, double n2){
	return div(soma(n1,n2),2);
	}
	void eq2s (double a, double b, double c){
	double delta = sub(mult(b,b) , mult(mult(4,a),c));
	printf("Delta = %.2f",delta);
	}

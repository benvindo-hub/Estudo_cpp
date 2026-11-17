#include "iostream"
using namespace std;

//Faça um programa que receba o ano de nascimento de alguém e calcule a idade com base no ano atual
int main(){

	int anoA,anoN,idade;

	cout<"Digite o ano de nascimento: ";
	cin>>anoN;
	cout<<"Digite o ano atual: ";
	cin>>anoA;
	
	idade=anoA-anoN;
	cout<<idade<<endl;

	return 0;
}

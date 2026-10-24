#include "iostream"

using namespace std;

// Exercício 3: Encontre o quadrado de um número menos o seu triplo
int main(){
	int n;

	cout<<"Digite o numero: ";
	cin>>n;

	n*=4-(n*n*n);

	cout<<n<<endl;
	getchar();
	return 0;
}

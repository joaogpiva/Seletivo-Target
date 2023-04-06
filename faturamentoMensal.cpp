#include <iostream>
#include <string>

using namespace std;

struct estado{
	string nome;
	double faturamento;
};

int main(){
	estado estados[5] = {
		{"SP", 67836.43},
		{"RJ", 36678.66},
		{"MG", 29229.88},
		{"ES", 27165.48},
		{"Outros", 19849.53}
	};

	double soma = 0;

	for(int i = 0; i < 5; i++){
		soma += estados[i].faturamento;
	}

	for(int i = 0; i < 5; i++){
		cout << estados[i].nome << ": " << estados[i].faturamento * 100 / soma << "% do faturamento mensal" << endl;
	}
}

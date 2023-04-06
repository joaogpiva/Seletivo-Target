#include <stdio.h>

int main(){
	int x = 0, y = 1, temp, found = 0, input;

	printf("Digite o número: ");
	scanf("%d", &input);

	printf("%d %d ", x, y);

	while(1){
		temp = x + y;
		x = y;
		y = temp;
		printf("%d ", y);

		if(temp == input){
			found = 1;
		}

		if(y >= input){
			printf("\n");       
			break;
		}
	}

	if(found){
		printf("O número está na sequência");
	}else{
		printf("O número não está na sequência");
	}
}

#include <stdio.h>
int main() {
	int idade = 0, ctm = 0, ctf = 0, mexp = 0, ctfiexp = 0, mif = 99, si = 0;
	float portm, media = 0, ctmi;
	char sexo, exp, continua = 's';
	
	while(continua != 'n'){
		printf("Digite a idade:\n");
		scanf("%d", &idade);
		
		if(idade <= 0){
			break;
		}
	
		printf("Digite o sexo, (m) Masculino ou (f) Feminino:\n");
		scanf(" %c", &sexo);
		printf("Tem experiencia no servico? (s) Sim ou (n) Nao\n");
		scanf(" %c", &exp);
		printf("\n");
		setbuf(stdin, NULL);  // Limpeza do Buffer
		
	
		switch(sexo){
			case 'm':{
				ctm++; // contagem do sexo masculino
			break;}
			
			case 'f':{
				ctf++; // contgem do sexo feminino
			break;}
		}
		
		if((sexo == 'm') && (exp == 's')){
			mexp++; // sexo masculino com experiencia
			si += idade;       // recebe soma
		}
		
		if((sexo == 'm') && (idade > 45)){
			ctmi++;  // masculino maior que 45 anos
		} 
	    
		if((sexo == 'f') && (idade < 35) && (exp == 's')){
			ctfiexp++; // contagem de mulheres com idade menor que 35 e com experiencia
	    }
		
		if((mif > idade) && (sexo == 'f')){
			mif = idade; // menor idade feminina
		}
		
		if(ctm != 0){
			portm = (ctmi/ctm) * 100; // porcentagem de homens com mais de 45
		}
		
		if(mexp != 0){
			media = (si / mexp); // media de homens com experiencia 
		}
		
		printf("Deseja digitar outro? (s-Sim , n-Nao)\n");
		scanf("%c", &continua);
		setbuf(stdin, NULL);  // Limpeza do Buffer
	}
    
 	printf("------------------------------------------------------\n");
	
	printf("Numero de sexo feminino: %d\n", ctf);
	printf("Numero de sexo masculino: %d\n", ctm);
	printf("Idade media dos homens com experiencia: %.1f\n", media);
	printf("Porcentagem de homens com idade maior que 45 anos: %.1f%%\n", portm);
	printf("Numero de mulheres com idade inferior a 35 anos com experiencia no servico: %d\n", ctfiexp);
	printf("Menor idade entre mulheres: %d\n", mif);
}



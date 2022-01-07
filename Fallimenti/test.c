#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp;
	char sito[50], tmp[100], txt[30];
	int len = 0, tmp3[100];
	printf("Insert webpage name");
	scanf("%s", &sito);
	fp=fopen("./domains.txt", "r");
	strcpy(tmp, "xdg-open https://");
        strcat(tmp, sito);
	if(!fp) {
		printf("Configuration file not found");
		return 0;
	}
	tmp2=fgetc(fp);
	while(tmp2 != EOF && tmp2 != '\n' && len < 30){
		txt[len] = tmp2;
		strcat(tmp, txt);	
		len++;
		tmp2=fgetc(fp);
	}
//	strcpy(tmp, "xdg-open https://");
//	strcat(tmp, sito);
//	strcat(tmp, ".com");
	system(tmp);
	return 0;
}
	

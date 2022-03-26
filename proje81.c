#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nereden[30]="Merhaba Zilan";
	char nereye[30]="";
	
	strncpy(nereye,nereden,15);
	
	printf("%s",nereye);
	
	
	
	
	
	
	//char kaynak[30]="Merhaba Zilan";
	//char kopya[30]="";
	
	//strcpy(kopya,kaynak);
	//printf("%s",kopya);
	
	return 0;
}

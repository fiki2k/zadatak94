//Ispisite sve ASCII znakove na ekran. 

#include<stdio.h>
 
int main() {
   int i;
   char ch;
 	
	// Petlja zavrsava u 256 jer toliko ima znakova u ascii tablici. 	
   for (i = 0; i < 256; i++) {
      printf("%c ", ch);
      ch = ch + 1;
   }
   return 0;
}

#include "str.h"  
//print string  
int str(char *string){  
	        printf("\n----PRINT STRING----\n\"%s\"\n",string);  
			        return 0;  
}  
  
  //interface of this program  
  int main(int argc , char **argv){  
	          char str_read[1024];  
			          printf("Please INPUT something end by [ENTER]\n");  
					          scanf("%s",str_read);  
							          return str(str_read );  
  }  
    

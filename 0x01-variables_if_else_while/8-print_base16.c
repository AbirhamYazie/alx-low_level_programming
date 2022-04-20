<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
      	int i = 0;
        char c = 'a';

	while (i < 10)
        {
	        putchar(i % 10 + '0');
        	i++;
        }
        while (c < 'g')
        {   
        	putchar(c);
        	c++;
    	}	  
    	putchar('\n');
       	return (0);
=======
#include <stdio.h>                                           
                                                             
/**                                                          
 * main - Entry point                                        
 *                                                           
 * Return: 0                                                 
 */                                                          
                                                             
int main(void)                                               
{                                                            
        int i = 0;                                           
        char c = 'a';                                        
                                                             
        while(i < 10)                                        
        {                                                    
                putchar(i % 10 + '0');                       
                i++;                                         
        }                                                    
        while(c < 'g')                                       
        {                                                    
                putchar(c);                                  
                c++;                                         
        }                                                    
        putchar('\n');
	return (0);        
>>>>>>> b60eec48b056bd5af1a332e338b88ba8137bd7ac
}

char* my_strtok(char *s, const char *c)                                     
{                                                                               
   static char *lasts ;                                                         
//	static int i; 
 //   int i = 0;     
	lasts  = (char*)malloc(100);                                                            
    int j = 0;                                                                  
    char tok[100];                                                              
     lasts = s;                                                                    
    if (s == 0)                                                                 
    s = lasts ;                                                                  
    while(*(s + 1) != '\0') {                                                       
        if ( *s != c[0]) {                                                      
            *(tok + j) = *(s);                                                  
            j++;
			lasts++;                                                                
        }                                                                       
        else {
	                                                                                                                   
            *(tok + j) = '\0';                                                  
            return tok;                                                         
       	} 
	s++;
	}                                                                                                                                                                                 
  return 0;                                                                              
}   

#include<stdio.h>
int main()
{
	int c, m, i, j;

	for (i = 0, m = 1 << 5 | 1; c = "9iIU9dRQ9cSQ9bUP9bVO9cUO9aWO9YYN9YYN9aLHEM9bEJCAFL9eCKHL9eEKFFCC9eGDLCDAAB9eWBGB9dXBGB9dXBGB9dXAGC9dWBGC9dXAGC9efC9eEAXD9IBTdD9HCTAATAEE9HDUTBBG9HDTUBDE9GHaLBDE9GHSGARD9GIOAAcC9GISaC9EAbcC9gcCA9gMBMD9hIDND9sOE9pSD9nUD9kYBA9jcA9"
	                                [(!(c - 57) ? (m = 1 << 5,
	                                        printf("\n")) : (m ^= 1)),
	                                 i++];) {
		for (j = 0; (c - 57) &&
		        (j++ -c - (c < 64 ? 5 : (c > 90 ? -70 : -64)));
		        printf("%c", m));
	}
	return 0;
}

/*
output:

                                   !!!!!!!!!                     
                              !!!!!!!!!!!!!!!!!!                 
                             !!!!!!!!!!!!!!!!!!!                 
                            !!!!!!!!!!!!!!!!!!!!!                
                            !!!!!!!!!!!!!!!!!!!!!!               
                             !!!!!!!!!!!!!!!!!!!!!               
                           !!!!!!!!!!!!!!!!!!!!!!!               
                         !!!!!!!!!!!!!!!!!!!!!!!!!              
                         !!!!!!!!!!!!!!!!!!!!!!!!!              
                           !!!!!!!!!!!!        !!!!!             
                            !!!!!          !!! !!!!!!            
                               !!!           !!!!!!!!            
                               !!!!!           !!!!!!      !!!   
                               !!!!!!!    !!!!!!!!!!!!   !!!! !  
                               !!!!!!!!!!!!!!!!!!!!!!!  !!!!!!!  
                              !!!!!!!!!!!!!!!!!!!!!!!!  !!!!!!!  
                              !!!!!!!!!!!!!!!!!!!!!!!!  !!!!!!!  
                              !!!!!!!!!!!!!!!!!!!!!!!! !!!!!!!   
                              !!!!!!!!!!!!!!!!!!!!!!!  !!!!!!!   
                              !!!!!!!!!!!!!!!!!!!!!!!! !!!!!!!   
                               !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!   
                               !!!!! !!!!!!!!!!!!!!!!!!!!!!!!    
         !!                    !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    
        !!!                    ! !!!!!!!!!!!!!!!!!!!! !!!!!     
        !!!!                     !!!!!!!!!!!!!!!!!!!!  !!       
        !!!!                    !!!!!!!!!!!!!!!!!!!!!  !!!!     
       !!!!!!!!                           !!!!!!!!!!!!  !!!!     
       !!!!!!!!                   !!!!!!! !!!!!!!!!!!!!!!!!!    
       !!!!!!!!!               ! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!   
       !!!!!!!!!                   !!!!!!!!!!!!!!!!!!!!!!!!!!!   
     !                            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!   
                                 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!   !
                                 !!!!!!!!!!!!!  !!!!!!!!!!!!!    
                                  !!!!!!!!!    !!!!!!!!!!!!!!    
                                             !!!!!!!!!!!!!!!     
                                          !!!!!!!!!!!!!!!!!!!    
                                        !!!!!!!!!!!!!!!!!!!!!    
                                     !!!!!!!!!!!!!!!!!!!!!!!!!  !
                                    !!!!!!!!!!!!!!!!!!!!!!!!!!!!! 
*/

#include<stdio.h>
int main()
{
	int c, m, i, j;

	for (i = 0, m = 1 << 5 | 1; c = "SMR9PBBKABP9NBDKCBN9MAFJFAM9LAGJGBK9LAHIHAK9KA"
	                                "IIHAK9KAIHJAJ9KAIHJAJ9KAIHJAJ9JAcBI9JAcBI9JAcB"
	                                "I9JAcBI9JAcBI9JAcBI9JAcBI9JAcBI9JAcBI9IBABYBI9\
IBAGMFBBH9IABLCLABH9IACIGIBBH9IAeBH9IAeAI9IAo9\
IAeAI9IAeAI9IBcBI9IBcBI9IBAAXAABI9ICAAWDI9JBAB\
UAACI9JBBATFI9JCAATAADI9JCBASEJ9JDAARAADJ9JEDK\
EEJ9JEAAAAKADEJ9KDBAMBBEJ9KDTDK9KCUDK9LCEIFDK9\
MCBLECL9MSADM9NVN9OEIEP9PANAR9"
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
OUTPUT:
                   !!!!!!!!!!!!!                  
                !!  !!!!!!!!!!! !!                
              !!    !!!!!!!!!!!   !!              
             !      !!!!!!!!!!      !             
            !       !!!!!!!!!!       !!           
            !        !!!!!!!!!        !           
           !         !!!!!!!!!        !           
           !         !!!!!!!!          !          
           !         !!!!!!!!          !          
           !         !!!!!!!!          !          
          !                             !!         
          !                             !!         
          !                             !!         
          !                             !!         
          !                             !!         
          !                             !!         
          !                             !!         
          !                             !!         
          !                             !!         
         !! !!                         !!         
         !! !!!!!!!             !!!!!!  !!        
         !  !!!!!!!!!!!!   !!!!!!!!!!!! !!        
         !   !!!!!!!!!       !!!!!!!!!  !!        
         !                               !!        
         !                               !         
         !                                         
         !                               !         
         !                               !         
         !!                             !!         
         !!                             !!         
         !! !                        ! !!         
         !!! !                       !!!!         
          !! !!                     ! !!!         
          !!  !                    !!!!!!         
          !!! !                    ! !!!!         
          !!!  !                   !!!!!          
          !!!! !                  ! !!!!          
          !!!!!    !!!!!!!!!!!     !!!!!          
          !!!!! ! !           !    !!!!!          
           !!!!  !             !!  !!!!!          
           !!!!                    !!!!           
           !!!                     !!!!           
            !!!     !!!!!!!!!      !!!!           
             !!!  !!!!!!!!!!!!     !!!            
             !!!!!!!!!!!!!!!!!!! !!!!             
              !!!!!!!!!!!!!!!!!!!!!!              
               !!!!!         !!!!!                
                !              !           
*/

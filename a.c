#include <stdio.h>
 
int main()
{	
    int be;
    int a=0;
    while (scanf("%d",&be)==1)
    {
        if (a==0)
         {a=be;
          scanf("%d",&be);
         }
        if (be<a)
           {printf("%d ", a);
            while(be<a)
               {
                printf("%d ", be);
                a=be;
               }
           }
        else 
            if (be>a)
               {printf("%d ", a);
                while(be>a)
                   {
                    printf("%d ", be);
                    a=be;
                   }
               }
       }
    return 0;
}
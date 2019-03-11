#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int count=0;  
char a[9]={'1','2','3','4','5','6','7','8','9'};
int k=0,end=1;
void drawBoxes()
{
     printf("\n\n\n\t\t\t\t\t Tic Toc Tik Game");
     printf("\n\t\t\t\t\t  _____ _____ _____ ");
     printf("\n\t\t\t\t\t |     |     |     | ");
     printf("\n\t\t\t\t\t |  %c  |  %c  |  %c  | ",a[0],a[1],a[2]);
     printf("\n\t\t\t\t\t |_____|_____|_____| ");
     printf("\n\t\t\t\t\t |     |     |     | ");
     printf("\n\t\t\t\t\t |  %c  |  %c  |  %c  | ",a[3],a[4],a[5]);
     printf("\n\t\t\t\t\t |_____|_____|_____| ");
     printf("\n\t\t\t\t\t |     |     |     | ");
     printf("\n\t\t\t\t\t |  %c  |  %c  |  %c  | ",a[6],a[7],a[8]);
     printf("\n\t\t\t\t\t |_____|_____|_____| \n");
     
}
void input()
{
     char c;
     int i;
     printf("enter boxes number for two player alternately  \n");
     printf("Player one and Player two respectively  \n");
     scanf("%c",&c);
   
     
     if(k==0)
     {
       for(i=0;i<9;i++)
       {
          if(a[i]==c)
          {
           a[i]='x';
           k=1;
           break;
           
          }
       }
     }
     else
     {
       for(i=0;i<9;i++)
       {
          if(a[i]==c)
          {
             a[i]='0';
             k=0;
             break;
          }
       }
     }
  
  
}
int result()
{
     if(a[0]=='x' && a[1]=='x' && a[2]=='x')
     return(1);
     else if(a[0]=='x' && a[3]=='x' && a[6]=='x')
     return(1);
     else if(a[0]=='x' && a[4]=='x' && a[8]=='x')
     return(1);
     else if(a[1]=='x' && a[4]=='x' && a[7]=='x')
     return(1);
     else if(a[2]=='x' && a[5]=='x' && a[8]=='x')
     return(1);
      else if(a[2]=='x' && a[4]=='x' && a[6]=='x')
     return(1);
     else if(a[3]=='x' && a[4]=='x' && a[5]=='x')
     return(1);
     else if(a[6]=='x' && a[7]=='x' && a[8]=='x')
     return(1);
     
     else if(a[0]=='0' && a[1]=='0' && a[2]=='0')
     return(2);
     else if(a[0]=='0' && a[3]=='0' && a[6]=='0')
     return(2);
     else if(a[0]=='0' && a[4]=='0' && a[8]=='0')
     return(2);
     else if(a[1]=='0' && a[4]=='0' && a[7]=='0')
     return(2);
     else if(a[2]=='0' && a[5]=='0' && a[8]=='0')
     return(2);
      else if(a[2]=='0' && a[4]=='0' && a[6]=='0')
     return(2);
     else if(a[3]=='0' && a[4]=='0' && a[5]=='0')
     return(2);
     else if(a[6]=='0' && a[7]=='0' && a[8]=='0')
     return(2);
     else 
     return 3;
}
void final()
{
     int var;
     var=result();
     if(count<17)  {
     if(var==1)
     {
        printf("\n PLAYER ONE WON THE MATCH \n");
       count=0;  
        end=0;
     }
     else if(var==2)
     {
         printf("\n PLAYER TWO WON THE MATCH \n");
         count=0;  
         end=0;  
     }    
     else
       {
        count++;
       } 
     }
     else  
     {
      printf("\n MATCH DRAW \n"); 
      count=0; 
      end=0;
      }
    
}
main()
{
   char c; 
   label:
   system("cls");  
   drawBoxes();
   while(end)
    {
       input();
       system("cls");
       drawBoxes();
       final();
       
    }
    printf("do you want to play again\n");
    printf("if yes the press y for yes.\n");
    fflush(stdin);
    scanf("%c",&c);
    if(c=='y' || c=='Y')
    {
       a[0]='1';a[1]='2';a[2]='3';a[3]='4';a[4]='5';a[5]='6';a[6]='7';a[7]='8';a[8]='9';
       k=0; end=1;      
       goto label;
    }
    printf("\n Thank you");
   getch();   
}
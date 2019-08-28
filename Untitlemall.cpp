#include<stdio.h>
#include<conio.h>
struct mall
{
       int id;
       char name[100];
       int price;
       int i;
       float discount;
}p[3];
int input();
int output();
 int main()
{   
    input();
    output();
    getch();
    
}

int input()
{   int i;
    for(i=0;i<=3;i++) 
    {
    printf("enter id:\n");
    scanf("%d",&p[i].id);
  
    printf("enter name:\n");
    scanf("%s",p[i].name);

    printf("enter price:\n");
    scanf("%d",&p[i].price);
    
    printf("enter discount:\n");
    scanf("%f",&p[i].discount);
    }
} 
    
    
    
   int output()
   {   int i;
       printf("details are:\n");
       printf("ID\t Name\t Price\t Discount\n");
       for(i=0;i<3;i++)
       {    
       printf("%d\t %s\t %d\t %f\n",p[i].id, p[i].name, p[i].price, p[i].discount);
       }
    }   

    

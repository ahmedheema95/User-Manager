#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[50],b[50],n[50];
/*++++++++++++++*/void Add_Del_User(int choice)/*++++++++++++++*/
{
switch(choice)
{
  case 1:
  printf("Enter The Name Of The New User\n");
  scanf("%s",a);
  strcpy(b,"sudo adduser ");
  strcat(b,a);
  system(b);
  break;
  case 2:
  printf("Enter The Name Of The User\n");
  scanf("%s",a);
  strcpy(b,"sudo deluser ");
  strcat(b,a);
  system(b);
  break;
}
}

/*++++++++++++++*/void Add_Del_Group(int choice)/*++++++++++++++*/
{
switch(choice)
{
   case 1:
   printf("Enter The Name Of The New Group\n");
   scanf("%s",a);
   strcpy(b,"sudo addgroup ");
   strcat(b,a);
   system(b);
   break;
   case 2:
   printf("Enter The Name Of The Group\n");
   scanf("%s",a);
   strcpy(b,"sudo groupdel ");
   strcat(b,a);
   system(b);
   break;
}
}

/*++++++++++++++*/void Users_Inf()/*++++++++++++++*/
{
printf("Enter The Name Of The User\n");
scanf("%s",a);
strcpy(b,"sudo chfn ");
strcat(b,a);
system(b);
}

/*++++++++++++++*/void Account_Inf(int choice)/*++++++++++++++*/
{
switch(choice)
{
   case 1:
   printf("Enter The Username\n");
   scanf("%s",a);
   strcpy(b,"sudo passwd ");
   strcat(b,a);
   system(b);
   break;
   case 2:
   printf("Enter The Old Username\n");
   scanf("%s",a);
   printf("Enter The New Username\n");
   scanf("%s",n);
   strcpy(b,"sudo usermod -l ");
   strcat(b,n);
   strcat(b," ");
   strcat(b,a);
   system(b);
   break;
   case 3:
   printf("Enter The Username\n");
   scanf("%s",a);
   strcpy(b,"sudo chage ");
   strcat(b,a);
   system(b);
   break;
}
}

/*++++++++++++++*/void Assign()/*++++++++++++++*/
{
printf("Enter The Username\n");
scanf("%s",a);
printf("Enter The Group name\n");
scanf("%s",n);
strcpy(b,"sudo adduser ");
strcat(b,a);
strcat(b," ");
strcat(b,n);
system(b);
}
 int main()
{
printf("\n\t\t\tWelcome To Ubuntu User Manager\n\n");
int x,choice;
do
{
  printf("\t\t\t1-Add/Delete Users\n "
         "\t\t\t2-Add/Delete Groups\n"
         "\t\t\t3-Change Users Information\n"
         "\t\t\t4-Change Account Information\n"
         "\t\t\t5 Assign Specific Users To Specific Group\n"  
         "\t\t\t6-Exit Program\n\n");
  printf("Please Enter Your Choice\n");
  scanf("%d",&x);
 switch(x)
{
    case 1:
    printf("To Add A New User Enter 1\n"
           "To Delete An Existing User Enter 2\n"
           "To Exit This Choice And Return Back Enter Any Number Rather Than 1 or 2\n");  
    scanf("%d",&choice);
    if(choice == 1 || choice == 2)
    {
      Add_Del_User(choice);
    }
    break;//End Case 1 Of Main Switch
    case 2:
    printf("To Add A Group Enter 1\n"
           "To Remove An Existing Group Enter 2\n"
           "To Exit This Choice And Return Back Enter Any Number Rather Than 1 or 2\n");
    scanf("%d",&choice);
    if(choice == 1 || choice == 2)
    {
      Add_Del_Group(choice);
    }
    break;//End Case 2 Of Main Switch
    case 3:
    Users_Inf();
    break;//End Case 3 Of Main Switch
    case 4:
    printf("To Change Password Enter 1\n"
           "To Change Username Enter 2\n"
           "To Change Password Expiration And Other Options Enter 3\n"
           "To Exit This Choice And Return Back Enter Any Number Rather Than 1 or 2 or 3\n");
    scanf("%d",&choice);
    if(choice == 1 || choice == 2 || choice ==3)
    {
    Account_Inf(choice);
    }
    break;//End Case 4 Of Main Switch
    case 5:
    Assign();
    break;//End Case 5 Of Main Switch
    case 6:
    printf("Exiting Program\n");
    break;//End Case 6 Of Main Switch
    default:
    printf("Wrong Choice\nTry Again\n");
    break;
}//End Main Switch
}//End Do While Loop
while(x!=6);
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
struct user{
    char name[50];
    char tel[15];
    char email [50];
    char address [50];
    int id;
};
    struct user reg;

  struct ikinyabiziga{
    char veh_name[50];
    char veh_plate[15];
     int veh_id;
    char veh_condition [50];
    int veh_igiciro;
};
 struct ikinyabiziga veh;

/* C Program to count the Number of Lines in a Text File */

void admin(char *username,char *code)   //admin function for updating  vehicles in the system
{
    if(strcmp(username,"admin")==0){
        if(strcmp(code,"123")==0){
system("cls");
printf("\n");
        printf("ACCESS GRANTED.....\n");
        int ck;
            FILE *pro;
            char n[2];
            char ty;
            int i;
            int c;
            FILE *ibinyabiziga;
            FILE *pr;
            char tyr;
            FILE *po;
            char v;
         printf("PRESS 1 FOR OPENING USER DATABASE::");
         printf("\nPRESS 2 FOR ADDING NEW VEHICLES::");
         printf("\nPRESS 3 FOR READING  USER MESSAGES..::");
         printf("\nPRESS 4 FOR READING  BOOKED VEHICLES..::");
         scanf("%d",&ck);
switch(ck)
{
    case 1 :

                        pro = fopen("u.txt","r");
                        ty = fgetc(pro);
                       while (ty!= EOF)
                       {
                        printf ("%c", ty);
                       ty = fgetc(pro);
                              }
                              fclose(pro);
                              system("pause");
                             main();

    case 3:
                        pr = fopen("forum.txt","r");
                        tyr = fgetc(pr);
                       while (tyr!= EOF)
                       {
                        printf ("%c", tyr);
                       tyr = fgetc(pr);
                              }
                              fclose(pr);
                              printf("\n");
                              system("pause");
                             main();


    case 4:

                       po = fopen("rent.txt","r");
                        v = fgetc(po);
                       while (v!= EOF)
                       {
                        printf ("%c", v);
                       v = fgetc(po);
                              }
                              fclose(po);
                              printf("\n");
                              system("pause");
                             main();


   default :
                    printf("TRY AGAIN.....");
                    main();
                    break;

    case 2 :

                   system("cls");
                   printf("\n\n\n\n");
                   printf("\t\tDO YOU NEED TO ADD VEHICLE IN THE SYSTEM?: ");
                  scanf("%s",n);

                  if(strcmp(n,"y")!=0)
                  {
                    printf("please type 'y' another time");
                    main();

                    }
                  if(strcmp(n,"y")==0)

{
printf("\t\tHOW MANY VEHICLE DO YOU NEED TO ADD IN THE SYSTEM: ");
scanf("%d",&c);
ibinyabiziga=fopen("vehicles.txt","a");
for(i=0;i<c;i++)
{
printf("ENTER THE VEHICLE iD: ");
scanf("%d",&veh.veh_id);
printf("ENTER THE VEHICLE NAME: ");
scanf("%s",veh.veh_name);
printf("ENTER THE VEHICLE PLATE: ");
scanf("%s",veh.veh_plate);
printf("ENTER THE VEHICLE CONDITION: ");
scanf("%s",veh.veh_condition);
printf("ENTER THE VEHICLE PRICE: ");
scanf("%d",&veh.veh_igiciro);
printf("\n");
system("cls");
//printf("vehicle:%d",c);

 fprintf(ibinyabiziga,"\n%d\tMODEL:%s\tPLATE:%s\tCOND:%s\tPRICE:%d$/MONTH",veh.veh_id,veh.veh_name,veh.veh_plate,veh.veh_condition,veh.veh_igiciro);
}
fclose(ibinyabiziga);
printf("YOUR VEHICLE WAS SUCCESSFULLY UPDATED....\n");
 system("pause");
 system("cls");
 main();
        }}}}
         else
    {
        printf("ACCESS DENIED...., YOU'RE NOT ADMIN OF THE SYSTEM....\n");
        }
        system("pause");
        system("cls");
        main();
        }

void ADM()
{
char *code[20];
char *username[20];
printf("ENTER THE USERNAME:  ");
scanf("%s",username);
printf("ENTER THE PASSWORD:  ");
scanf("%s",code);
admin(&username,&code);
}

void read_vehicle();// fuction for scanning available vehicles in the system
void read_vehicle()
{
    FILE *fptr;
    char c;
    fptr = fopen("vehicles.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);
}


void client();// a function for client
void client()

{

    FILE *rent;
    FILE *users;
   // printf("PRESS ANY VALUE TO CONTINUE PRESS 0 TO RETURN HOME: ");
   // scanf("%d",&check);
    users=fopen("u.txt","a");
    rent=fopen("rent.txt","a");
system("color 2");
printf("ENTER YOUR NAME: ");
scanf("%s",reg.name);
printf("ENTER YOUR TELEPHONE NUMBER: ");
scanf("%s",reg.tel);
printf("ENTER YOUR EMAIL: ");
scanf("%s",reg.email);
printf("ENTER YOUR ADDRESS: ");
scanf("%s",reg.address);
system("cls");
read_vehicle();
printf("\n");
printf("WHICH VEHICLE DO you WANT?? ( PLEASE WRITE ITS NUMBER ID...)");
scanf("%d",&reg.id);
int x;
       FILE *ptr;
       char array [255];
       int idz;
       ptr = fopen("vehicles.txt","r");
       if(reg.id==0)
       {
        printf("THIS VEHICLE IS ALREADY BOOKED YOU CAN'T BOOK IT TWICE");
        system("pause");
        system("cls");
        main();
        }
       for(x=0;x!=EOF;x++)
       {
       fscanf(ptr,"%s",array);
       idz=atoi(array);
     if(idz==reg.id && idz!=0)
       {
           fgets(array,255,(FILE*)ptr);
           printf("%d %s",idz,array);
           printf("\n %s, THANK YOU FOR WORKING WITH US!!!!!!....,WE WILL REACH YOU OUT VERY SOON...stay tuned!!",reg.name);
           break;
         system("pause");
         system("cls");
          main();
       }
       }
       fprintf(users,"\nID:%d\tNAME:%s\tTEL:%s\tEMAIL:%s\tADDR:%s\tDATE:%s\t%s\t%s",reg.id,reg.name,reg.tel,reg.email,reg.address,__DATE__,__TIME__,array);
       fprintf(rent,"%d %s",reg.id,array);
fclose(rent);
fclose(ptr);
fclose(users);
FILE *user;
       FILE *pr;
       char arra [255];
       int iz;
       pr = fopen("vehicles.txt","r");
       user = fopen("kabanza.txt","w");
       while(fscanf(pr,"%s",arra)!=EOF)
       {
       iz=atoi(arra);
     if(iz!=reg.id)
        {

           fgets(arra,255,(FILE*)pr);
           //printf("%d %s",idz,array);
              fflush(stdin);
           fprintf(user,"%d%s",iz,arra);
       }

       }
       printf("DONE SUCCESSFULLY");

fclose(pr);
fclose(user);
remove ("vehicles.txt");
rename("kabanza.txt","vehicles.txt");
}



void forum();
void forum()
{

    FILE *msg;
    int ret;
    char write[255];
    system("color 6");
    system("cls");
    printf("PRESS 0 TO RETURN TO MAIN-PAGE OR 1 TO CONTINUE...");
    scanf("%d",&ret);
    if(ret!=0 && ret!=1)
    {
        printf("INVALID OPTION TRY AGAIN AFTER..");
        system("cls");
        main();}

    else if(ret==0)
    {
        system("cls");
        main();}
         if(ret==1)
        {
            system("cls");
    printf("\nTO SEND US A CLEAR MESSAGE PLEASE START BY SAYING YOUR NAME,..:[press enter to send your message!]::\n\n");
    scanf("%s",write);
    msg = fopen("FORUM.txt","a");
    fprintf(msg,"\n%s",write);
    fclose(msg);
    printf("THANK YOU!!, YOUR MSG HAS SUCCESSFULLY REACHED US....");
    system("pause");
    system("cls");
     main();
}
}

void search_vehicle();
void search_vehicle(){
    int id;
   printf("WHICH VEHICLE DO you WANT?? ( PLEASE WRITE ITS NUMBER ID...)");
scanf("%d",&id);
system("cls");
int x;
       FILE *ptr;
       char array [255];
       int idz;
       ptr = fopen("vehicles.txt","r");
       for(x=0;x!=EOF;x++)
       {
        fscanf(ptr,"%s",array);
        idz=atoi(array);
        if(id==idz)
       {
           fgets(array,255,(FILE*)ptr);
           printf("%d %s",idz,array);
           printf("......THANK YOU FOR VISITING OUR SYSTEM!!!!!!..YOU CAN BOOK THIS VEHICLES FROM US TOO!!..!!");
         system("pause");
         system("cls");
         main();

}
}
fclose(ptr);
}

void kugarura();
void kugarura()
{

   FILE *rent;
   int idveh;
   char name[20];
   system("cls");
    printf("\tWHICH VEHICLE DO YOU NEED TO RETURN FROM US?? ( PLEASE WRITE ITS NUMBER ID...)");
scanf("%d",&idveh);
printf("\nWHAT IS YOUR NAME (OPTIONAL)");
scanf("%s",name);
system("cls");
int x;
       FILE *users;
       char array [255];
       int idz;
       rent= fopen("rent.txt","r");
       users=fopen("vehicles.txt ","a");
       if(idveh==0)
       {
        printf("THIS VEHICLE IS ALREADY RETURNED...");
        system("pause");
        system("cls");
        main();
        }
       for(x=0;x!=EOF;x++)
       {
       fscanf(rent,"%s",array);
       idz=atoi(array);
     if(idz==idveh && idz!=0)
       {
           fgets(array,255,(FILE*)rent);
            printf("\n%s,\nVEHICLE:%sIS SUCCESSFULLY RETURNED, THANK YOU FOR WORKING WITH US!!!!!!...., WE HOPE YOU ENJOYED YOUR EXPERIENCE WITH OUR VEHICLE(S)....!!",name,array);
              break;
         system("pause");
         main();
       }
        fprintf(users,"\t%s",array);
       }
       fclose(rent);
       fclose(users);
}
void home();
int main()
{
int h;
printf("\n\n");
system("color 3");
printf("\n\t\t\t\============================================================\t");
 printf("\t\t\t\t\t\t\t\t\t WELCOME TO THE VEHICLE RENTAL SYSTEM.....\n");
 printf("\t\t\t\============================================================\t");
 printf("\n\n");
 printf("\t\t|PRESS 1FOR ADMIN PORTAL::\n");
 printf("\t\t|PRESS 2 FOR LOOKING ON ALL STUNNING VEHICLES WE HAVE::\n");
 printf("\t\t|PRESS 3 FOR BOOKING A VEHICLE OF YOUR CHOICE::\n");
 printf("\t\t|press 4 FOR RETURNING THE  RENT VEHICLE TO US......\n");
 printf("\t\t|PRESS 5 FOR WRITTING A PRIVATE MESSAGE TO THE ADMIN::\n");
 printf("\t\t|PRESS 6 FOR SEARCHING  VEHICLES::\n");
 scanf("%d",&h);
 home(h);
 }
void home(int h)
{

 switch(h)
 {
		case 1:
					ADM();
					break;
		case 2:
                  system("cls");
                 read_vehicle();
                 system("pause");
                 system("cls");
                    main();


		case 3:
		                system("cls");
		               client();
		               break;

        case 4:
                       kugarura();
                       break;


		case 5:
                     forum();
                     break;

        case 6:
                        search_vehicle();
                        break;



		default:
					printf("Enter a valid option\n");
					system("pause");
					system("cls");
                     main();
}}



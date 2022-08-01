
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ncurses.h>
#include <math.h>
#include <ctype.h>
#include <unistd.h>
void red();
void yellow();
void blue();
void reset(); // reset back to default colour
void registration();
void logi(); // registration function declaration
void admin();
void agency();
void places();
void users();
void red()
{
    printf("\033[1;31m"); // color code and syntax form
}
void yellow()
{
    printf("\033[1;32m");
}
void blue()
{
    printf("\033[1;34m");
}
void color()
{
    printf("\033[1;35");
}
void reset()
{
    printf("\033[0m");
}
void agency()
{
    yellow();
    printf("\t\n\n\nHERE YOU CAN SEE THE LIST OF BEST AGAENCIES FOR TRAVELLING AND TOURISM.\n\n");
    reset();
    blue();
    printf("1. G ADVENTURES  ***** [ 4.5 OUT OF 5 ] \t\t6326 reviews\n\n");
    reset();
    yellow();
    printf("\tAGE RANGE - 12 TO 96 YEARS OLD \n\tGROUP SIZE - 9 PEOPLE MAXIMUM\n\tRESPONSE RATE - 72 percent\n\tRESPONSE TIME - WITHIN 1 DAY\n\tCOST/DAY - $74-$132\n\tFOR MORE INFO - https://www.tourradar.com/o/g-adventures \n\n");
    reset();
    blue();
    printf("2.NEPAL SOCIAL TREKS ***** [ 5 OUT OF 5 ]  \t\t38 REVIEWS\n\n");
    reset();
    yellow();
    printf("\tAGE RANGE - 5 TO 60 YEARS OLD \n\tGROUP SIZE - 9 PEOPLE MAXIMUM\n\tRESPONSE RATE - 100 percent\n\tRESPONSE TIME - WITHIN 7 hours\n\tCOST/DAY - $58-$299\n\tFOR MORE INFO - https://www.tourradar.com/g/nepal-tour-operators \n\n");
    reset();
    blue();
    printf("3. INTREPID TRAVEL ***** [ 4.6 OUT OF 5 ] \t\t10736 REVIEWS\n\n");
    reset();
    yellow();
    printf("\tAGE RANGE - 5 TO 99 YEARS OLD \n\tGROUP SIZE - UP TO 99 PEOPLE MAXIMUM\n\tRESPONSE RATE - 92 percent\n\tRESPONSE TIME - WITHIN 3 DAYS\n\tCOST/DAY - $81-$231\n\tFOR MORE INFO - https://www.tourradar.com/o/intrepid\n\n");
    reset();
    blue();
    printf("4. NEPAL ECO ADVENTURE PVT LTD ***** [ 5 OUT OF 5 ] \t\t370 REVIEWS\n\n");
    reset();
    yellow();
    printf("\tAGE RANGE - 5 TO 85 YEARS OLD \n\tGROUP SIZE - UP TO 30 PEOPLE MAXIMUM\n\tRESPONSE RATE - 100 percent\n\tRESPONSE TIME - WITHIN 1 HOUR\n\tCOST/TRIP - $500-$3800\n\tFOR MORE INFO - https://www.bookmundi.com/companies/nepal-eco-adventure-pvt-ltd/c31 \n\n");
    reset();
    blue();
    printf("5. HIGH VENTURE PLUS ***** [ 4.5 OUT OF 5 ] \t\t500 REVIEWS\n\n");
    reset();
    yellow();
    printf("\tAGE RANGE - 8 TO 75 YEARS OLD \n\tGROUP SIZE - UP TO 50 PEOPLE MAXIMUM\n\tRESPONSE RATE - 95 percent\n\tRESPONSE TIME - WITHIN 10 HOURS\n\tCOST/DAY - $80-$380\n\tFOR MOREY A INFO - https://www.highventureplus.com \n\n");
    reset();
    blue();

    printf("\n\n\tTHESE ARE SOME OF THE BEST TRAVEL AGENCIES CURRENTLY AVAILABLE AND WORKING SMOOTHLY APPLYING ALL THE SAFETY MEASURES REGARDING COVID-19.\n\n\tIF YOU WANT TO KNOW ABOUT MORE AGENCIES AND TOUR OPERATORS THEN VISIT THE LINK BELOW: \n\n ");
    reset();
    red();
    printf("\n\thttps://www.bookmundi.com/nepal/tour-operators \n\thttps://www.tourradar.com/g/nepal-tour-operators \n\n \tTHANK YOU!! ");
}
void places()
{
    printf("\n\nEven being an small country, Nepal has many tourist destination sites and a lot of amazing places😍😍😍\n");
    blue();
    printf("\n\t\t\t\t ========================================== ");
    printf("\n\t\t\t\t TOP TEN BEST SITES FOR TOURIST DESTINATION ");
    printf("\n\t\t\t\t ========================================== ");
    printf("\n\n\t1.PASHUPATINATH TEMPLE");
    printf("\n\t2.PATAN DURBAR SQUARE");
    printf("\n\t3.KATHMANDU DURBAR SQUARE");
    printf("\n\t4.CHITWAN NAITONAL PARK(SAURAHA)");
    printf("\n\t5.ANNAPURNA BASE CAMP");
    printf("\n\t6.MOUNT EVERST CLIMBING");
    printf("\n\t7.");
    reset();
}
int p = 0;
struct login
{
    int dob;
    char fname[20];
    char lname[20];
    char nat[15];
    char pwd[20];
    char gen[5];
    char port[10];
    char uname[20];
    char pname[20];
    char ver[20];
} l;
void registration() // function for registration for new tourists.
{
    int i, a, digi = 0, up = 0, low = 0, schar = 0, j;
    char *filename = "projectlogin.txt";
    FILE *log = fopen(filename, "a+");
    if (log == NULL)
    {
        printf("\nError opening the file.");
        exit(1);
    }
    fclose(log);
    struct login l;
    {
        yellow();
        printf("\nEnter your Firstname: ");
        reset();
        scanf("%s", l.fname);
        yellow();
        printf("\nEnter your Surname: ");
        reset();
        scanf("%s", l.lname);
        yellow();
        printf("\nEnter your age: ");
        reset();
        scanf("%d", &l.dob);
        yellow();
        printf("\nEnter your gender: ");
        reset();
        scanf("%s", l.gen);
        yellow();
        printf("\nEnter your nation: ");
        reset();
        scanf("%s", l.nat);
        yellow();
        printf("\nEnter your passport number: ");
        reset();
        scanf("%s", l.port);
        yellow();
        getchar();
        printf("\nChoose your username for the account (Suggest you to use a unique username): ");
        reset();
        scanf("%s", l.uname);
    XY:
        yellow();
        printf("\nChoose your password: ");
        reset();
        scanf("%s", l.pname);
        a = strlen(l.pname);
        if (a < 8)
        {
            color();
            printf("\n ePassword should contain contain minimum 8 characters.\n");
            reset();
            goto XY;
        }
        else if (a > 15)
        {
            printf("Error: Password shouldn't exceed 15 characters.\n");
            exit(0);
        }
        else
        {
            for (j = 0; l.pname[j] != '\0'; j++)
            {
                if (l.pname[j] >= 'A' && l.pname[j] <= 'Z')
                    up = up + 1;
                if (l.pname[j] >= 'a' && l.pname[j] <= 'z')
                    low = low + 1;
                if (l.pname[j] >= '0' && l.pname[j] <= '9')
                    digi = digi + 1;
                if (l.pname[j] == '@' || l.pname[j] == '#' || l.pname[j] == '$') // here I am taking only three special characters valid for passowrd to make it simple and easy.
                    schar = schar + 1;
            }
            if (up == 0 || low == 0 || digi == 0 || schar == 0)
            {
                printf("\nThere must be at least one Uppercase, one lowercase, one digit and one special character.\n");
                printf("\nPlease try again");
            AB:
                goto XY;
            }
            else
            {
                yellow();
                printf("\nConfirm your Password: ");
                reset();
                scanf("%s", l.ver);
                {
                    if (strcmp(l.pname, l.ver) == 0)
                    {
                        printf("\nYour is Password Verified.\n\n");
                        printf("\nRegistering your information.......... \n");
                        red();
                        sleep(5);
                        printf("\nREGISTRATION SUCCESSFULL!!!");
                        printf("\n\nTHANK YOU FOR REGISTARTION!!!.YOUR ACCOUNT HAVE BEEN SAVED.\n\n");
                        reset();
                        {
                            log = fopen(filename, "a");
                            fwrite(&l, sizeof(struct login), 1, log);
                        }
                        fclose(log);
                    }
                    else
                    {
                        int c;
                        printf("Sorry,Password did not match");
                        printf("\nWanna try again(1/0)?");
                        getchar();
                        scanf("%d", &c);
                        if (c == 1)
                        {
                            goto AB;
                        }
                        else
                        {
                            printf("You will lose all your data:\nAre you sure you want to exit?(1/0");
                            scanf("%d", &c);
                            if (c == 1)
                            {
                                exit(0);
                            }
                            else
                            {
                                goto AB;
                            }
                        }
                    }
                }
            }

            getchar();
        }
    }
}
void logi()
{
XY:
{
    FILE *log = fopen("projectlogin.txt", "r");
    if (log == NULL)
    {
        printf("Error opening file");
        exit(1);
    }
    char password[20], pnumber[20];
    yellow();
    printf("\n\nEnter your passport number: ");
    reset();
    scanf("%s", pnumber);
    getchar();
    yellow();
    printf("\nEnter your password: ");
    reset();
    scanf("%s", password);
    fflush(stdin);
    struct login l;
    while (fread(&l, sizeof(struct login), 1, log))
    {
        if (strcmp(pnumber, l.port) == 0)
        {
            if (strcmp(password, l.pname) == 0)
            {
                p = 1;
                break;
            }
            else
            {
                p = 2;
            }
        }
        else
        {
            p = 3;
        }
    }
    {
        if (p == 1)
        {
            printf("\nYou have logged in succesfully\n");
        }
        else if (p == 3)
        {
            printf("\nWrong username\n");
            goto XY;
        }
        else if (p == 2)
        {
            printf("\nWrong id\n");
            goto XY;
        }
    }
    fclose(log);
}
}
void admin()
{
    struct login l;
    char c;
    int nep = 0, us = 0, au = 0, cn = 0, NA = 0, n = 0;
    FILE *log = fopen("projectlogin.txt", "rb");
    if (log == NULL)
    {
        printf("Error openin file");
        exit(1);
    }
    while ((fread(&l, sizeof(struct login), 1, log)))
    {
        printf("\n\tFirst Name: %s\n\tLast Name: %s\n\tAge: %d\n\tGender: %s\n\tNationality: %s\n\tPassport Number: %s\n\tUsername: %s\n\tPassword: %s\n\n", l.fname, l.lname, l.dob, l.gen, l.nat, l.port, l.uname, l.pname);
        if (strcmp(l.nat, "America") == 0 || strcmp(l.nat, "america") == 0 || strcmp(l.nat, "US") == 0 || strcmp(l.nat, "us") == 0 || strcmp(l.nat, "usa") == 0 || strcmp(l.nat, "USA") == 0 || strcmp(l.nat, "AMERICA") == 0)
        {
            us = us + 1;
        }
        else if (strcmp(l.nat, "Canada") == 0 || strcmp(l.nat, "canada") == 0 || strcmp(l.nat, "CANADA") == 0)
        {
            cn = cn + 1;
        }
        else if (strcmp(l.nat, "australia") == 0 || strcmp(l.nat, "Australia") == 0 || strcmp(l.nat, "AUSTRALIA") == 0 || strcmp(l.nat, "aus") == 0)
        {
            au = au + 1;
        }
        else if (strcmp(l.nat, "Nepal") == 0 || strcmp(l.nat, "NEPAL") == 0 || strcmp(l.nat, "nepal") == 0 || strcmp(l.nat, "nep") == 0 || strcmp(l.nat, "NEP") == 0)
        {
            nep = nep + 1;
        }
        else
        {
            NA = NA + 1;
        }
        n = n + 1;
    }
    printf("\n\tThe no. of tourist from USA is %d", us);
    printf("\n\tThe no. of tourist from Nepal is %d", nep);
    printf("\n\tThe no. of tourist from Australia is %d", au);
    printf("\n\tThe no. of tourist from Canada is %d\n", cn);
    printf("\tThe total number of tourist from other countries is %d", NA);
    printf("\n\tTotal Number of users = %d ", n);
}
int main()
{
    int ans;
    yellow();
    printf("\t\t\t\t\t\t\t\t  ||=================================||\n\n");
    reset();
    red();
    printf("\t\t\t\t\t\t\t\t  || 🤟 TOURISM MANAGEMENT SYSTEM 🤟 ||\n\n");
    reset();
    yellow();
    printf("\t\t\t\t\t\t\t\t  ||=================================|| ");
    reset();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t     Press enter to continue\n");
    getchar();
PQ:
    yellow();
    printf("\nEnter the user type:\n ");
    printf("\nEnter 1 if you are a new user: ");
    printf("\nEnter 2 if you are a existing user: ");
    printf("\nEnter 3 if you are a system user: \n");
    reset();
    scanf("%d", &ans);
    if (ans == 1)
    {
        red();
        printf("\nWelcome. This is for the new user where you are asked to fill up the given form and submit it to the sytem.\n\n");
        reset();
        registration();
    }
    if (ans == 2)
    {
        logi();
        int choice;
        printf("\nWelcome to your account!!!");
    AZ:
        red();
        printf("\n\n1. ABOUT OUR COUNTRY ");
        printf("\n2. BEST PLACES FOR VISITING ");
        printf("\n3. BEST YOU CAN GET FOR CONSIDERABLE PRICE ");
        printf("\n4. LOGOUT AND BACK TO MAIN MENU ");
        printf("\n5. ABOUT DEVELOPER ");
        reset();
    AB:
        printf("\n\nEnter the choice:  ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: //HISTORY
        {
            red();
            printf("\n\t\t\t\t============");
            printf("\n\n\t\t\t\tWELCOME NEPAL");
            printf("\n\t\t\t\t============");
            reset();
            printf("\n\nNepal with rich ancient cultures set against the most dramatic scenery in the world is a land of discovery and unique experience. For broad minded individuals who value an experience that is authentic and mesmerizing, Nepal is the ideal destination. Come and revel in the untouched and the undiscovered and uncover yourself.");
            printf("\nIt is unsurpassed that the sheer diversity Nepal boasts, from steamy jungle and Terai to the icy peaks of the world’s highest mountains means that the range of activities on offer. Trekking, mountaineering, rafting in spectacular scenery are just three things Nepal is famous for. Activities as diverse as Elephant Polo and a micro-light flight through the Himalayas show that in Nepal, the only boundary is your imagination. With 15 National & Wildlife Parks (two are UNESCO Heritage sites) Nepal is one of the last places on earth you can spot the Asiatic rhinoceros and the Royal Bengal Tiger.");
            goto AZ;
        }
        case 2: // Best places to visit inside country and their information.
        {
            places();
            goto AZ;
        }
        case 3: // Best you can get for minumum price with maximum fun and entertainment.
        {
            agency();
            goto AZ;
        }
        case 4: // Logout and back to the main menu
        {
            goto PQ;
        }
        case 5:
        {
            red();
            printf("\n\n\t\t\t\t================ DEVELOPER DETAILS ================\n\n");
            reset();
            printf("\t\tNAME: Prayash Mishra \t\t\t\t\t ADDRESS: Lamachaur-16, Pokhara\n\n");
            printf("\t\tOCCUPATION: Student(Computer Engineering) \t\t CONTACT INFO: mishraprayash00@gmail.com \n\n");
            goto AZ;
        }
        default:
        {
            printf("Incorrect Input!\n");
            goto AB;
        }
        }
    }
    if (ans == 3)
    {
        char id[20], pwd[20];
        char un[20] = "programmer@123";
        char pw[20] = "pass123";
        red();
        printf("\t\t\t\t\t\t\t\t=======================================");
        printf("\n\t\t\t\t\t\t\t\t Welcome to the system(admin)login page ");
        printf("\n\t\t\t\t\t\t\t\t=======================================\n");
    AD:
        reset();
        printf("\n\n\tEnter your username or id: ");
        scanf("%s", id);
        {
            if (strcmp(id, un) == 0)
            {
                red();
                printf("\n\tCorrect Username\n");
                reset();

                printf("\n\tEnter your password: ");
                scanf("%s", pwd);
                {
                    if (strcmp(pwd, pw) == 0)
                    {
                        red();
                        printf("\n\n\t\t\t\t\t\t\t\tLogin Successfull!....\n\n\n");
                        printf("The information here you are seeing is very sensitive and personal. So, Please be careful while handling this data.😂\n\n");
                        reset();
                        admin();
                    }
                    else
                    {
                        red();
                        printf("\n\tWrong Passsowrd\n");
                        reset();
                    }
                }
            }
            else
            {
                char a;
                red();
                printf("\n\tWrong username\n");
                reset();
                printf("\n\tTry again(Y/N)? ");
                getchar();
                scanf("%c", &a);
                if (a == 'Y' || a == 'y')
                {
                    goto AD;
                }
                else if (a == 'N' || a == 'n')
                {

                    exit(0);
                }
                else
                {
                    goto PQ;
                }
            }
        }
    }
}

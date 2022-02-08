#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;


int  main()
   {
     

     int ch ,vstr,tvstr=0,amt=0,tamt=0 ,nvstr=0,tnvstr,vfd,tvfd,totalamt=0,d,damt,totald=0;

    double gst=0;
    char str[100],choice[10]={"Y"},ans[200];

     cout<<"\t"<<"WELCOME TO THE MULTI CUISINE RESTAURANT";cout<<endl;
     cout<<"\n STARTER CORNER:1";
     cout<<"\n MAIN COURSE:2";
     cout<<"\n DESERTS:3";cout<<endl;

     cout<<"\n PRESS 1 FOR STARTER";
     cout<<"\n PRESS 2 FOR MAIN COURSE";
     cout<<"\n PRESS 3 FOR COOL DESERTS";
     cout<<endl;

     cout<<"\n ENTER YOUR CHOICE"<<endl;
     cin>>ch;

     switch(ch)
     {
      case 1:
      cout<<"\n WELCOME TO STARTER MENU!!!!";
      cout<<"\n ENTER 'VS' FOR VEG STARTER AND 'NVS' FOR NON VEG STARTER ";
      cin>>str;

      if(strcmpi("VS",str)==0)
	{
      cout<<"\t\tSTARTERS\t\tPRICE IN RS.";
      cout<<"\n 1. PANEER TIKKA\t\t\t110";
      cout<<"\n 2. VEG SEEKH KABAB\t\t\t110";
      cout<<"\n 3. HARA BHARA KABAB\t\t\t110";
      cout<<"\n 4. SHANGHAI SPRING ROLL\t\t150";
      cout<<"\n 5. AMERICAN CORN BALL\t\t\t150";
      cout<<"\n 6. CRISPY AMERICAN CORN\t\t140";
      cout<<"\n 7. CRISPY BABY CORN\t\t\t140";
      cout<<"\n 8. CRISPY MUSHROOM \t\t\t120";
      cout<<"\n 9. CRISPY CHILLY POTATO\t\t120";
      cout<<"\n10. CRISPY CHILLY CHANA\t\t\t150";

      while (strcmpi("Y",choice)==0)
      {
      cout<<"\n CHOOSE YOUR STARTER FROM THE ABOVE LIST"<<endl;
      cin>>vstr;

      cout<<"\n ENTER THE TOTAL NO. OF STARTERS YOU WANT"<<endl;
      cin>>tvstr;

      if(vstr>=1&& vstr<=3)
      amt=tvstr*110;
      if(vstr==4 || vstr==5)
      amt=tvstr*150;
      if(vstr==6|| vstr==7)
      amt=tvstr*140;
      if(vstr==8 || vstr==9)
      amt=tvstr*120;
      if(vstr==10)
      amt=tvstr*150;
      tamt=tamt+amt;

      cout<<"\n DO YOU WANT TO PLACE MORE ORDER? ENTER Y/N";cout<<endl;
      cin>>choice;
      }
      }

      if(strcmpi("NVS",str)==0)
      {
      cout<<"\t\t NON-VEG STARTERS\t\tPRICE IN RS.";
      cout<<"\n 1. CHICKEN TIKKA\t\t\t\t170";
      cout<<"\n 2. MURG RESHMI KABAB\t\t\t\t170";
      cout<<"\n 3. MURG CHILLI KABAB KABAB\t\t\t160";
      cout<<"\n 4. CHICKEN SEEKH KABAB\t\t\t\t180";
      cout<<"\n 5. TANGDI KABAB\t\t\t\t180";
      cout<<"\n 6. MURG TANDOORI\t\t\t\t190";
      cout<<"\n 7. FISH AJWANI TIKKA\t\t\t\t190";
      cout<<"\n 8. CHILLI CHICKEN \t\t\t\t160";
      cout<<"\n 9. DRUMS OF HEAVEN\t\t\t\t180";
      cout<<"\n10. SHANGHAI CHICKEN\t\t\t\t180";


     while (strcmpi("Y",choice)==0)
	{
      cout<<"\n CHOOSE YOUR STARTER FROM THE ABOVE LIST"<<endl;
      cin>>nvstr;

      cout<<"\n ENTER THE TOTAL NO. OF STARTERS YOU WANT"<<endl;
      cin>>tnvstr;

      if(nvstr==1||nvstr==2)
      amt=tnvstr*170;
      if(nvstr==3)
      amt=tnvstr*160;
      if(nvstr==4||nvstr==7)
      amt=tnvstr*180;
      if(nvstr==8)
      amt=tnvstr*190;
      if(nvstr==9||nvstr==10)
      amt=tnvstr*180;
      tamt=tamt+amt;

      cout<<"\n DO YOU WANT TO PLACE MORE ORDER? ENTER Y/N";cout<<endl;
      cin>>choice;
      }
    }

	   cout<<"\n";

     cout<<"\n*********************MULTI CUISINE RESTAURANT***************************";
     cout<<"\n*************************BILL******************************";
     cout<<"\n";
     cout<<"TOTAl COST=RS"<<tamt<<endl;
     gst=(14.5/100)*tamt;
     cout<<"GST=14.5%"<<endl;
     cout<<"TOTAL GST=RS."<<gst<<endl;
     cout<<"AMOUNT TO BE PAID=RS."<<(tamt+gst)<<endl;
    break;


     case 2:
      cout<<"\n MAIN COURSE:INDIAN AND CHINEESE DISHES!!!!!!!!!!";
      cout<<"\n ENTER 'V' FOR INDIAN VEG DISHES,'NV' for INDIAN NON VEG DISHES AND 'C' FOR CHINESE DISHES"<<endl;
      cin>>str;


     if(strcmpi("V",str)==0)
      {
      cout<<"\t\t VEG DISHES\t\t PRICE IN RS.";
      cout<<"\n 1. SHAHI PANEER\t\t\t180";
      cout<<"\n 2. NAVRATAN KORMA\t\t\t180";
      cout<<"\n 3. KADHAI PANEER\t\t\t150";
      cout<<"\n 4. MALAI KOFTA\t\t\t\t140";
      cout<<"\n 5. KADHAI VEGETABLE\t\t\t140";
      cout<<"\n 6. VEGETABLE PAKEEZA\t\t\t140";
      cout<<"\n 7. SHABNAM CURRY\t\t\t150";
      cout<<"\n 8. CHILLI CHANA \t\t\t150";
      cout<<"\n 9. BUTTER NAN\t\t\t\t110";
      cout<<"\n10. VEG PULAO\t\t\t\t110";


     while (strcmpi("Y",choice)==0)
	{
      cout<<"\n CHOOSE YOUR MAIN VEG COURSE FROM THE ABOVE LIST";
      cin>>vfd;

      cout<<"\n ENTER THE TOTAL NO. OF PLATESS YOU WANT";
      cin>>tvfd;

      if(vfd==1||vfd==2)
      amt=tvfd*180;
      if(vfd==3)
      amt=tvfd*150;
      if((vfd==4)||(vfd==5)||(vfd==6))
      amt=tvfd*140;
      if((vfd==7)||(vfd==8))
      amt=tvfd*150;
      if(vfd==9||vfd==10)
      amt=tvfd*110;

      totalamt=totalamt+amt;
      cout<<"\n DO YOU WANT TO PLACE MORE ORDER? ENTER Y/N";
      cin>>choice;
      }
    }





    if(strcmpi("NV",str)==0)
      {
      cout<<"\tNON VEG DISHES\t\t\tPRICE IN RS.";
      cout<<"\n 1. CHICKEN TIKKA\t\t\t180";
      cout<<"\n 2. CHICKEN BHARTAt\t\t\t180";
      cout<<"\n 3. KADHAI CHICKEN\t\t\t150";
      cout<<"\n 4. MUGHALAI CHICKEN\t\t\t160";
      cout<<"\n 5. CHICKEN DO PYAZA\t\t\t160";
      cout<<"\n 6. PRAWN MALAI CURRY\t\t\t160";
      cout<<"\n 7. MUTTON ROGAN JOSH\t\t\t170";
      cout<<"\n 8. MURG NAVRATAN KORMA\t\t\t170";
      cout<<"\n 9. FISH SARSOWALA\t\t\t190";
      cout<<"\n10. FISH DHANIAWALA\t\t\t190";


     while (strcmpi("Y",choice)==0)
	{
      cout<<"\n CHOOSE YOUR MAIN NON VEG COURSE FROM THE ABOVE LIST";
      cin>>vfd;

      cout<<"\n ENTER THE TOTAL NO. OF PLATESS YOU WANT";
      cin>>tvfd;

      if(vfd==1||vfd==2)
      amt=tvfd*180;
      if(vfd==3)
      amt=tvfd*150;
      if((vfd==4)||(vfd==5)||(vfd==6))
      amt=tvfd*160;
      if((vfd==7)||(vfd==8))
      amt=tvfd*170;
      if(vfd==9||vfd==10)
      amt=tvfd*190;

      totalamt=totalamt+amt;
      cout<<"\n DO YOU WANT TO PLACE MORE ORDER? ENTER Y/N";
      cin>>choice;
      }
    }

    if(strcmpi("C",str)==0)
      {
      cout<<"\tCHINEESE DISHES\t\t\tPRICE IN RS.";
      cout<<"\n 1. SCHEZWAN FRIED RICE\t\t\t240";
      cout<<"\n 2. SCHEZWAN CHICKEN\t\t\t280";
      cout<<"\n 3. CHILLY CHICKEN\t\t\t280";
      cout<<"\n 4. CHICKEN NOODLE\t\t\t210";
      cout<<"\n 5. VEG HAKKA NOODLE\t\t\t210";
      cout<<"\n 6. CHICKEN MANCHURIAN\t\t\t190";
      cout<<"\n 7. PANEER MANCHURIAN\t\t\t190";
      cout<<"\n 8. CHILLY PANEER\t\t\t190";
      cout<<"\n 9. SHANGHAI RICE\t\t\t200";
      cout<<"\n10. KIMCHI RICE\t\t\t\t200";


     while (strcmpi("Y",choice)==0)
	{
      cout<<"\n CHOOSE YOUR MAIN COURSE FROM THE ABOVE LIST";
      cin>>vfd;

      cout<<"\n ENTER THE TOTAL NO. OF PLATESS YOU WANT";
      cin>>tvfd;

      if(vfd==2||vfd==3)
      amt=tvfd*280;
      if(vfd==1)
      amt=tvfd*240;
      if((vfd==6)||(vfd==7)||(vfd==8))
      amt=tvfd*190;
      if((vfd==4)||(vfd==5))
      amt=tvfd*210;
      if(vfd==9||vfd==10)
      amt=tvfd*200;
      totalamt=totalamt+amt;
      cout<<"\n DO YOU WANT TO PLACE MORE ORDER? ENTER Y/N";
      cin>>choice;
      }
    }



       cout<<"\n";

     cout<<"\n*********************MULTI CUISINE RESTAURANT***************************";
     cout<<"\n*************************BILL******************************";
     cout<<"\n";
     cout<<"TOTAl COST=RS"<<totalamt<<endl;
     gst=(14.5/100)*totalamt;
     cout<<"GST=14.5%"<<endl;
     cout<<"TOTAL GST=RS."<<gst<<endl;
     cout<<"AMOUNT TO BE PAID=RS."<<(totalamt+gst)<<endl;
    break;


      case 3:
       cout<<"\t\tDESERTS\t\t Price in Rs."<<endl;
       cout<<"1. Softy pineapple\t\t\t110\n";
       cout<<"2. Softy Crunchy\t\t\t110\n";
       cout<<"3. Chocolate Walnut Brownie\t\t90\n";
       cout<<"4. Chocolate Doughnut\t\t\t90\n";
       cout<<"5. Marble Cake\t\t\t\t70\n";
       cout<<"6. Mocha magic \t\t\t\t90\n";
       cout<<"7. Black Forest\t\t\t\t90\n";
       cout<<"8. Mango Shake\t\t\t\t80\n";
       cout<<"9. Pineapple Shake\t\t\t80\n";
       cout<<"10. Tooty Fruity\t\t\t120\n";cout<<endl;
       while(strcmpi(choice,"Y")==0)
	{
	cout<<"Choose your desert  by entering any no.!!"<<endl;
	cin>>d;
	cout<<"Enter the total no. of items you want to buy!!"<<endl;
	cin>>totald;
	if (d==1||d==2)
	damt=totald*110;

	if (d==3||d==4)
	damt=totald*90;

	if(d==5)
	damt=totald*70;

	if(d==6||d==7)
	damt=totald*90;

	if(d==8||d==9)
	damt=totald*80;

	if(d==10)
	damt=totald*120;

	totalamt=totalamt+damt;
	cout<<"Do you want to place more order ? enter Y/N"<<endl;
	gets(choice);

}
cout<<endl;
cout<<"******* MULTI CUISINE RESTAURANT *********"<<endl;
cout<<"****BILL ****"<<endl;
cout<<"Total Cost = Rs."<<totalamt<<endl;
gst=14.5/100*totalamt;
cout<<"G.S.T=14.5%"<<endl;
cout<<"Total G.S.T=Rs."<<gst<<endl;
cout<<"Amount to be paid =Rs."<<(totalamt+gst);
break;

     default:
       cout<<"You have entered wrong choice!!"<<endl<<endl;
       cout<<"You can enter in the Multi Cuisine Restaurant by executing the program again with the correct choice !!"<<endl<<endl;
       cout<<"Now Quit the program "<<endl<<endl;break;
      }
       cout<<"To exit Multi Cuisine Restaurant World , enter the word 'QUIT'!!"<<endl<<endl;
       gets(ans);
       if(strcmpi(ans,"QUIT")==0)
	{
	cout<<"Thanking for coming to Multi cuisine Restaurant !!!!!!!!!!!!!!!!!!!!!"<<endl;
	cout<<"Your Pleasure our Comfort!!!!!!!!!!!!!!!!!!"<<endl;
	cout<<"Visit Again!!!!!!!!!!!!!!!!"<<endl;
	}
      

}


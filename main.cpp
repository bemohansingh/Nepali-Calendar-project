
#include"declarevar.h"
#include"reminder.h"
#include"pholiday.h"
#include"password.h"
#include"gk.h"
#include"calculator.h"
#include"setting.h"
#include"fun.h"
#include"event.h"
#include"mouse.h"
#include"nep-eng cal.h"
#include"load_clean.h"
#include"fhide.h"
int crl=0;
 HWND hwnd1;
void playrubics();
void mind();
int sm=0;
int lphere=0;
void menucal()
{

    if(mmc==1)
    {


        calender();
        apply_surface(150,SCREEN_HEIGHT-50,bsbk,screen);
        if(menulst[8]!=NULL)
         SDL_FreeSurface(menulst[8]);
        menulst[8] = TTF_RenderText_Solid( font[4],"Input in A.D.", textColor7 );
        apply_surface(150,SCREEN_HEIGHT-50,menulst[8],screen);
         if(menulst[9]!=NULL)
        SDL_FreeSurface(menulst[9]);
        menulst[9] = TTF_RenderText_Solid( font[4],"Input in B.S.", textColor7 );
        apply_surface(150,SCREEN_HEIGHT-25,menulst[9],screen);
             if(menulst[10]!=NULL)
        SDL_FreeSurface(menulst[10]);
        menulst[10] = TTF_RenderText_Solid( font[4],"Convert", textColor5 );
        apply_surface(310,SCREEN_HEIGHT-25,menulst[10],screen);
             if(menulst[11]!=NULL)
         SDL_FreeSurface(menulst[11]);
        menulst[11] = TTF_RenderText_Solid( font[4],"A.D. Eqivalent", textColor5 );
        apply_surface(410,SCREEN_HEIGHT-50,menulst[11],screen);
         if(menulst[12]!=NULL)
        SDL_FreeSurface(menulst[12]);
        menulst[12] = TTF_RenderText_Solid( font[4],"B.S. Eqivalent", textColor5 );
        apply_surface(410,SCREEN_HEIGHT-25,menulst[12],screen);
 if(menulst[13]!=NULL)
        SDL_FreeSurface(menulst[13]);
        menulst[13] = TTF_RenderText_Solid( font[4],"Return back", textColor7 );
        apply_surface(545,SCREEN_HEIGHT-50,menulst[13],screen);

datee();
if(yyear!=NULL)
SDL_FreeSurface(yyear);
char da[10],md[10];
int ys=0;
if (asbs==0)
{
    ys=yearv;
    strcpy(md,monthdt(monthv));
}
else if(asbs==1)
{
ys=nepaliconvert(dayv,monthv,yearv);
ys=yearl;
strcpy(md,monthdtn(monn));
}
da[0]=48+ys/1000;
da[1]=48+(ys%1000)/100;
da[2]=48+(ys%100)/10;
da[3]=48+(ys%10);
da[4]=' ';
da[5]='\0';

  if(yyearid!=NULL)
    SDL_FreeSurface(yyearid);
if(mmonthid!=NULL)
    SDL_FreeSurface(mmonthid);
if(asbs==0)
{

yyearid = TTF_RenderText_Solid( font[7],da, textColor3 );
apply_surface(195,45,yyearid,screen);
mmonthid = TTF_RenderText_Solid( font1,md, textColor3 );
}
else
{
  yyearid = TTF_RenderText_Solid( font[6],da, textColor3 );
  apply_surface(188,46,yyearid,screen);
  mmonthid = TTF_RenderText_Solid( font[6],md, textColor3 );
}

apply_surface(305,68,fr,screen);
apply_surface(185,68,bk,screen);
if(mmonth!=NULL)
SDL_FreeSurface(mmonth);

apply_surface(460,53,mmonthid,screen);
apply_surface(SCREEN_WIDTH-90,56,fr,screen);
apply_surface(450,56,bk,screen);
char eb[10][50],nb[10][50];
strcpy(eb[0],"Sunday");
strcpy(nb[0],"cfOtaf/");
strcpy(eb[1],"Monday");
strcpy(nb[1],";f]daf/");
strcpy(eb[2],"Tuesday");
strcpy(nb[2],"d+unaf/");
strcpy(eb[3],"Wednesday");
strcpy(nb[3],"a'waf/");
strcpy(eb[4],"Thursday");
strcpy(nb[4],"ljlxaf/");
strcpy(eb[5],"Friday");
strcpy(nb[5],"z'qmaf/");
strcpy(eb[6],"Saturday");
strcpy(nb[6],"zlgjf/");
        if(menulst[14]!=NULL)
        SDL_FreeSurface(menulst[14]);
        menulst[14] = TTF_RenderText_Solid( font[0],eb[0], textColor6 );
        apply_surface(130,110,menulst[14],screen);
        if(menulst[15]!=NULL)
        SDL_FreeSurface(menulst[15]);
        menulst[15] = TTF_RenderText_Solid( font[0],eb[1], textColor7 );
        apply_surface(220,110,menulst[15],screen);
        if(menulst[16]!=NULL)
        SDL_FreeSurface(menulst[16]);
        menulst[16] = TTF_RenderText_Solid( font[0],eb[2], textColor7 );
        apply_surface(310,110,menulst[16],screen);
        if(menulst[17]!=NULL)
        SDL_FreeSurface(menulst[17]);
        menulst[17] = TTF_RenderText_Solid( font[0],eb[3], textColor7 );
        apply_surface(390,110,menulst[17],screen);
        if(menulst[18]!=NULL)
        SDL_FreeSurface(menulst[18]);
        menulst[18] = TTF_RenderText_Solid( font[0],eb[4], textColor7 );
        apply_surface(480,110,menulst[18],screen);
        if(menulst[19]!=NULL)
        SDL_FreeSurface(menulst[19]);
        menulst[19] = TTF_RenderText_Solid( font[0],eb[5], textColor7 );
        apply_surface(570,110,menulst[19],screen);
        if(menulst[20]!=NULL)
        SDL_FreeSurface(menulst[20]);
        menulst[20] = TTF_RenderText_Solid( font[0],eb[6], textColor7);
        apply_surface(630,110,menulst[20],screen);
        if(menulst[21]!=NULL)
        SDL_FreeSurface(menulst[21]);
        menulst[21] = TTF_RenderText_Solid( font[1],nb[0], textColor7 );
        apply_surface(120,125,menulst[21],screen);
        if(menulst[22]!=NULL)
        SDL_FreeSurface(menulst[22]);
        menulst[22] = TTF_RenderText_Solid( font[1],nb[1], textColor7 );
        apply_surface(210,125,menulst[22],screen);
        if(menulst[23]!=NULL)
        SDL_FreeSurface(menulst[23]);
        menulst[23] = TTF_RenderText_Solid( font[1],nb[2], textColor7 );
        apply_surface(305,125,menulst[23],screen);
        if(menulst[24]!=NULL)
        SDL_FreeSurface(menulst[24]);
        menulst[24] = TTF_RenderText_Solid( font[1],nb[3], textColor7 );
        apply_surface(390,125,menulst[24],screen);
        if(menulst[25]!=NULL)
        SDL_FreeSurface(menulst[25]);
        menulst[25] = TTF_RenderText_Solid( font[1],nb[4], textColor7 );
        apply_surface(470,125,menulst[25],screen);
        if(menulst[26]!=NULL)
        SDL_FreeSurface(menulst[26]);
        menulst[26] = TTF_RenderText_Solid( font[1],nb[5], textColor7 );
        apply_surface(550,125,menulst[26],screen);
        if(menulst[27]!=NULL)
        SDL_FreeSurface(menulst[27]);
        menulst[27] = TTF_RenderText_Solid( font[1],nb[6], textColor6 );
        apply_surface(630,125,menulst[27],screen);
    }
    else if(mmc==6)
    {
        if(gameplaym==0)
        {
            if(msg[499]!=NULL)
        SDL_FreeSurface(msg[499]);
        msg[499]=TTF_RenderText_Solid(font[4],"1.> SOLVE THE RUBIK's CUBE ",textColor7);
        apply_surface(150,100,msg[499],screen);
        if(msg[498]!=NULL)
         SDL_FreeSurface(msg[498]);
        msg[498]=TTF_RenderText_Solid(font[4],"2.> THINK TELLER ",textColor7);
        apply_surface(150,150,msg[498],screen);
        }
        else if(gameplaym==1)
        playrubics();
        else if(gameplaym==2)
        mind();
    }
}
void largewin()
{//view large win

        apply_surface( 0, 0, big, screen );
gettime();
if(hhour!=NULL)
 SDL_FreeSurface( hhour );
 if(mminate!=NULL)
     SDL_FreeSurface( mminate );
     if(sseconds!=NULL)
      SDL_FreeSurface( sseconds );
      if(ampm!=NULL)
          SDL_FreeSurface( ampm );
          if(ampm1!=NULL)
          SDL_FreeSurface( ampm1 );
time();
           apply_surface( 0, SCREEN_HEIGHT-50, hhour, screen );
    apply_surface( hhour->w, SCREEN_HEIGHT-50, mminate, screen );
    apply_surface( hhour->w+mminate->w, SCREEN_HEIGHT-50, sseconds, screen );
    apply_surface( hhour->w+mminate->w+sseconds->w+8, SCREEN_HEIGHT-45, ampm, screen );
    apply_surface( hhour->w+mminate->w+sseconds->w+8, SCREEN_HEIGHT-30, ampm1, screen );

        if(mmv==1)
        {

        apply_surface(0,55,viewm,screen);
        }
        else if(mmv==2)
        {
        apply_surface(0,103,viewm,screen);
        }
        else if(mmv==3)
        {
        apply_surface(0,153,viewm,screen);
        }
        else if(mmv==4)
        {
        apply_surface(0,203,viewm,screen);
        }
        else if(mmv==5)
        {
        apply_surface(0,253,viewm,screen);
        }
        else if(mmv==6)
        {
        apply_surface(0,303,viewm,screen);
        }
        else if(mmv==7)
        {
        apply_surface(0,353,viewm,screen);
        }
        else if(mmv==8)
        {
        apply_surface(0,403,viewm,screen);
        }
        //click the menu
          if(mmc==1)
        {
            if(bs!=NULL)
            SDL_FreeSurface(bs);
            if(ad!=NULL)
            SDL_FreeSurface(ad);
            if(asbs==1)
        bs = TTF_RenderText_Solid( font[0],"B.S.", textColor );
        else
        bs = TTF_RenderText_Solid( font[0],"B.S.", textColor7 );
        if(asbs==0)
        ad = TTF_RenderText_Solid( font[0],"A.D.", textColor );
        else
        ad = TTF_RenderText_Solid( font[0],"A.D", textColor7 );
        apply_surface(150,60,ad,screen);
        apply_surface(150,75,bs,screen);
        apply_surface(0,55,clickm,screen);
        }
        else if(mmc==2)
        {
        apply_surface(0,103,clickm,screen);
        }
        else if(mmc==3)
        {
        apply_surface(0,153,clickm,screen);
        }
        else if(mmc==4)
        {
        apply_surface(0,203,clickm,screen);
        }
        else if(mmc==5)
        {
        apply_surface(0,253,clickm,screen);
        }
        else if(mmc==6)
        {
        apply_surface(0,303,clickm,screen);
        }
        else if(mmc==7)
        {
        apply_surface(0,353,clickm,screen);
        }
        else if(mmc==8)
        {
        apply_surface(0,403,clickm,screen);
        }
        if(menulst[0]!=NULL)
        SDL_FreeSurface(menulst[0]);
        menulst[0] = TTF_RenderText_Solid( font[5],"Calendar", textColor5 );
        apply_surface(3,63,menulst[0],screen);
 if(menulst[7]!=NULL)
        SDL_FreeSurface(menulst[7]);
        menulst[7] = TTF_RenderText_Solid( font[5],"Events", textColor5 );
        apply_surface(8,63+50,menulst[7],screen);
 if(menulst[1]!=NULL)
        SDL_FreeSurface(menulst[1]);
        menulst[1] = TTF_RenderText_Solid( font[5],"Reminder", textColor5 );
        apply_surface(5,63+100,menulst[1],screen);
 if(menulst[2]!=NULL)
        SDL_FreeSurface(menulst[2]);
        menulst[2] = TTF_RenderText_Solid( font[5],"Calculator", textColor5 );
        apply_surface(-3,63+150,menulst[2],screen);
 if(menulst[3]!=NULL)
        SDL_FreeSurface(menulst[3]);
        menulst[3] = TTF_RenderText_Solid( font[5],"FileLocker", textColor5 );
        apply_surface(-3,63+200,menulst[3],screen);
 if(menulst[4]!=NULL)
        SDL_FreeSurface(menulst[4]);
        menulst[4] = TTF_RenderText_Solid( font[5],"Fun", textColor5 );
        apply_surface(30,63+250,menulst[4],screen);
 if(menulst[5]!=NULL)
        SDL_FreeSurface(menulst[5]);
        menulst[5] = TTF_RenderText_Solid( font[5],"Setting", textColor5 );
        apply_surface(8,63+300,menulst[5],screen);
 if(menulst[6]!=NULL)
        SDL_FreeSurface(menulst[6]);
        menulst[6] = TTF_RenderText_Solid( font[5],"G.K.", textColor5 );
        apply_surface(30,63+350,menulst[6],screen);

      }



void setingoperation()
{
    int dayc;
    char v[40],v1[40];
gettime();
dayc=nepaliconvert(st.wDay,st.wMonth,st.wYear);
        fp=fopen("setrec.mp3","r+");
        fread(&data,sizeof(data),1,fp);
        fclose(fp);
        if(settinglst==0)
    {
        if(mms[0].lonof==1)
        {
        data.hr1=st.wHour-starth;
        data.mn1=st.wMinute-startm;
        if(data.mn1>=60)
        {
            startm=0;
            data.mn1=0;
        }
        if(dayc!=data.day)
        {
            data.hr1=0;
            data.mn1=0;
            data.day=nepaliconvert(st.wDay,st.wMonth,st.wYear);
        }
        fp=fopen("setrec.mp3","w+");
        fwrite(&data,sizeof(data),1,fp);
        fclose(fp);
if(data.hr1>=mms[0].h && data.mn1==mms[0].m && st.wSecond==2)
{
  ShowWindow (hWnd, SW_SHOW);
MessageBox(0,"Your computer is turning off","Your schedule is acquired",MB_OK);
ShowWindow (hWnd, SW_HIDE);
}
else if(data.hr1>=mms[0].h && data.mn1==mms[0].m-15&& st.wSecond==2)
{
    ShowWindow (hWnd, SW_SHOW);
MessageBox(0,"Your schedule is getting after 15 minutes, please shutdown your computer","Your schedule is reaching",MB_OK);
ShowWindow (hWnd, SW_HIDE);
}
else if(data.hr1>=mms[0].h && data.mn1==mms[0].m-5&& st.wSecond==2)
{
    ShowWindow (hWnd, SW_SHOW);
MessageBox(0,"Your schedule is getting after 5 minutes, please shutdown your computer","Day time period off",MB_OK);
ShowWindow (hWnd, SW_HIDE);
}
if(mmc==7)
{
data.hr1=mms[0].h-data.hr1;
data.mn1=data.hr1*60+mms[0].m-data.mn1;
data.hr1=data.mn1/60;
data.mn1=data.mn1%60;

    SDL_FreeSurface(setting[101]);
    strcpy(v,"remaining time is ");
    v1[0]=48+data.hr1/10;
    v1[1]=48+data.hr1%10;
    v1[2]='\0';
    strcat(v,v1);
    strcat(v," hour ");
     v1[0]=48+data.mn1/10;
    v1[1]=48+data.mn1%10;
    v1[2]='\0';
    strcat(v,v1);
    strcat(v," minute ");
    setting[101]=TTF_RenderText_Solid(font[4],v,textColor5);
    if(ed==0)
    apply_surface(235,92,setting[101],screen);
}
        }
        if(mms[5].lonof==1)
        {
hwnd1=FindWindow(0,"COMPUTER");
 ShowWindow (hwnd1, SW_HIDE);
        }
        else
         ShowWindow (hwnd1, SW_SHOW);
        if(mms[1].lonof==1)
        {

if(st.wHour-sth>=mms[1].h && st.wMinute-stm>=mms[1].m-1&& st.wMinute-stm<=mms[1].m)
{
ShowWindow (hWnd, SW_HIDE);
MessageBox(0,"your time period is finish","warning:-continue running your pc",MB_OK);
ShowWindow (hWnd, SW_SHOW);
}
else if(st.wHour-sth>=mms[1].h && st.wMinute-stm==mms[1].m-15&& st.wSecond==2)
{
ShowWindow (hWnd, SW_HIDE);
MessageBox(0,"Your schedule is getting after 15 minutes, please shutdown your computer","Still your pc is running",MB_OK);
ShowWindow (hWnd, SW_SHOW);
}
else if(st.wHour-sth>=mms[1].h && st.wMinute-stm<=mms[1].m-5&& st.wSecond==2)
{
    ShowWindow (hWnd, SW_HIDE);
MessageBox(0,"Your schedule is getting after 5 minutes, please shutdown your computer","Your pc is still running",MB_OK);
ShowWindow (hWnd, SW_SHOW);
}
int reming=0;
if(mmc==7)
{
reming=(mms[1].h-st.wHour+sth)*60+(mms[1].m-st.wMinute+stm);
SDL_FreeSurface(setting[102]);
    strcpy(v,"remaining time is ");
    v1[0]=48+(reming/60)/10;
    v1[1]=48+(reming/60)%10;
    v1[2]='\0';
    strcat(v,v1);
    strcat(v," hour ");
     v1[0]=48+(reming%60)/10;
    v1[1]=48+(reming%60)%10;
    v1[2]='\0';
    strcat(v,v1);
    strcat(v," minute ");
    setting[102]=TTF_RenderText_Solid(font[4],v,textColor5);
    if(ed==0)
    apply_surface(235,140,setting[102],screen);
}
}
if(spsPwr.ACLineStatus!=255)
{
        if(ckst[0]==0)
        if(mms[2].lonof==1)
        {
            if(spsPwr.BatteryLifePercent<=mms[2].bl)
            {
                ckst[0]=1;
                ShowWindow (hWnd, SW_HIDE);
                MessageBox(0,"Battery is low. Please connect to the charger","warning",MB_OK);
            ShowWindow (hWnd, SW_SHOW);
            }
        }
        if(ckst[1]==0)
        {
         if(mms[3].lonof==1)
        {
            if(spsPwr.BatteryLifePercent>=100)
            {
                ckst[1]=1;
                ShowWindow (hWnd, SW_HIDE);
                MessageBox(0,"Battery is fully charged! please remove your charger","Unplug charger! for uptimum battery life",MB_OK);
            ShowWindow (hWnd, SW_SHOW);
            }
        }

       }
       if(ckst[2]==0)
        if(mms[4].lonof==1)
        {
            if(spsPwr.ACLineStatus!=1 && spsPwr.BatteryLifePercent<=50)
            {
            ckst[2]=1;
            ShowWindow (hWnd, SW_HIDE);
               MessageBox(0,"Computer is not charging please change the power plan in your laptop","warning:- rachger removed",MB_OK);
            ShowWindow (hWnd, SW_SHOW);
            }
        }
}

    }
}

int main(int argc,char* argv[])

{
HWND stealth; //creating stealth (window is not visible)
   AllocConsole();
   stealth=FindWindowA("ConsoleWindowClass",NULL);
   ShowWindow(stealth,0);
        gettime();
        fp=fopen("setrec.mp3","r+");
        fread(&data,sizeof(data),1,fp);
        fclose(fp);
        sth=st.wHour;
stm=st.wMinute;
starth=st.wHour-data.hr1;
startm=st.wMinute-data.mn1;
//this->setWindowFlags(Qt::WindowStaysOnTopHint);
    bool quit = false;
anotherwin=3;

 srand(time(NULL));
ranq=rand()%(gkn+103);

      //Initialize
SCREEN_HEIGHT=450;
SCREEN_WIDTH=700;
spcial();

    if( init() == false )
    {
        return 1;
    }

    //Load the files
    if( load_files() == false )
    {
        return 1;
    }
    read_file();
    if( load_filess() == false )
    {
        return 1;
    }
setcald();
system("attrib -h -s object");
     //While the user hasn't quit
    while( quit == false )
    {


                clk();              //call the clk function inside the header file mouse.h
  while( SDL_PollEvent( &event ) )
        {
            //If the user has Xed out the window
            if( event.type == SDL_QUIT )
            {
                //Quit the program
               quit = true;
            }
        }
        hWnd=FindWindow(0,"mohan");
     //set the window position
     if(xc<=0)
     xc=0;
     if(yc<=0)
     yc=0;
     if(xc>=1200)
     xc=1200;
     if(yc>=720)
     yc=720;
     if(anotherwin!=3)
     {
    SetWindowPos(hWnd,NULL,xc,yc,0,0,SWP_NOSIZE|SWP_NOZORDER);
     }
          if(sm==0)
        {

for(lphere=0;lphere<=10;lphere++)
    {

        if(A[lphere].m==monn && A[lphere].d==nepaliconvert( st.wDay, st.wMonth,st.wYear))
        {
            ShowWindow (hWnd, SW_HIDE);
        MessageBox(0,A[lphere].msg,"Today's Special For You",MB_OK);
        ShowWindow (hWnd, SW_SHOW);
        }
        if(B[lphere].m==st.wMonth && B[lphere].d==st.wDay)
        {
             ShowWindow (hWnd, SW_HIDE);
         MessageBox(0,B[lphere].msg,"Today's Special For You",MB_OK);
          ShowWindow (hWnd, SW_SHOW);
        }
    }

    sm=1;}

    if(anotherwin==0)
    {
        mmc=1;
        if( SDL_Flip( screen ) == -1 )
        {
            return 1;
        }
        clean_up();
        apply_surface( 0, 0, smal, screen );
apply_surface( 0, 3, yyearn, screen );
apply_surface( 60-3, 3, mmonthn, screen );
apply_surface( 115-5, 3, ddayn, screen );
apply_surface( 180-35, 3, bbarn, screen );
if( GetSystemPowerStatus(&spsPwr) )
         {
             if(spsPwr.BatteryLifePercent>=100)
             {
               smtm[7][0]='F';
          smtm[7][1]='U';
          smtm[7][2]='L';
          smtm[7][3]='\0';
             }
             else
             {
          smtm[7][0]=48+(spsPwr.BatteryLifePercent)/10;
          smtm[7][1]=48+(spsPwr.BatteryLifePercent)%10;
          smtm[7][2]='%';
          smtm[7][3]='\0';
             }
          batterych = TTF_RenderText_Solid( font[0],smtm[7], textColor1 );
          if(spsPwr.ACLineStatus==0)
          {
              connectedc = TTF_RenderText_Solid( font[0],"D", textColor1 );
          }
          else
          {
        connectedc = TTF_RenderText_Solid( font[0],"C", textColor1 );
          }
        }
        apply_surface( 20, 40, batterych, screen );
        apply_surface( 0, 40, connectedc, screen );
    calender();
      apply_surface( 165, 25, hhour, screen );
    apply_surface( 165+hhour->w, 25, mminate, screen );
    apply_surface( 165+hhour->w+mminate->w, 25, sseconds, screen );
    apply_surface( 165+hhour->w+mminate->w+sseconds->w, 25, ampm, screen );
    apply_surface( 165+hhour->w+mminate->w+sseconds->w, 40, ampm1, screen );
    apply_surface( 0, 25, yyear, screen );
    apply_surface( yyear->w, 25, mmonth, screen );
    apply_surface( yyear->w+mmonth->w, 25, dday, screen );
    apply_surface( yyear->w+mmonth->w+dday->w+2, 25, bbar, screen );


    }
    else if(anotherwin==1)
    {

        largewin();
        menucal();
        xdir=xdir-1;
        if(xdir<-3000)
        xdir=700;
        apply_surface(xdir,30,msg[137],screen);
    if(mmc==1)
    {

        //first row
         apply_surface( xt, yt, viewcal[0], screen );
         apply_surface( xt+85, yt, viewcal[1], screen );
         apply_surface( xt+85*2, yt, viewcal[2], screen );
         apply_surface( xt+85*3, yt, viewcal[3], screen );
         apply_surface( xt+85*4, yt, viewcal[4], screen );
         apply_surface( xt+85*5, yt, viewcal[5], screen );
         apply_surface( xt+85*6, yt, viewcal[6], screen );

         apply_surface( xs, ys, viewcals[0], screen );
         apply_surface( xs+85, ys, viewcals[1], screen );
         apply_surface( xs+85*2, ys, viewcals[2], screen );
         apply_surface( xs+85*3, ys, viewcals[3], screen );
         apply_surface( xs+85*4, ys, viewcals[4], screen );
         apply_surface( xs+85*5, ys, viewcals[5], screen );
         apply_surface( xs+85*6, ys, viewcals[6], screen );
         //2 row
         apply_surface( xt, yt+60, viewcal[7], screen );
         apply_surface( xt+85, yt+60, viewcal[8], screen );
         apply_surface( xt+85*2, yt+60, viewcal[9], screen );
         apply_surface( xt+85*3, yt+60, viewcal[10], screen );
         apply_surface( xt+85*4, yt+60, viewcal[11], screen );
         apply_surface( xt+85*5, yt+60, viewcal[12], screen );
         apply_surface( xt+85*6, yt+60, viewcal[13], screen );

         apply_surface( xs, ys+60, viewcals[7], screen );
         apply_surface( xs+85, ys+60, viewcals[8], screen );
         apply_surface( xs+85*2, ys+60, viewcals[9], screen );
         apply_surface( xs+85*3, ys+60, viewcals[10], screen );
         apply_surface( xs+85*4, ys+60, viewcals[11], screen );
         apply_surface( xs+85*5, ys+60, viewcals[12], screen );
         apply_surface( xs+85*6, ys+60, viewcals[13], screen );
         //3 row
         apply_surface( xt, yt+60*2, viewcal[14], screen );
         apply_surface( xt+85, yt+60*2, viewcal[15], screen );
         apply_surface( xt+85*2, yt+60*2, viewcal[16], screen );
         apply_surface( xt+85*3, yt+60*2, viewcal[17], screen );
         apply_surface( xt+85*4, yt+60*2, viewcal[18], screen );
         apply_surface( xt+85*5, yt+60*2, viewcal[19], screen );
         apply_surface( xt+85*6, yt+60*2, viewcal[20], screen );

         apply_surface( xs, ys+60*2, viewcals[14], screen );
         apply_surface( xs+85, ys+60*2, viewcals[15], screen );
         apply_surface( xs+85*2, ys+60*2, viewcals[16], screen );
         apply_surface( xs+85*3, ys+60*2, viewcals[17], screen );
         apply_surface( xs+85*4, ys+60*2, viewcals[18], screen );
         apply_surface( xs+85*5, ys+60*2, viewcals[19], screen );
         apply_surface( xs+85*6, ys+60*2, viewcals[20], screen );
         //4 row
         apply_surface( xt, yt+60*3, viewcal[21], screen );
         apply_surface( xt+85, yt+60*3, viewcal[22], screen );
         apply_surface( xt+85*2, yt+60*3, viewcal[23], screen );
         apply_surface( xt+85*3, yt+60*3, viewcal[24], screen );
         apply_surface( xt+85*4, yt+60*3, viewcal[25], screen );
         apply_surface( xt+85*5, yt+60*3, viewcal[26], screen );
         apply_surface( xt+85*6, yt+60*3, viewcal[27], screen );

         apply_surface( xs, ys+60*3, viewcals[21], screen );
         apply_surface( xs+85, ys+60*3, viewcals[22], screen );
         apply_surface( xs+85*2, ys+60*3, viewcals[23], screen );
         apply_surface( xs+85*3, ys+60*3, viewcals[24], screen );
         apply_surface( xs+85*4, ys+60*3, viewcals[25], screen );
         apply_surface( xs+85*5, ys+60*3, viewcals[26], screen );
         apply_surface( xs+85*6, ys+60*3, viewcals[27], screen );
         //5 row
         apply_surface( xt, yt+60*4, viewcal[28], screen );
         apply_surface( xt+85, yt+60*4, viewcal[29], screen );
         apply_surface( xt+85*2, yt+60*4, viewcal[30], screen );
         apply_surface( xt+85*3, yt+60*4, viewcal[31], screen );
         apply_surface( xt+85*4, yt+60*4, viewcal[32], screen );
         apply_surface( xt+85*5, yt+60*4, viewcal[33], screen );
         apply_surface( xt+85*6, yt+60*4, viewcal[34], screen );

         apply_surface( xs, ys+60*4, viewcals[28], screen );
         apply_surface( xs+85, ys+60*4, viewcals[29], screen );
         apply_surface( xs+85*2, ys+60*4, viewcals[30], screen );
         apply_surface( xs+85*3, ys+60*4, viewcals[31], screen );
         apply_surface( xs+85*4, ys+60*4, viewcals[32], screen );
         apply_surface( xs+85*5, ys+60*4, viewcals[33], screen );
         apply_surface( xs+85*6, ys+60*4, viewcals[34], screen );

 if( event.type == SDL_MOUSEBUTTONDOWN )//mouse button is up
    {
         if( event.button.button == SDL_BUTTON_LEFT)
        {
            if(x>100&& y>150&&y<450)
            {
                if(msg[368]!=NULL)
                SDL_FreeSurface(msg[368]);
        apply_surface(100,0,msgsh,screen);
        msg[368]=TTF_RenderText_Solid(font1,B[10].msg,textColor);
        apply_surface(120,75,msg[368],screen);
            }

        }
    }
}
    else if(mmc==7)
    {
    settings();
    }
    else if(mmc==5)
    {
        if(passresult==0)
        {
        cpassw();
        }
        else if(passresult==1)
        {
            hideme();
        }
        else if(passresult==2)
        {
           renamepass();
        }
    }
    else if(mmc==2)
    {
    events();
    }
    else if(mmc==8)
    {
        gk();
    }
    else if(mmc==4)
    {
        calculator();
    }
     else if(mmc==3)
     {
         if(msg[144]!=NULL)
         SDL_FreeSurface(msg[144]);
          if(msg[150]!=NULL)
         SDL_FreeSurface(msg[150]);
                msg[144]=TTF_RenderText_Solid(font[0],"Rem Name",textColor5);
                msg[150]=TTF_RenderText_Solid(font[0],"Rem Description>>",textColor5);

         rem();
     }
     if(mmc!=5)
    {
        clearall();
passresult=0;
cpassv=0;
    }

    }
   else if(anotherwin==3)
   {
        apply_surface( 0, 0, msgsh, screen );
       gettime();
 SDL_FreeSurface( hhour );
     SDL_FreeSurface( mminate );
      SDL_FreeSurface( sseconds );
          SDL_FreeSurface( ampm );
          SDL_FreeSurface( ampm1 );
time();
           apply_surface( 0, SCREEN_HEIGHT-50, hhour, screen );
    apply_surface( hhour->w, SCREEN_HEIGHT-50, mminate, screen );
    apply_surface( hhour->w+mminate->w, SCREEN_HEIGHT-50, sseconds, screen );
    apply_surface( hhour->w+mminate->w+sseconds->w+8, SCREEN_HEIGHT-45, ampm, screen );
    apply_surface( hhour->w+mminate->w+sseconds->w+8, SCREEN_HEIGHT-30, ampm1, screen );


xdir=xdir-1;
        if(xdir<-3000)
        xdir=700;
        apply_surface(xdir,30,msg[137],screen);
gk();
   }
 getbatt();
 setingoperation();
    if( SDL_Flip( screen ) == -1 )
        {
            return 1;
        }

    }
    clean_ups();
    quitt();
}

void mind()
{
if(rndmg==1)
apply_surface(110,58,mindg1,screen);
else if(rndmg==2||rndmg==3)
apply_surface(110,58,mindg2,screen);

if(clkr!=0 && rndmg==1)
{
r[cnt]=clkr;

totrawclk1[rowinr]=48+clkr;
rowinr++;
totrawclk1[rowinr]=',';
rowinr++;
totrawclk1[rowinr]='\0';

SDL_FreeSurface(listclickrow);
listclickrow=TTF_RenderText_Solid(font[0],totrawclk1,textColor);

clkr=0;
cnt++;
crl=cnt;
lno=strlen(view);
for(nullop=0;nullop<lno;nullop++)
{
view[nullop]='\0';
}
lno=0;

}
else if(clkr!=0 && rndmg==2 &&cnt>1 )
{
    cnt--;

    lno++;
sc[lno-1]=clkr;

totrawclk2[rowinr2]=48+clkr;
rowinr2++;
totrawclk2[rowinr2]=',';
rowinr2++;
totrawclk2[rowinr2]='\0';
SDL_FreeSurface(listclickrow);
listclickrow=TTF_RenderText_Solid(font[0],totrawclk2,textColor);
clkr=0;
}
if(cnt-1<10)
{
totchar[0]=48+(cnt-1);
totchar[1]='\0';
}
else
{
totchar[0]=48+(cnt-1)/10;
totchar[1]=48+(cnt-1)%10;
totchar[2]='\0';
}
SDL_FreeSurface(charactertotal);
charactertotal=TTF_RenderText_Solid(font[7],totchar,textColor7);
apply_surface(500,200,charactertotal,screen);
apply_surface(200,360,listclickrow,screen);

if(rndmg==4)
{
    rndmg=3;
int aa,bb;

lno=1;
while(lno<crl)
{
    aa=r[lno];
    r[lno]=0;
    bb=sc[lno-1];
    sc[lno-1]=0;
    if((64+(aa-1)*6+bb)>90)
    view[lno-1]=47+64+(aa-1)*6+bb-90;
    else
    view[lno-1]=64+(aa-1)*6+bb;

lno++;
}
}
if(rndmg==3)
{
    lno=strlen(totrawclk1);
    for(cnt=0;cnt<lno;cnt++)
    {
       totrawclk2[lno]='\0';
       totrawclk1[lno]='\0';
    }
    rowinr2=0;
    rowinr=0;
    cnt=1;
    lno=0;
    SDL_FreeSurface(resultname);
resultname=TTF_RenderText_Solid(font1,view,textColor7);
if(resultname->w>=SCREEN_WIDTH-110)
{
    SDL_FreeSurface(resultname);
resultname=TTF_RenderText_Solid(font[5],view,textColor7);
}
if(resultname->w>=SCREEN_WIDTH-110)
{
    SDL_FreeSurface(resultname);
resultname=TTF_RenderText_Solid(font[0],view,textColor7);
}
apply_surface(110,390,resultname,screen);
}

if(selectvtel==1)
apply_surface(110,55,selecttellv,screen);
else if(selectvtel==2)
apply_surface(110,105,selecttellv,screen);
else if(selectvtel==3)
apply_surface(110,155,selecttellv,screen);
else if(selectvtel==4)
apply_surface(110,205,selecttellv,screen);
else if(selectvtel==5)
apply_surface(110,255,selecttellv,screen);
else if(selectvtel==6)
apply_surface(110,305,selecttellv,screen);

}
void playrubics()
{

        apply_surface(180-15, 325, bk7, screen );
        apply_surface( 180-15+75,325, bk8, screen );
        apply_surface( 180-15+75*2, 325, bk9, screen );
        apply_surface( 180-30, 325+15, bk4, screen );
        apply_surface( 180-30+75, 325+15, bk5, screen );
        apply_surface( 180-30+75*2, 325+15, bk6, screen );
        apply_surface( 180-45, 325+30, bk1, screen );
        apply_surface( 180+75-45, 325+30, bk2, screen );
        apply_surface( 180+75*2-45, 325+30, bk3, screen );

        apply_surface( 180-45, 100+30, l3, screen );
        apply_surface( 180-30, 100+15, l2, screen );
        apply_surface( 180-15, 100, l1, screen );
        apply_surface( 180-45, 175+30, l6, screen );
        apply_surface( 180-30, 175+15, l5, screen );
        apply_surface( 180-15, 175, l4, screen );
        apply_surface(180-45, 250+30, l9, screen );
        apply_surface( 180-30, 250+15, l8, screen );
        apply_surface( 180-15, 250, l7, screen );

        apply_surface( 180, 100, b1, screen );
        apply_surface( 180+75, 100, b2, screen );
        apply_surface( 180+75*2, 100, b3, screen );
        apply_surface( 180, 100+75, b4, screen );
        apply_surface( 180+75, 100+75, b5, screen );
        apply_surface( 180+75*2, 100+75, b6, screen );
        apply_surface( 180, 100+75*2, b7, screen );
        apply_surface( 180+75, 100+75*2, b8, screen );
        apply_surface( 180+75*2, 100+75*2, b9, screen );


        apply_surface(350, 160-15, fr7, screen );
        apply_surface( 350+75, 160-15, fr8, screen );
        apply_surface( 350+75*2, 160-15, fr9, screen );
        apply_surface( 350+15, 160-30, fr4, screen );
        apply_surface( 350+75+15, 160-30, fr5, screen );
        apply_surface( 350+75*2+15, 160-30, fr6, screen );
        apply_surface( 350+30, 160-45, fr1, screen );
        apply_surface( 350+75+30, 160-45, fr2, screen );
        apply_surface( 350+75*2+30, 160-45, fr3, screen );

        apply_surface( 350+75*3, 160-15, r1, screen );
        apply_surface( 350+75*3+15, 160-30, r2, screen );
        apply_surface( 350+75*3+30, 160-45, r3, screen );
        apply_surface( 350+75*3, 160+75-15, r4, screen );
        apply_surface( 350+75*3+15, 160+75-30, r5, screen );
        apply_surface( 350+75*3+30, 160+75-45, r6, screen );
        apply_surface( 350+75*3, 160+75*2-15, r7, screen );
        apply_surface( 350+75*3+15, 160+75*2-30, r8, screen );
        apply_surface( 350+75*3+30, 160+75*2-45, r9, screen );

        apply_surface( 350, 160, f1, screen );
        apply_surface( 350+75, 160, f2, screen );
        apply_surface( 350+75*2,160, f3, screen );
        apply_surface( 350, 160+75, f4, screen );
        apply_surface( 350+75, 160+75, f5, screen );
        apply_surface( 350+75*2, 160+75, f6, screen );
        apply_surface( 350, 160+75*2, f7, screen );
        apply_surface( 350+75, 160+75*2, f8, screen );
        apply_surface( 350+75*2, 160+75*2, f9, screen );
if(hl==1)
{
    if(vl==1 &&(ls<=0||ls>=4))
    {
        apply_surface( 350,160 , vline, screen );
    }
    else if(vl==2 && (ls<=0||ls>=4))
    {
apply_surface( 350+75, 160, vline, screen );
    }
    else if(vl==3 && (ls<=0||ls>=4))
    {
apply_surface( 350+75*2, 160, vline, screen );
    }
     else if((vl<=0||vl>=4 )&&ls==1)
    {
        apply_surface( 350+75*3,160-15 , lsline, screen );
    }
    else if((vl<=0||vl>=4) && ls==2)
    {
apply_surface( 350+75*3+15, 160-30, lsline, screen );
    }
    else if((vl<=0||vl>=4) && ls==3)
    {
apply_surface( 350+75*3+30, 160-45, lsline, screen );
    }
}
else if(hl==2)
{
    if(vl==1 &&(ls==0||ls==4))
    {
        apply_surface( 350,160+75 , vline, screen );
    }
    else if(vl==2 && (ls==0||ls==4))
    {
apply_surface( 350+75, 160+75, vline, screen );
    }
    else if(vl==3 && (ls==0||ls==4))
    {
apply_surface( 350+75*2, 160+75, vline, screen );
    }
     else if((vl==0||vl==4 )&&ls==1)
    {
        apply_surface( 350+75*3,160+75-15, lsline, screen );
    }
    else if((vl==0||vl==4) && ls==2)
    {
apply_surface( 350+75*3+15, 160+75-30, lsline, screen );
    }
    else if((vl==0||vl==4) && ls==3)
    {
apply_surface(350+75*3+30, 160+75-45, lsline, screen );
    }
}
else if(hl==3)
{
    if(vl==1 &&(ls==0||ls==4))
    {
        apply_surface( 350,160+75*2 , vline, screen );
    }
    else if(vl==2 && (ls==0||ls==4))
    {
apply_surface( 350+75, 160+75*2, vline, screen );
    }
    else if(vl==3 && (ls==0||ls==4))
    {
apply_surface( 350+75*2, 160+75*2, vline, screen );
    }
     else if((vl==0||vl==4 )&&ls==1)
    {
        apply_surface( 350+75*3,160+75*2-15, lsline, screen );
    }
    else if((vl==0||vl==4) && ls==2)
    {
apply_surface(350+75*3+15, 160+75*2-30, lsline, screen );
    }
    else if((vl==0||vl==4) && ls==3)
    {
apply_surface( 350+75*3+30, 160+75*2-45, lsline, screen );
    }
}

}


#include "SDL.h"
#include "SDL_image.h"
#include <string>
//#include <ssbbtream>
#include<windows.h>
#include<conio.h>
#include <wchar.h>
#include "SDL_ttf.h"
#include <stdio.h>
#include <math.h>
char dateconn[50];
int ranq=0,gen=0,clkopt=0,opts=0;
 int gkn=0;
int lop1=0,lin=0,qder=0;
char qdemo[500];
int optc=0,sans=0;

///////
int stevent=0;
int step4e=0;

int evntlop=0;
int gotour=0;
int ytour=0,mtour=0,dtour=0;
char datecon[100];
int lencr=0;
int chngdt=0;
int lopcal=0;
struct evnt
{

int yy;
int dd;
int mm;
char tl[100];
char d1[100];
char d2[100];
}eventlist[500],eventlisted[500];

///////
std::string str;
std::string str1;
std::string str3;
std::string str2;

std::string yy;
std::string mm;
std::string dd;
std::string ev1;
std::string ev2;
std::string tl;


int addfolder=0,xdir=700;
int mupd=0,ed=0,passresult=0;
FILE*fp;
int settinglst=0,ckst[500];
int gameplaym=0;
int clkr=0,rndmg=1;
int showhidepage=0;
int selecthide=0;
struct save
{
    int h,m,lonof,bl;
    char msgv[500];

}mms[500];

int starth=0,startm=0,sth=0,stm=0,selectvtel=0;
struct rec
    {
    int hr1,mn1,day;
    }data;

struct fhide
{
    char add[500];
char fname[50];
}hide[100];
int lno=0,cnt=1,r[39],nullop;
int sc[39],rowinr2=0,rowinr=0;
char view[500];
char totchar[10],charrem[10],totrawclk1[500],totrawclk2[500];




int hl=1;
int vl=1,gmove=0;
int lr=0,frs=0,ls=0;
POINT c;
HWND hWnd;
int x=0,y=0,xc=1060,yc=660,inx=0,iny=0,move=0;
int anotherwin=0,mmv=0,mmc=1,loadobj[20];
float dx=0,dy=0;
char smtm[100][200];

 SYSTEMTIME st;
int a,b,cd,d=0,xt=135,yt=160,xs=170,ys=175;
char as[10];
int edt[40],ndt[40];
int dayv=0,yearv=0,monthv=0,ckmy=0;
int xtir=0,ytir=0,inrdry=0,inrdrm=0;
int asbs=1;
int loop=0;
SYSTEM_POWER_STATUS spsPwr;
//default win size
 int SCREEN_WIDTH = 300;
 int SCREEN_HEIGHT = 60;
const int SCREEN_BPP = 32;
 FILE *fp1;
 int unhide=0;   //for unhide
 char unhideadd[500];
int cpassv=0;
char password[100];
char p1[100];
char p2[100];
int sp1=0;
int sp2=0;
int step=0;
int len=0;
SDL_Surface *pass2=NULL;
SDL_Surface *pass1=NULL;
SDL_Surface *fadd=NULL;
SDL_Surface *msgsh=NULL;
SDL_Surface *line = NULL;
SDL_Surface *ckfolder = NULL;
SDL_Surface *lockwin = NULL;
SDL_Surface *lockfol[11];
SDL_Surface *passnw = NULL;
SDL_Surface *pass = NULL;
SDL_Surface *bg = NULL;
SDL_Surface *smal = NULL;
SDL_Surface *big = NULL;
SDL_Surface *msgwin = NULL;
SDL_Surface *screen = NULL;
SDL_Surface *viewm = NULL;
SDL_Surface *clickm = NULL;
SDL_Surface *bsbk = NULL;
SDL_Surface *fr = NULL;
SDL_Surface *bk = NULL;
SDL_Surface *setting[500];

SDL_Surface *line0 = NULL;
SDL_Surface *line1 = NULL;
SDL_Surface *line2 = NULL;
SDL_Surface *line3 = NULL;
SDL_Surface *line4 = NULL;
SDL_Surface *line5 = NULL;
SDL_Surface *line6 = NULL;
SDL_Surface *line7 = NULL;
SDL_Surface *line8 = NULL;
SDL_Surface *line9 = NULL;
SDL_Surface *line10 = NULL;
SDL_Surface *button = NULL;


SDL_Surface *lsline = NULL;
SDL_Surface *frline = NULL;

SDL_Surface *f1 = NULL;
SDL_Surface *f2 = NULL;
SDL_Surface *f3 = NULL;
SDL_Surface *f4 = NULL;
SDL_Surface *f5 = NULL;
SDL_Surface *f6 = NULL;
SDL_Surface *f7 = NULL;
SDL_Surface *f8 = NULL;
SDL_Surface *f9 = NULL;
int cf[10];
//bottom surfaces
SDL_Surface *b1 = NULL;
SDL_Surface *b2 = NULL;
SDL_Surface *b3 = NULL;
SDL_Surface *b4 = NULL;
SDL_Surface *b5 = NULL;
SDL_Surface *b6 = NULL;
SDL_Surface *b7 = NULL;
SDL_Surface *b8 = NULL;
SDL_Surface *b9 = NULL;
int cb[10];
//right surfaces
SDL_Surface *r1 = NULL;
SDL_Surface *r2 = NULL;
SDL_Surface *r3 = NULL;
SDL_Surface *r4 = NULL;
SDL_Surface *r5 = NULL;
SDL_Surface *r6 = NULL;
SDL_Surface *r7 = NULL;
SDL_Surface *r8 = NULL;
SDL_Surface *r9 = NULL;
int cr[10];
//left surfaces
SDL_Surface *l1 = NULL;
SDL_Surface *l2 = NULL;
SDL_Surface *l3 = NULL;
SDL_Surface *l4 = NULL;
SDL_Surface *l5 = NULL;
SDL_Surface *l6 = NULL;
SDL_Surface *l7 = NULL;
SDL_Surface *l8 = NULL;
SDL_Surface *l9 = NULL;
int cl[10];
//forward surface
SDL_Surface *fr1 = NULL;
SDL_Surface *fr2 = NULL;
SDL_Surface *fr3 = NULL;
SDL_Surface *fr4 = NULL;
SDL_Surface *fr5 = NULL;
SDL_Surface *fr6 = NULL;
SDL_Surface *fr7 = NULL;
SDL_Surface *fr8 = NULL;
SDL_Surface *fr9 = NULL;
int cfr[10];
//backward surfaces
SDL_Surface *bk1 = NULL;
SDL_Surface *bk2 = NULL;
SDL_Surface *bk3 = NULL;
SDL_Surface *bk4 = NULL;
SDL_Surface *bk5 = NULL;
SDL_Surface *bk6 = NULL;
SDL_Surface *bk7 = NULL;
SDL_Surface *bk8 = NULL;
SDL_Surface *bk9 = NULL;
int cbk[10];
//SDL_Surface *screen = NULL;

SDL_Surface *vline = NULL;
SDL_Surface *mmonthid = NULL;
SDL_Surface *yyearid = NULL;

SDL_Surface *dday= NULL;
SDL_Surface *mmonth = NULL;
SDL_Surface *yyear = NULL;
SDL_Surface *bbar = NULL;
SDL_Surface *ddayn= NULL;
SDL_Surface *mmonthn = NULL;
SDL_Surface *yyearn = NULL;
SDL_Surface *bbarn = NULL;
SDL_Surface *hhour = NULL;
SDL_Surface *mminate = NULL;
SDL_Surface *sseconds = NULL;
SDL_Surface *ampm = NULL;
SDL_Surface *ampm1 = NULL;
SDL_Surface *batterych = NULL;
SDL_Surface *connectedc = NULL;
SDL_Surface *off = NULL;
SDL_Surface *on= NULL;
SDL_Surface *menulst[100];
SDL_Surface *viewcal[40];
SDL_Surface *viewcals[40];
SDL_Surface *msg[500];
SDL_Surface *mindg1 = NULL;
SDL_Surface *mindg2 = NULL;
SDL_Surface *characterrem = NULL;
SDL_Surface *charactertotal = NULL;
SDL_Surface *listclickrow = NULL;
SDL_Surface *resultname = NULL;
SDL_Surface *selecttellv = NULL;

SDL_Surface *ad;
SDL_Surface *bs;

//The event structure
SDL_Event event;
TTF_Font *font[10];
TTF_Font *font1 = NULL;

//text colours
SDL_Color textColor = { 255, 255, 255 };
SDL_Color textColor1 = { 0, 255, 255 };
SDL_Color textColor2 = { 255, 0, 255 };
SDL_Color textColor3 = { 255, 255, 0 };
SDL_Color textColor4 = { 0, 0, 255 };
SDL_Color textColor5 = { 0, 255, 0 };
SDL_Color textColor6 = { 255, 0, 0 };
SDL_Color textColor7 = { 0, 0, 0 };

void gettime()
{
    GetLocalTime(&st);
}
void getbatt()
{
    GetSystemPowerStatus(&spsPwr);
}
SDL_Surface *load_image( std::string filename )
{
    //The image that's loaded
    SDL_Surface* loadedImage = NULL;

    //The optimized surface that will be used
    SDL_Surface* optimizedImage = NULL;

    //Load the image
    loadedImage = IMG_Load( filename.c_str() );

    //If the image loaded
    if( loadedImage != NULL )
    {
        //Create an optimized surface
        optimizedImage = SDL_DisplayFormat( loadedImage );

        //Free the old surface
        SDL_FreeSurface( loadedImage );

        //If the surface was optimized
        if( optimizedImage != NULL )
        {
            //Color key surface
            SDL_SetColorKey( optimizedImage, SDL_SRCCOLORKEY, SDL_MapRGB( optimizedImage->format, 0xFF, 0xFF, 0xFF ) );
        }
    }

    //Return the optimized surface
    return optimizedImage;
}
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip = NULL )
{
    //Holds offsets
    SDL_Rect offset;

    //Get offsets
    offset.x = x;
    offset.y = y;

    //Blit
    SDL_BlitSurface( source, clip, destination, &offset );
}
bool init()
{
    //Initialize all SDL subsystems
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return false;
    }

    //Set up the screen
    screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE | SDL_NOFRAME );

    //If there was an error in setting up the screen
    if( screen == NULL )
    {
        return false;
    }
    if( TTF_Init() == -1 )
    {
        return false;
    }

    //Set the window caption
    SDL_WM_SetCaption( "mohan", NULL );

    //If everything initialized fine
    return true;
}

bool load_filess()
{
    for (int i=0;i<500;i++)
    {
    msg[i]=NULL;
    ckst[i]=0;
    setting[i]=NULL;
    }
    for (int i=0;i<12;i++)
    {

    lockfol[i]=NULL;
    }
    gettime();
    dayv=st.wDay;
    yearv=st.wYear;
    monthv=st.wMonth;
    str = "";
    SDL_EnableUNICODE( SDL_ENABLE );
    //Load the background image
    lockwin = load_image( "object\\locklst.jpg" );
    ckfolder = load_image( "object\\ckfold.jpg" );
     mindg1 = load_image( "object\\MINDTELLER1.jpg" );
     selecttellv= load_image( "object\\selecttell.jpg" );
    mindg2 = load_image( "object\\MINDTELLER2.jpg" );

line = load_image( "object\\line.jpg" );

    off = load_image( "object\\off.jpg" );
    msgsh= load_image( "object\\msg.png" );
    on = load_image( "object\\on.jpg" );
    smal = load_image( "object\\small.jpg" );
    big = load_image( "object\\big.jpg" );
    viewm = load_image( "object\\select.jpg" );
    clickm = load_image( "object\\selectclick.jpg" );
    bsbk= load_image( "object\\selectv.jpg" );
    fr = load_image( "object\\forward.jpg" );
    bk= load_image( "object\\backward.jpg" );
    button= load_image( "object\\button.png" );
//Open the font
    font[0] = TTF_OpenFont( "object\\fonteng.TTF", 16 );
    font[1] = TTF_OpenFont( "object\\fontnep.TTF", 26 );
    font[2] = TTF_OpenFont( "object\\fontnep.TTF", 16 );
    font[3] = TTF_OpenFont( "object\\fontnep.TTF", 20 );
    font[4] = TTF_OpenFont( "object\\fonteng.TTF", 20 );
    font[5] = TTF_OpenFont( "object\\fonteng.TTF", 26 );
       font[6] = TTF_OpenFont( "object\\fontnep.TTF", 60 );
    font[7] = TTF_OpenFont( "object\\fonteng.TTF", 60 );
    font1 = TTF_OpenFont( "object\\fonteng.TTF", 35 );
    font[8] = TTF_OpenFont( "object\\fontnep.TTF", 40 );
    msg[137]=load_image( "object\\geet.jpg" );
 msg[143]=TTF_RenderText_Solid(font[0],"| YYYY    -     MM   -  DD |",textColor5);
    msg[147]=TTF_RenderText_Solid(font[0],"Year>>",textColor5);
     msg[148]=TTF_RenderText_Solid(font[0],"Month>>",textColor5);
      msg[149]=TTF_RenderText_Solid(font[0],"Day>>",textColor5);

      msg[450]=TTF_RenderText_Solid(font[5],"Next Generate",textColor);
      msg[451]=TTF_RenderText_Solid(font[5],"Show Answer",textColor);
      msg[458]=TTF_RenderText_Solid(font[5],"Veryfy Ans",textColor);
      msg[460]=TTF_RenderText_Solid(font[5],"Format of equation :",textColor);
 msg[157]=TTF_RenderText_Solid(font[0],"TITLE>>",textColor5);
      msg[471]=TTF_RenderText_Solid(font[5],"X = ",textColor);
      msg[472]=TTF_RenderText_Solid(font[5],"Y = ",textColor);
      msg[473]=TTF_RenderText_Solid(font[5],"X1 = ",textColor);
      msg[474]=TTF_RenderText_Solid(font[5],"X2 = ",textColor);
      msg[475]=TTF_RenderText_Solid(font[5],"X3 = ",textColor);

msg[476]=TTF_RenderText_Solid(font[4],"Enter the value of a >>",textColor7);
 msg[477]=TTF_RenderText_Solid(font[4],"Enter the value of b >>",textColor7);
 msg[478]=TTF_RenderText_Solid(font[4],"Enter the value of c >>",textColor7);
 msg[479]=TTF_RenderText_Solid(font[4],"Enter the value of d >>",textColor7);
 msg[480]=TTF_RenderText_Solid(font[4],"Enter the value of e >>",textColor7);
msg[481]=TTF_RenderText_Solid(font[4],"Enter the value of f >>",textColor7);


    //If there was a problem in loading the background
    if( smal == NULL && big == NULL )
    {
        return false;
    }
     if( font == NULL )
    {
        return false;
    }


    //If everything loaded fine
    return true;
}

void clean_up()
{
    SDL_FreeSurface( hhour );
     SDL_FreeSurface( mminate );
      SDL_FreeSurface( sseconds );
       SDL_FreeSurface( bbar );
        SDL_FreeSurface( dday );
         SDL_FreeSurface( mmonth );
          SDL_FreeSurface( yyear );

          SDL_FreeSurface( ampm );
          SDL_FreeSurface( ampm1 );
          SDL_FreeSurface( batterych );
          SDL_FreeSurface( connectedc );

}
void quitt()
{
 //Close the font that was used
    TTF_CloseFont( font[0] );

    //Quit SDL_ttf
    TTF_Quit();

    //Quit SDL
    SDL_Quit();
}

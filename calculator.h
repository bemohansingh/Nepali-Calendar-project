void rep();
int eqs=0;
int eval=0,dot=0;
char vv[15][100];
int cll=0;
int minus=0;
float cva=0,cvb=0,cvc=0,cvd=0,cve=0,cvf=0;
int intv=0,dcnt=0,dv=0;
void gval()
{
     if( event.type == SDL_KEYDOWN )
    {


            if( ( event.key.keysym.sym == SDLK_BACKSPACE )  &&mupd==0 )
            {
               mupd=1;
                if(dcnt<=0)
                {
                intv=intv/10;
                }
                else
                {
                dv=dv/10;
                dcnt--;
                }
                cll--;
                vv[eval][cll]='\0';

            }
            else if( event.key.keysym.unicode ==SDLK_RETURN &&mupd==0 )
            {
                mupd=1;
                vv[eval][cll]='\0';
                cll=0;

            if(eval==0)
            {
                cva=intv+dv/pow(10,dcnt);
                if(minus==1)
                cva=cva-2*cva;
                minus=0;
            intv=0;
            dcnt=0;
            dot=0;
            dv=0;
            eval++;
            }
            else if(eval==1)
            {
            cvb=intv+dv/pow(10,dcnt);
            if(minus==1)
                cvb=cvb-2*cvb;
                minus=0;
            intv=0;
            dot=0;
            dcnt=0;
            dv=0;
            eval++;
            }
            else if(eval==2)
            {
            cvc=intv+dv/pow(10,dcnt);
            if(minus==1)
                cvc=cvc-2*cvc;
                minus=0;
            intv=0;
            dcnt=0;
            dv=0;
            dot=0;
            eval++;
            }
            else if(eval==3)
            {
            cvd=intv+dv/pow(10,dcnt);
            if(minus==1)
                cvd=cvd-2*cvd;
                minus=0;
            intv=0;
            dcnt=0;
            dv=0;
            dot=0;
            eval++;
            }
           else if(eval==4)
            {
            cve=intv+dv/pow(10,dcnt);
            if(minus==1)
                cve=cve-2*cve;
                minus=0;
            intv=0;
            dot=0;
            dcnt=0;
            dv=0;
            eval++;
            }
           else if(eval==5)
            {
            cvf=intv+dv/pow(10,dcnt);
            if(minus==1)
                cvf=cvf-2*cvf;
                minus=0;
            dot=0;
            intv=0;
            dcnt=0;
            dv=0;
            eval++;
            }
           }
               else if(mupd==0&&( event.key.keysym.unicode>= (Uint16)'0' ) &&( event.key.keysym.unicode<= (Uint16)'9' ) )
            {
                vv[eval][cll]=(char)event.key.keysym.unicode;
                cll++;
                mupd=1;
                if(dot==0)
                {
                intv=intv*10+(char)event.key.keysym.unicode-48;
                }
                else
                {
                dv=dv*10+(char)event.key.keysym.unicode-48;
                dcnt++;
                }
            }
              else if(mupd==0&&( event.key.keysym.unicode== (Uint16)'.' )&&dot==0)
            {
                mupd=1;
                 vv[eval][cll]=(char)event.key.keysym.unicode;
                cll++;
                dot=1;
            }
             else if(mupd==0&&( event.key.keysym.unicode== (Uint16)'-' )&&minus==0)
            {
                mupd=1;
                 vv[eval][cll]=(char)event.key.keysym.unicode;
                cll++;
               minus=1;
            }

 if(eval==0)
{
if(msg[465]!=NULL)
SDL_FreeSurface(msg[465]);
msg[465]=TTF_RenderText_Solid(font[5],vv[0],textColor);
}
else if(eval==1)
{
if(msg[466]!=NULL)
SDL_FreeSurface(msg[466]);
msg[466]=TTF_RenderText_Solid(font[5],vv[1],textColor);
}

else if(eval==2)
{
if(msg[467]!=NULL)
SDL_FreeSurface(msg[467]);
msg[467]=TTF_RenderText_Solid(font[5],vv[2],textColor);
}
else if(eval==3)
{
if(msg[468]!=NULL)
SDL_FreeSurface(msg[468]);
msg[468]=TTF_RenderText_Solid(font[5],vv[3],textColor);
}
else if(eval==4)
{
if(msg[469]!=NULL)
SDL_FreeSurface(msg[469]);
msg[469]=TTF_RenderText_Solid(font[5],vv[4],textColor);
}
else if(eval==5)
{
if(msg[470]!=NULL)
SDL_FreeSurface(msg[470]);
msg[470]=TTF_RenderText_Solid(font[5],vv[5],textColor);
}




 }
    if(event.type == SDL_KEYUP)
{
    mupd=0;
}

}
void lin1()
{
    int xxxx=0;
    int pol=0;
    float cxval=0;
    char ansres[500];
    char ansres1[500]="-";
    int alen=0;
    int looop1=0,looop2=0;
    int integ=0,deci=0;
    apply_surface(150,75,msg[461],screen);

if(eval>=0)
{
apply_surface(150,125,msg[476],screen);
apply_surface(155+msg[476]->w,125,msg[465],screen);
}
if(eval>=1)
{
apply_surface(150,175,msg[477],screen);
apply_surface(155+msg[477]->w,175,msg[466],screen);
}
if(eval>=2)
{
apply_surface(150,225,msg[478],screen);
apply_surface(155+msg[478]->w,225,msg[467],screen);
}
if(eval>=3)
{
cxval = (cvc-cvb)/cva;
if(cxval<0)
{
cxval=abs(cxval);
pol=1;
}
integ=cxval;
alen=0;
while(integ!=0)
{
    integ=integ/pow(10,alen+1);
    alen++;
}
integ=cxval;
looop1=0;
while(integ!=0)
{
    xxxx=(integ/pow(10,alen-1-looop1));
ansres[looop1]=48+xxxx;
integ=integ-xxxx*pow(10,alen-1-looop1);
looop1++;
}
ansres[looop1]='.';
integ=cxval;
deci=(cxval-integ)*1000;
ansres[looop1+1]=48+deci/100;
ansres[looop1+2]=48+(deci%100)/10;
ansres[looop1+3]=48+(deci%10);
ansres[looop1+4]='\0';
if(pol==1)
{
strcat(ansres1,ansres);
pol=0;
}
else
{
strcpy(ansres1,ansres);
}
if(msg[350]!=NULL)
SDL_FreeSurface(msg[350]);
msg[350]=TTF_RenderText_Solid(font[5],ansres1,textColor);
apply_surface(150,275,msg[471],screen);
apply_surface(160+msg[471]->w,275,msg[350],screen);
}
}

void lin2()
{

    int xxxx=0, yyyy=0;
    float cxval=0,cyval;
    char ansres[500];
    int pol=0;
    char ansres1[500]="-";
    char ansres2[500]="-";
    int alen=0;
    int looop1=0,looop2=0;
    int integ=0,deci=0;
apply_surface(150,75,msg[462],screen);

if(eval>=0)
{
apply_surface(110,125,msg[476],screen);
apply_surface(115+msg[476]->w,125,msg[465],screen);
}
if(eval>=1)
{
apply_surface(110,175,msg[477],screen);
apply_surface(115+msg[477]->w,175,msg[466],screen);
}
if(eval>=2)
{
apply_surface(110,225,msg[478],screen);
apply_surface(115+msg[478]->w,225,msg[467],screen);
}
if(eval>=3)
{
apply_surface(400,125,msg[479],screen);
apply_surface(405+msg[479]->w,125,msg[468],screen);
}
if(eval>=4)
{
apply_surface(400,175,msg[480],screen);
apply_surface(405+msg[480]->w,175,msg[469],screen);
}
if(eval>=5)
{
apply_surface(400,225,msg[481],screen);
apply_surface(405+msg[481]->w,225,msg[470],screen);
}

if(eval>=6)
{
cxval = ((cvf*cvb)-(cvc*cve))/((cva*cve)-(cvd*cvb));
if(cxval<0)
{
    pol=1;
    cxval=abs(cxval);
}
integ=cxval;
alen=0;
while(integ!=0)
{
    integ=integ/pow(10,alen+1);
    alen++;
}
integ=cxval;
looop1=0;
while(integ!=0)
{
    xxxx=(integ/pow(10,alen-1-looop1));
ansres[looop1]=48+xxxx;
integ=integ-xxxx*pow(10,alen-1-looop1);
looop1++;
}
ansres[looop1]='.';
integ=cxval;
deci=(cxval-integ)*1000;
ansres[looop1+1]=48+deci/100;
ansres[looop1+2]=48+(deci%100)/10;
ansres[looop1+3]=48+(deci%10);
ansres[looop1+4]='\0';
if(msg[350]!=NULL)
SDL_FreeSurface(msg[350]);
if(pol==1)
{
    strcat(ansres1,ansres);
    pol=0;
}
else
{
strcpy(ansres1,ansres);
}
msg[350]=TTF_RenderText_Solid(font[5],ansres1,textColor);
apply_surface(150,275,msg[471],screen);
apply_surface(160+msg[471]->w,275,msg[350],screen);
//y print
for(looop1=strlen(ansres);looop1>=0;looop1--)
{
    ansres[looop1]='\0';
}
cyval = ((cvc*cvd)-(cvf*cva))/((cva*cve)-(cvd*cvb));
if(cyval<0)
{
    pol=1;
    cyval=abs(cyval);
}
looop1=0;
integ=cyval;
alen=0;
while(integ!=0)
{
    integ=integ/pow(10,alen+1);
    alen++;
}
integ=cyval;

while(integ!=0)
{
    yyyy=(integ/pow(10,alen-1-looop1));
ansres[looop1]=48+yyyy;
integ=integ-yyyy*pow(10,alen-1-looop1);
looop1++;
}
ansres[looop1]='.';
integ=cyval;
deci=(cyval-integ)*1000;
ansres[looop1+1]=48+deci/100;
ansres[looop1+2]=48+(deci%100)/10;
ansres[looop1+3]=48+(deci%10);
ansres[looop1+4]='\0';
if(pol==1)
{
    pol=0;
    strcat(ansres2,ansres);
}
else
{
strcpy(ansres2,ansres);
}
if(msg[351]!=NULL)
SDL_FreeSurface(msg[350]);
msg[351]=TTF_RenderText_Solid(font[5],ansres2,textColor);
apply_surface(150,275+30,msg[472],screen);
apply_surface(160+msg[472]->w,275+30,msg[351],screen);
}
}

void quad()
{
    int xxxx=0, yyyy=0;
    float cxval=0,cyval;
    char ansres[500];
    int pol=0;
    char ansres1[500]="-";
    char ansres2[500]="-";
    float dddd;
    int alen=0;
    int looop1=0;
    int integ=0,deci=0;

    apply_surface(150,75,msg[463],screen);

if(eval>=0)
{
apply_surface(150,125,msg[476],screen);
apply_surface(155+msg[476]->w,125,msg[465],screen);
}
if(eval>=1)
{
apply_surface(150,175,msg[477],screen);
apply_surface(155+msg[477]->w,175,msg[466],screen);
}
if(eval>=2)
{
apply_surface(150,225,msg[478],screen);
apply_surface(155+msg[478]->w,225,msg[467],screen);
}
if(eval>=3)
{
dddd = pow(cvb,2)-(4*cva*cvc);
if(dddd>=0)
{
cxval = (-cvb+sqrt(dddd))/(2*cva);
if(cxval>=0)
{
    pol=0;

}
else
{
 pol=1;
    cxval=abs(cxval);
}
integ=cxval;
alen=0;
while(integ!=0)
{
    integ=integ/pow(10,alen+1);
    alen++;
}
integ=cxval;
looop1=0;
if(integ!=0)
{
while(integ!=0)
{
    xxxx=(integ/pow(10,alen-1-looop1));
    ansres[looop1]=48+xxxx;
    integ=integ-xxxx*pow(10,alen-1-looop1);
    looop1++;
}
}
else
{
    looop1=0;
 ansres[looop1]=48;
 looop1++;
}
ansres[looop1]='.';
integ=cxval;
deci=(cxval-integ)*1000;
ansres[looop1+1]=48+deci/100;
ansres[looop1+2]=48+(deci%100)/10;
ansres[looop1+3]=48+(deci%10);
ansres[looop1+4]='\0';
if(pol==1)
{
    strcat(ansres1,ansres);
    pol=0;
}
else
{
strcpy(ansres1,ansres);
}




for(looop1=strlen(ansres);looop1>=0;looop1--)
{
    ansres[looop1]='\0';
}
cyval = (-cvb-(sqrt(dddd)))/(2*cva);
looop1=0;
if(cyval<0)
{
    pol=1;
    cyval=abs(cyval);
}
else
pol=0;
looop1=0;
integ=cyval;
alen=0;
while(integ!=0)
{
    integ=integ/pow(10,alen+1);
    alen++;
}
integ=cyval;

while(integ!=0)
{
    yyyy=(integ/pow(10,alen-1-looop1));
    ansres[looop1]=48+yyyy;
    integ=integ-yyyy*pow(10,alen-1-looop1);
    looop1++;
}
ansres[looop1]='.';
integ=cyval;
deci=(cyval-integ)*1000;
ansres[looop1+1]=48+deci/100;
ansres[looop1+2]=48+(deci%100)/10;
ansres[looop1+3]=48+(deci%10);
ansres[looop1+4]='\0';
if(pol==1)
{
    pol=0;
    strcat(ansres2,ansres);
}
else
{
strcpy(ansres2,ansres);
}
for(looop1=strlen(ansres);looop1>=0;looop1--)
{
    ansres[looop1]='\0';
}

looop1=0;
}
else if(dddd<0)
{
cxval=((-cvb)/(2*cva));
if(cxval<0)
{
cxval=abs(cxval);
pol=1;
}
integ=cxval;
alen=0;
while(integ!=0)
{
    integ=integ/pow(10,alen+1);
    alen++;
}
integ=cxval;
looop1=0;
if(integ!=0)
{
while(integ!=0)
{
    xxxx=(integ/pow(10,alen-1-looop1));
ansres[looop1]=48+xxxx;
integ=integ-xxxx*pow(10,alen-1-looop1);
looop1++;
}
}
else
{
    ansres[0]=48;
    looop1=1;
}
ansres[looop1]='.';
integ=cxval;
deci=(cxval-integ)*1000;
ansres[looop1+1]=48+deci/100;
ansres[looop1+2]=48+(deci%100)/10;
ansres[looop1+3]=48+(deci%10);
ansres[looop1+4]='\0';
if(pol==1)
{
strcat(ansres1,ansres);
strcat(ansres2,ansres);
pol=0;
}
else
{
strcpy(ansres1,ansres);
strcpy(ansres2,ansres);
}
strcat(ansres1," - ");
strcat(ansres2," + ");
for(looop1=strlen(ansres);looop1>=0;looop1--)
{
    ansres[looop1]='\0';
}
looop1=0;
integ=abs(dddd);
ansres[0]=48+integ/10;
ansres[1]=48+(integ%10);
ansres[2]='\0';
strcat(ansres1,ansres);
strcat(ansres2,ansres);
strcat(ansres1," i ");
strcat(ansres2," i ");
}

if(msg[351]!=NULL)
{
SDL_FreeSurface(msg[351]);
msg[351]==NULL;
}
msg[351]=TTF_RenderText_Solid(font[5],ansres1,textColor);
apply_surface(150,275,msg[473],screen);
apply_surface(160+msg[473]->w,275,msg[351],screen);


if(msg[352]!=NULL)
SDL_FreeSurface(msg[352]);
msg[352]=TTF_RenderText_Solid(font[5],ansres2,textColor);
apply_surface(150,275+30,msg[474],screen);
apply_surface(160+msg[474]->w,275+30,msg[352],screen);

}


}

void cubic()
{
float expr;
int initval=0;
float disc=0;
 int xxxx=0, yyyy=0;
    float cxval=0,cyval,czval;
    char ansres[500];
    int pol=0;
    char ansres1[500]="-";
    char ansres2[500]="-";
    char ansres3[500]="-";
    float dddd;
    int alen=0;
    int looop1=0;
    int integ=0,deci=0;

    apply_surface(150,75,msg[464],screen);

if(eval>=0)
{
apply_surface(110,125,msg[476],screen);
apply_surface(115+msg[476]->w,125,msg[465],screen);
}
if(eval>=1)
{
apply_surface(110,175,msg[477],screen);
apply_surface(115+msg[477]->w,175,msg[466],screen);
}
if(eval>=2)
{
apply_surface(110,225,msg[478],screen);
apply_surface(115+msg[478]->w,225,msg[467],screen);
}
if(eval>=3)
{
apply_surface(400,125,msg[479],screen);
apply_surface(405+msg[479]->w,125,msg[468],screen);
}
if(eval>=4)
{

initval = 0;
while(initval<abs(cvd))
{
expr =cva*pow(initval,3)+cvb*pow(initval,2)+cvc*initval+cvd;
if(expr==0)
{
cxval=initval;
break;
}
expr = cva*pow(-initval,3)+cvb*pow(-initval,2)+cvc*(-initval)+cvd;
if(expr==0)
{
cxval=-initval;
break;
}
initval++;
}//end lop

if(cxval<0)
{
cxval=abs(cxval);
pol=1;
}
integ=cxval;
alen=0;
while(integ!=0)
{
    integ=integ/pow(10,alen+1);
    alen++;
}
integ=cxval;
looop1=0;
while(integ!=0)
{
    xxxx=(integ/pow(10,alen-1-looop1));
ansres[looop1]=48+xxxx;
integ=integ-xxxx*pow(10,alen-1-looop1);
looop1++;
}
ansres[looop1]='.';
integ=cxval;
deci=(cxval-integ)*1000;
ansres[looop1+1]=48+deci/100;
ansres[looop1+2]=48+(deci%100)/10;
ansres[looop1+3]=48+(deci%10);
ansres[looop1+4]='\0';
if(pol==1)
{
strcat(ansres1,ansres);
pol=0;
}
else
{
strcpy(ansres1,ansres);
}
for(looop1=strlen(ansres);looop1>=0;looop1--)
{
    ansres[looop1]='\0';
}
looop1=0;
if(msg[350]!=NULL)
SDL_FreeSurface(msg[350]);
msg[350]=TTF_RenderText_Solid(font[5],ansres1,textColor);
apply_surface(150,275,msg[473],screen);
apply_surface(160+msg[473]->w,275,msg[350],screen);
//////////////

cvb = cvb + (cva*(cxval));
cvc = cvc + (cvb*(cxval));
dddd = (cvb*cvb)-(4*cva*cvc);

if(dddd>=0)
{
cxval = (-b+sqrt(dddd))/(2*a);
cyval = (-b-sqrt(dddd))/(2*a);
if(cxval>=0)
{
    pol=0;

}
else
{
 pol=1;
    cxval=abs(cxval);
}
integ=cxval;
alen=0;
while(integ!=0)
{
    integ=integ/pow(10,alen+1);
    alen++;
}
integ=cxval;
looop1=0;
if(integ!=0)
{
while(integ!=0)
{
    xxxx=(integ/pow(10,alen-1-looop1));
    ansres[looop1]=48+xxxx;
    integ=integ-xxxx*pow(10,alen-1-looop1);
    looop1++;
}
}
else
{
    looop1=0;
 ansres[looop1]=48;
 looop1++;
}
ansres[looop1]='.';
integ=cxval;
deci=(cxval-integ)*1000;
ansres[looop1+1]=48+deci/100;
ansres[looop1+2]=48+(deci%100)/10;
ansres[looop1+3]=48+(deci%10);
ansres[looop1+4]='\0';
if(pol==1)
{
    strcat(ansres1,ansres);
    pol=0;
}
else
{
strcpy(ansres1,ansres);
}




for(looop1=strlen(ansres);looop1>=0;looop1--)
{
    ansres[looop1]='\0';
}

looop1=0;
if(cyval<0)
{
    pol=1;
    cyval=abs(cyval);
}
else
pol=0;
looop1=0;
integ=cyval;
alen=0;
while(integ!=0)
{
    integ=integ/pow(10,alen+1);
    alen++;
}
integ=cyval;

while(integ!=0)
{
    yyyy=(integ/pow(10,alen-1-looop1));
    ansres[looop1]=48+yyyy;
    integ=integ-yyyy*pow(10,alen-1-looop1);
    looop1++;
}
ansres[looop1]='.';
integ=cyval;
deci=(cyval-integ)*1000;
ansres[looop1+1]=48+deci/100;
ansres[looop1+2]=48+(deci%100)/10;
ansres[looop1+3]=48+(deci%10);
ansres[looop1+4]='\0';
if(pol==1)
{
    pol=0;
    strcat(ansres2,ansres);
}
else
{
strcpy(ansres2,ansres);
}
for(looop1=strlen(ansres);looop1>=0;looop1--)
{
    ansres[looop1]='\0';
}

looop1=0;
}
else
{
dddd = ((4*cva*cvc)-pow(cvb,2))/(2*cva);


if(cxval<0)
{
cxval=abs(cxval);
pol=1;
}
integ=cxval;
alen=0;
while(integ!=0)
{
    integ=integ/pow(10,alen+1);
    alen++;
}
integ=cxval;
looop1=0;
if(integ!=0)
{
while(integ!=0)
{
    xxxx=(integ/pow(10,alen-1-looop1));
ansres[looop1]=48+xxxx;
integ=integ-xxxx*pow(10,alen-1-looop1);
looop1++;
}
}
else
{
    ansres[0]=48;
    looop1=1;
}
ansres[looop1]='.';
integ=cxval;
deci=(cxval-integ)*1000;
ansres[looop1+1]=48+deci/100;
ansres[looop1+2]=48+(deci%100)/10;
ansres[looop1+3]=48+(deci%10);
ansres[looop1+4]='\0';
if(pol==1)
{
strcat(ansres1,ansres);
strcat(ansres2,ansres);
pol=0;
}
else
{
strcpy(ansres1,ansres);
strcpy(ansres2,ansres);
}
strcat(ansres1," - ");
strcat(ansres2," + ");
for(looop1=strlen(ansres);looop1>=0;looop1--)
{
    ansres[looop1]='\0';
}
looop1=0;
integ=abs(dddd);
ansres[0]=48+integ/10;
ansres[1]=48+(integ%10);
ansres[2]='\0';
strcat(ansres1,ansres);
strcat(ansres2,ansres);
strcat(ansres1," i ");
strcat(ansres2," i ");
}

if(msg[351]!=NULL)
{
SDL_FreeSurface(msg[351]);
msg[351]==NULL;
}
msg[351]=TTF_RenderText_Solid(font[5],ansres1,textColor);
apply_surface(150,275+30,msg[474],screen);
apply_surface(160+msg[474]->w,275+30,msg[351],screen);


if(msg[352]!=NULL)
SDL_FreeSurface(msg[352]);
msg[352]=TTF_RenderText_Solid(font[5],ansres2,textColor);
apply_surface(150,275+60,msg[475],screen);
apply_surface(160+msg[475]->w,275+60,msg[352],screen);

}


}






void calculator()
{
if(eqs==0)
{
apply_surface(200,75,msg[460],screen);
if(x>150 && x< 400 && y>100 && y<125)
{
 msg[461]=TTF_RenderText_Solid(font[5],"ax+b=c",textColor);
}
else
{
 msg[461]=TTF_RenderText_Solid(font[5],"ax+b=c\n",textColor7);
}
if(x>150 && x< 500 && y>150 && y<175)
{
 msg[462]=TTF_RenderText_Solid(font[5],"ax+by+c=0    and   dx+ey+f=0",textColor);
}
else
{
 msg[462]=TTF_RenderText_Solid(font[5],"ax+by+c=0    and   dx+ey+f=0",textColor7);
}
if(x>150 && x< 400 && y>200 && y<225)
{
 msg[463]=TTF_RenderText_Solid(font[5],"ax^2+bx+c=0",textColor);
}
else
{
 msg[463]=TTF_RenderText_Solid(font[5],"ax^2+bx+c=0",textColor7);
}
if(x>150 && x< 400 && y>250 && y<275)
{
 msg[464]=TTF_RenderText_Solid(font[5],"ax^3+bx^2+cx+d=0",textColor);
}
else
{
 msg[464]=TTF_RenderText_Solid(font[5],"ax^3+bx^2+cx+d=0",textColor7);
}
apply_surface(150,100,msg[461],screen);
apply_surface(150,150,msg[462],screen);
apply_surface(150,200,msg[463],screen);
apply_surface(150,250,msg[464],screen);
}
else
{
gval();
if(eqs==1)
{
    lin1();
}
else if(eqs==2)
lin2();
else if(eqs==3)
quad();
else if(eqs==4)
cubic();
}
}
void rep()
{
char c;

printf("\n\nDo you want to solve for another equation ? y or n\n");
c=getche();
if(c=='y')
calculator();

}


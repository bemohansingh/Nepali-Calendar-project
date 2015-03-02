int lp1=0,ckc=0;
void read_file()
{

fp=fopen("object\\doc.mp3","r+");
for(int i=0;i<5;i++)
fread(&mms[i],sizeof(mms[i]),1,fp);
fclose(fp);
}
void write_file()
{
fp=fopen("object\\doc.mp3","w+");
for(int i=0;i<6;i++)
fwrite(&mms[i],sizeof(mms[i]),1,fp);
fclose(fp);
}
int yvs=0;
int mvs=0;
int dvs=0;
void setcald()
{
yvs=yearv;
mvs=monthv;
dvs=dayv;
}
void increase_month(int *monthv,  int *yearv){ //increase the month by one
    ++*monthv;
    if(*monthv > 12)
    {
        ++*yearv;
        *monthv = *monthv - 12;
    }
    setcald();
}

void decrease_month(int *monthv,  int *yearv){ //decrease the month by one
    --*monthv;
    if(*monthv < 1)
    {
        --*yearv;
        *monthv = *monthv + 12;
    }
    setcald();
}
void increase_year(int *yearv){ //increase the month by one
    if(*yearv>=1)
        *yearv=*yearv-1;
setcald();
}

void decrease_year(int *yearv){ //decrease the month by one
        *yearv=*yearv+1;
        setcald();
    }


void clk()
{
    if( event.type == SDL_MOUSEMOTION )
    {
        //inside the window mouse co-ordinate is set in x and y axis
        x = event.motion.x;
        y = event.motion.y;
        //get the  mouse pointer co-ordinates in the screen
        GetCursorPos(&c);
        dx=c.x;//x-axis
        dy=c.y;//y-axis
if(gameplaym==2)
{
                if(x>110&&x<160 && y>55&&y<105 &&mupd==0  )
                {
                    selectvtel=1;

                }
                else if(x>110&&x<160 && y>105&&y<155 &&mupd==0 )
                {
                    selectvtel=2;
                }
                else if(x>110&&x<160 && y>155&&y<205&&mupd==0   )
                {
                   selectvtel=3;
                }
                else if(x>110&&x<160 && y>205&&y<255&&mupd==0   )
                {
                    selectvtel=4;
                }
                else if(x>110&&x<160 && y>255&&y<305 &&mupd==0  )
                {
                    selectvtel=5;
                }
                else if(x>110&&x<160 && y>305&&y<355&&mupd==0 )
                {
                 selectvtel=6;
                }
                else
                selectvtel=0;
}
    //when big window is open
        if( anotherwin==1)
        {
            //choose the menu in large window

            if(x>0 && x<100 && y>50 &&y<98)
            {
                mmv=1;
            }
            else if(x>0 && x<100 && y>100 &&y<148)
            {
                mmv=2;
            }
            else if(x>0 && x<100 && y>150 &&y<198)
            {
                mmv=3;
            }
            else if(x>0 && x<100 && y>200 &&y<248)
            {
                mmv=4;
            }
            else if(x>0 && x<100 && y>250 &&y<298)
            {
                mmv=5;
            }
            else if(x>0 && x<100 && y>300 &&y<348)
            {
                mmv=6;
            }
            else if(x>0 && x<100 && y>350 &&y<398)
            {
                mmv=7;
            }
            else if(x>0 && x<100 && y>400 &&y<448)
            {
                mmv=8;
            }
            else
            {
                mmv=0;
            }
        }


    }
 if( event.type == SDL_MOUSEBUTTONDOWN )//when mouse button is down
    {
        inx=dx;
        iny=dy;
        move=1;

        //when left mouse button is down
        if( event.button.button == SDL_BUTTON_LEFT)
        {

            if(mmc==3)
            {
                 if(x>150 &&x < 400 && y>150 && y< 180&&stevent==0)
                stevent=1;
                else if(x>150 &&x < 405 && y>210 && y< 240&&stevent==0)
                stevent=2;
                else if(x>150 &&x < 410 && y>270 && y< 300&&stevent==0)
                stevent=3;
                else  if(x>150 &&x < 430 && y>330 && y< 360&&stevent==0)
                stevent=4;
                if((x>490 &&x < 700 && y>410 && y< 440)&&stevent!=0)
                stevent=0;


    if(x>225 && x<390 &&y>410 && y<445&&mupd==0)
    {
        mupd=1;
        if(stevent!=3)
        {
fp=fopen("object\\rem.mp3","a+");
fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp);
fclose(fp);
reseteventr();
        }

    }


if(x>118&&x<150 && y>90 &&y<110 && mupd==0)
{
      edtslt=1;
    mupd=1;

    if(stevent==4)
    {

fp=fopen("object\\rem.mp3","r+");
    fp1=fopen("object\\remdemo.mp3","a+");
    evntlop=0;
while(fread(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp)!=NULL)
{
    if((ddd)!=evntlop)
    {
    fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp1);
    evntlop++;
}}
fclose(fp);
fclose(fp1);
system("del object\\rem.mp3");
system("ren object\\remdemo.mp3 rem.mp3");
reseteventr();
    }
}
else if(x>190&&x<220 && y>90 &&y<110 && mupd==0)
{
    edtslt=2;
    step4e=1;
     mupd=1;

    if(stevent==4)
    {

fp=fopen("object\\rem.mp3","r+");
    fp1=fopen("object\\remdemo.mp3","a+");
    evntlop=0;
while(fread(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp)!=NULL)
{
    if((ddd)!=evntlop)
    {
    fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp1);
    evntlop++;
}}
fclose(fp);
fclose(fp1);
system("del object\\rem.mp3");
system("ren object\\remdemo.mp3 rem.mp3");
reseteventr();
    }
}
else if(x>240&&x<270 && y>90 &&y<110 && mupd==0)
{
    edtslt=3;
    step4e=2;
     mupd=1;

    if(stevent==4)
    {

fp=fopen("object\\rem.mp3","r+");
    fp1=fopen("object\\remdemo.mp3","a+");
    evntlop=0;
while(fread(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp)!=NULL)
{
    if((ddd)!=evntlop)
    {
    fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp1);
    evntlop++;
}}
fclose(fp);
fclose(fp1);
system("del object\\rem.mp3");
system("ren object\\remdemo.mp3 rem.mp3");
reseteventr();
    }
}
else if(x>300 && y>90 &&y<110 && mupd==0)
{
    edtslt=4;
    step4e=3;
     mupd=1;

    if(stevent==4)
    {

fp=fopen("object\\rem.mp3","r+");
    fp1=fopen("object\\remdemo.mp3","a+");
    evntlop=0;
while(fread(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp)!=NULL)
{
    if((ddd)!=evntlop)
    {
    fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp1);
    evntlop++;
}}
fclose(fp);
fclose(fp1);
system("del object\\rem.mp3");
system("ren object\\remdemo.mp3 rem.mp3");
reseteventr();
    }
}
else
{
  step4e=0;
}
if(stevent!=1)
{
     if(x>110 &&x < 220 && y>410 && y< 440)
     np--;
     else
     if(x>230 &&x < 335 && y>410 && y< 440)
     np++;

}

            }
            if(mmc==4)
            {
                 if(eqs==0)
            {
                if(x>150 && x< 400 && y>100 && y<125)
                    {
                        eqs=1;
                    }
                else if(x>150 && x< 500 && y>150 && y<175)
            {
                eqs=2;

            }
            else if(x>150 && x< 400 && y>200 && y<225)
            {
            eqs=3;
            }
            else if(x>150 && x< 400 && y>250 && y<275)
            {
            eqs=4;
            }
            }


            }
           else
           {
eqs=0;
eval=0;dot=0;
cll=0; minus=0;
 cva=0;cvb=0;cvc=0;cvd=0;cve=0;cvf=0;
  intv=0;dcnt=0;dv=0;
           }

            if(mmc==8 || anotherwin==3)
            {
                if(opts==1)
                {
                    if(optc==0)
                    {
                    if(x>455&&x<455+msg[455]->w&&y>330&&y<345)
                    {
                         if(msg[455]!=NULL)
                    {
                    SDL_FreeSurface(msg[455]);
                   msg[455]=NULL;
                    }

                    msg[455]=TTF_RenderText_Solid(font[5],"TRUE",textColor7);
                    }
                    else if(x>110&&x<110+msg[454]->w&&y>330&&y<345)
                    {
                         if(msg[454]!=NULL)
                    {
                    SDL_FreeSurface(msg[454]);
                   msg[454]=NULL;
                    }
                      msg[454]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }
                    else  if(x>455&&x<455+msg[453]->w&&y>300&&y<315)
                    {
                         if(msg[453]!=NULL)
                    {
                    SDL_FreeSurface(msg[453]);
                   msg[453]=NULL;
                    }
                    msg[453]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }
                    else if(x>110&&x<110+msg[452]->w&&y>300&&y<315)
                    {
                         if(msg[452]!=NULL)
                    {
                    SDL_FreeSurface(msg[452]);
                   msg[452]=NULL;
                    }
                      msg[452]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }

                    }
                    else if(optc==1)
                    {
                    if(x>110&&x<110+msg[455]->w&&y>330&&y<345)
                    {
                         if(msg[455]!=NULL)
                    {
                    SDL_FreeSurface(msg[455]);
                   msg[455]=NULL;
                    }

                    msg[455]=TTF_RenderText_Solid(font[5],"TRUE",textColor7);
                    }
                    else if(x>455&&x<455+msg[454]->w&&y>330&&y<345)
                    {
                         if(msg[454]!=NULL)
                    {
                    SDL_FreeSurface(msg[454]);
                   msg[454]=NULL;
                    }
                      msg[454]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }
                    else  if(x>455&&x<455+msg[453]->w&&y>300&&y<315)
                    {
                         if(msg[453]!=NULL)
                    {
                    SDL_FreeSurface(msg[453]);
                   msg[453]=NULL;
                    }
                    msg[453]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }
                    else if(x>110&&x<110+msg[452]->w&&y>300&&y<315)
                    {
                         if(msg[452]!=NULL)
                    {
                    SDL_FreeSurface(msg[452]);
                   msg[452]=NULL;
                    }
                      msg[452]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }

                    }
                    else if(optc==2)
                    {
                    if(x>455&&x<455+msg[455]->w&&y>300&&y<315)
                    {
                         if(msg[455]!=NULL)
                    {
                    SDL_FreeSurface(msg[455]);
                   msg[455]=NULL;
                    }

                    msg[455]=TTF_RenderText_Solid(font[5],"TRUE",textColor7);
                    }
                    else if(x>455&&x<455+msg[454]->w&&y>330&&y<345)
                    {
                         if(msg[454]!=NULL)
                    {
                    SDL_FreeSurface(msg[454]);
                   msg[454]=NULL;
                    }
                      msg[454]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }
                    else  if(x>110&&x<110+msg[453]->w&&y>330&&y<345)
                    {
                         if(msg[453]!=NULL)
                    {
                    SDL_FreeSurface(msg[453]);
                   msg[453]=NULL;
                    }
                    msg[453]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }
                    else if(x>110&&x<110+msg[452]->w&&y>300&&y<315)
                    {
                         if(msg[452]!=NULL)
                    {
                    SDL_FreeSurface(msg[452]);
                   msg[452]=NULL;
                    }
                      msg[452]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }
                    }
                    else if(optc==3)
                    {
                        if(x>110&&x<110+msg[455]->w&&y>300&&y<315)
                    {
                         if(msg[455]!=NULL)
                    {
                    SDL_FreeSurface(msg[455]);
                   msg[455]=NULL;
                    }

                    msg[455]=TTF_RenderText_Solid(font[5],"TRUE",textColor7);
                    }
                    else if(x>455&&x<455+msg[454]->w&&y>330&&y<345)
                    {
                         if(msg[454]!=NULL)
                    {
                    SDL_FreeSurface(msg[454]);
                   msg[454]=NULL;
                    }
                      msg[454]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }
                    else  if(x>455&&x<455+msg[453]->w&&y>300&&y<315)
                    {
                         if(msg[453]!=NULL)
                    {
                    SDL_FreeSurface(msg[453]);
                   msg[453]=NULL;
                    }
                    msg[453]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }
                    else if(x>110&&x<110+msg[452]->w&&y>330&&y<345)
                    {
                         if(msg[452]!=NULL)
                    {
                    SDL_FreeSurface(msg[452]);
                   msg[452]=NULL;
                    }
                      msg[452]=TTF_RenderText_Solid(font[5],"WRONG",textColor7);
                    }
                    }
                }
                else if(opts==0)
                {
                     if(x>550 && y>340&&y<390 && mupd==0)//vr=eryfy button is click
                {
                mupd=1;
                    lp1=0;
                    if(strlen(ans[ranq])==strlen(myans))
                    {
                    while(lp1<strlen(ans[ranq]))
                    {
                    if(tolower(ans[ranq][lp1])!=tolower(myans[lp1]))
                    {
                        ckc=1;
                        break;
                    }
                        lp1++;
                    }
                    }
                    else
                    ckc=1;
                    if(ckc==0)
                    {
                     SDL_FreeSurface(msg[457]);
                    msg[457]=TTF_RenderText_Solid(font1,"Write answer",textColor5);
                    }
                    else
                    {
                      SDL_FreeSurface(msg[457]);
                    msg[457]=TTF_RenderText_Solid(font1,"Wrong answer",textColor5);
                    }
                }
                ckc=0;
                }
                if(x>550 && y>400&&y<450 && mupd==0)//generate button click
                {
                    for (lp1=strlen(myans);lp1>=0;lp1--)
                    {
                        myans[lp1]='\0';
                    }
                    lp1=0;
                     clkopt=0;
                    sans=0;
                     gen=0;
                    mupd=1;
                    lin=0;
                    opts=0;
                    slen=0;
                    ranq=rand()%(gkn+103);
                    optc=rand()%4;
                    if(msg[452]!=NULL)
                    {
                    SDL_FreeSurface(msg[452]);
                   msg[452]=NULL;
                    }
                    if(msg[455]!=NULL)
                    {
                    SDL_FreeSurface(msg[455]);
                   msg[455]=NULL;
                    }
                    if(msg[454]!=NULL)
                    {
                    SDL_FreeSurface(msg[454]);
                   msg[454]=NULL;
                    }
                    if(msg[453]!=NULL)
                    {
                    SDL_FreeSurface(msg[453]);
                   msg[453]=NULL;
                    }
                    if(line1!=NULL)
                    {
                    SDL_FreeSurface(line1);
                    line1=NULL;
                    }
                     if(line2!=NULL)
                    {
                    SDL_FreeSurface(line2);
                    line2=NULL;
                    }
                     if(line3!=NULL)
                    {
                    SDL_FreeSurface(line3);
                    line3=NULL;
                    }
                     if(line4!=NULL)
                    {
                    SDL_FreeSurface(line4);
                    line4=NULL;
                    }
                     if(line5!=NULL)
                    {
                    SDL_FreeSurface(line5);
                    line5=NULL;
                    }
                     if(line6!=NULL)
                    {
                    SDL_FreeSurface(line6);
                    line6=NULL;
                    }
                     if(line7!=NULL)
                    {
                    SDL_FreeSurface(line7);
                    line7=NULL;
                    }
                     if(line8!=NULL)
                    {
                    SDL_FreeSurface(line8);
                    line8=NULL;
                    }
                     if(line9!=NULL)
                    {
                    SDL_FreeSurface(line9);
                    line9=NULL;
                    }
                     if(line10!=NULL)
                    {
                    SDL_FreeSurface(line10);
                    line10=NULL;
                    }



                }
            if(x>150&& x<300 && y>400&&y<450 && mupd==0)//ans button click
                {
                     mupd=1;
                sans=1;
                for (lp1=strlen(myans);lp1>=0;lp1--)
                    {
                        myans[lp1]='\0';
                    }
                    lp1=0;
                    slen=0;
                }
                 if(x>350&& x<500 && y>400&&y<450 && mupd==0)//option button click
                {
                     for (lp1=strlen(myans);lp1>=0;lp1--)
                    {
                        myans[lp1]='\0';
                    }
                    lp1=0;
                    slen=0;
                    mupd=1;
                if(opts==0)
                {
                    opts=1;
                }
                else
                {
                    opts=0;
                }
                }
            }
            if(mmc==2)
            {
                if(x>150 &&x < 400 && y>150 && y< 180&&stevent==0)
                stevent=1;
                else if(x>150 &&x < 405 && y>210 && y< 240&&stevent==0)
                stevent=2;
                else if(x>150 &&x < 410 && y>270 && y< 300&&stevent==0)
                stevent=3;
                else  if(x>150 &&x < 430 && y>330 && y< 360&&stevent==0)
                stevent=4;
                if((x>490 &&x < 700 && y>410 && y< 440)&&stevent!=0)
                stevent=0;


    if(x>225 && x<390 &&y>410 && y<445&&mupd==0)
    {
        mupd=1;
        if(stevent!=3)
        {
fp=fopen("object\\event.mp3","a+");
fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp);
fclose(fp);
resetevent();
        }


    }


if(x>118&&x<150 && y>90 &&y<110 && mupd==0)
{
      edtslt=1;
    mupd=1;

    if(stevent==4)
    {

fp=fopen("object\\event.mp3","r+");
    fp1=fopen("object\\eventdemo.mp3","a+");
    evntlop=0;
while(fread(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp)!=NULL)
{
    if((ddd)!=evntlop)
    {
    fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp1);
    evntlop++;
}}
fclose(fp);
fclose(fp1);
system("del object\\event.mp3");
system("ren object\\eventdemo.mp3 event.mp3");
resetevent();
    }
}
else if(x>190&&x<220 && y>90 &&y<110 && mupd==0)
{
    edtslt=2;
    step4e=1;
     mupd=1;

    if(stevent==4)
    {

fp=fopen("object\\event.mp3","r+");
    fp1=fopen("object\\eventdemo.mp3","a+");
    evntlop=0;
while(fread(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp)!=NULL)
{
    if((ddd)!=evntlop)
    {
    fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp1);
    evntlop++;
}}
fclose(fp);
fclose(fp1);
system("del object\\event.mp3");
system("ren object\\eventdemo.mp3 event.mp3");
resetevent();
    }
}
else if(x>240&&x<270 && y>90 &&y<110 && mupd==0)
{
    edtslt=3;
    step4e=2;
     mupd=1;

    if(stevent==4)
    {

fp=fopen("object\\event.mp3","r+");
    fp1=fopen("object\\eventdemo.mp3","a+");
    evntlop=0;
while(fread(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp)!=NULL)
{
    if((ddd)!=evntlop)
    {
    fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp1);
    evntlop++;
}}
fclose(fp);
fclose(fp1);
system("del object\\event.mp3");
system("ren object\\eventdemo.mp3 event.mp3");
resetevent();
    }
}
else if(x>300 && y>90 &&y<110 && mupd==0)
{
    edtslt=4;
    step4e=3;
     mupd=1;

    if(stevent==4)
    {

fp=fopen("object\\event.mp3","r+");
    fp1=fopen("object\\eventdemo.mp3","a+");
    evntlop=0;
while(fread(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp)!=NULL)
{
    if((ddd)!=evntlop)
    {
    fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp1);
    evntlop++;
}}
fclose(fp);
fclose(fp1);
system("del object\\event.mp3");
system("ren object\\eventdemo.mp3 event.mp3");
resetevent();
    }
}
else
{
  step4e=0;
}
if(stevent!=1)
{
     if(x>110 &&x < 220 && y>410 && y< 440)
     np--;
     else
     if(x>230 &&x < 335 && y>410 && y< 440)
     np++;

}
            }
        if(mmc==6)
        {
            if(x>150&&x<150+msg[499]->w && y>100&&y<125 &&mupd==0  )
        {
            gameplaym=1;
        }
        else if(x>150&&x<150+msg[498]->w && y>150&&y<175 &&mupd==0  )
        {
            gameplaym=2;
        }
            if(gameplaym==2)
            {
                if(x>450&&x<550 && y>100&&y<150&&rndmg==1&&mupd==0   )
                {
                    rndmg=2;
                }
                else if(x>480&&x<600 && y>120&&y<170&&rndmg==2 &&mupd==0  )
                {
                    rndmg=4;
                }


                if(x>110&&x<160 && y>55&&y<105 &&mupd==0  )
                {
                   clkr=1;

                }
                else if(x>110&&x<160 && y>105&&y<155 &&mupd==0 )
                {
                    clkr=2;
                }
                else if(x>110&&x<160 && y>155&&y<205&&mupd==0   )
                {
                    clkr=3;
                }
                else if(x>110&&x<160 && y>205&&y<255&&mupd==0   )
                {
                    clkr=4;
                }
                else if(x>110&&x<160 && y>255&&y<305 &&mupd==0  )
                {
                    clkr=5;
                }
                else if(x>110&&x<160 && y>305&&y<355&&mupd==0 )
                {
                    clkr=6;
                }
mupd=1;
            }
        }
        else
        {
           gameplaym=0;
           rndmg=1;
        }
        if(mmc==7 || mmc==3)
        {
            if(x>105&&x<145 && y>72&&y<98 &&mupd==0 )
        {
            ed=1;
            mupd=1;
            if(mms[0].lonof==0)
            mms[0].lonof=1;
            else
            {
            mms[0].lonof=0;
            gettime();
            starth=st.wHour;
            startm=st.wMinute;
            }
        }
         if((x>105&&x<145 && y>122&&y<148) &&mupd==0 )
        {
            ed=1;
            mupd=1;
            if(mms[1].lonof==0)
            mms[1].lonof=1;
            else
            {
            mms[1].lonof=0;
            stm=st.wMinute;
            }
        }
         if(x>105&&x<145 && y>172&&y<198 &&mupd==0 )
        {
            ed=1;
            mupd=1;
            if(mms[2].lonof==0)
            mms[2].lonof=1;
            else
            {
            mms[2].lonof=0;

            }
        }
        if(x>105&&x<145 && y>222&&y<248 &&mupd==0 )
        {
            ed=1;
            mupd=1;
            if(mms[3].lonof==0)
            mms[3].lonof=1;
            else
            mms[3].lonof=0;
        }
        if(x>105&&x<145 && y>272&&y<298 &&mupd==0 )
        {
            ed=1;
            mupd=1;
            if(mms[4].lonof==0)
            mms[4].lonof=1;
            else
            mms[4].lonof=0;

        }
         if(x>105&&x<145 && y>272+50&&y<298+50 &&mupd==0 )
        {
            ed=1;
            mupd=1;
            if(mms[5].lonof==0)
            mms[5].lonof=1;
            else
            mms[5].lonof=0;

        }
        if(x>437&&x<457 && y>172&&y<190 &&mupd==0 )
        {
            mupd=1;
            mms[2].bl--;
            if(mms[2].bl<1)
            mms[2].bl=99;
            ed=1;
        }
       else if(x>487&&x<507 && y>172&&y<190 &&mupd==0 )
        {
            mupd=1;
            mms[2].bl++;
            if(mms[2].bl>99)
            mms[2].bl=1;
            ed=1;
        }
         else if(x>372&&x<392 && y>122&&y<140 &&mupd==0 )
        {
            mupd=1;
            mms[1].h--;
            if(mms[1].h<0)
            mms[1].h=24;
            ed=1;
        }
        else if(x>412&&x<432 && y>122&&y<140 &&mupd==0 )
        {
            mupd=1;
            mms[1].h++;
            if(mms[1].h>24)
            mms[1].h=0;
            ed=1;
        }
        else if(x>458&&x<478 && y>122&&y<140 &&mupd==0 )
        {
            mupd=1;
            mms[1].m--;
            if(mms[1].m<0)
            mms[1].m=60;
            ed=1;
        }
         else if(x>498&&x<518 && y>122&&y<140&&mupd==0 )
        {
            ed=1;
            mupd=1;
            mms[1].m++;
            if(mms[1].m>60)
            mms[1].m=0;
        }
        else if(x>310&&x<333 && y>72&&y<93 &&mupd==0 )
        {
            mupd=1;
            mms[0].h--;
            if(mms[0].h<1)
            mms[0].h=24;
            ed=1;
        }
        else if(x>345&&x<368 && y>72&&y<93 &&mupd==0 )
        {
            mupd=1;
            mms[0].h++;
            if(mms[0].h>24)
            mms[0].h=1;
            ed=1;
        }
          if(x>402&&x<425 && y>72&&y<93 &&mupd==0 )
        {
            mupd=1;
            mms[0].m--;
            if(mms[0].m<0)
            mms[0].m=60;
            ed=1;
        }
         else if(x>435&&x<458 && y>72&&y<93 &&mupd==0 )
        {
            ed=1;
            mupd=1;
            mms[0].m++;
            if(mms[0].m>60)
            mms[0].m=0;
        }
        else if(x>355&&x<430 && y>410&&y<460 &&mupd==0 )
        {
            mupd=1;
            write_file();
            ed=0;
        }
        }
        else
        {
            ed=0;
            read_file();
        }
          if(x>253&&x<300 && y>0&&y<20 && anotherwin==0)
            {
                //set the win pos
                    xc=300;
                    yc=200;
                    //big win show condn
                anotherwin=1;
                SCREEN_WIDTH = 700;
                 SCREEN_HEIGHT = 500;
                 //set window size
                 screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE | SDL_NOFRAME );
            }
            else if(x>670&&x<700 && y>0&&y<30 &&( anotherwin==1||anotherwin==3))
            {
                //set the win pos
                 monthv=st.wMonth;
                yearv=st.wYear;

                xc=1060;
                yc=660;
                //small win show condn
                anotherwin=0;
                SCREEN_WIDTH = 300;
                 SCREEN_HEIGHT = 60;
                 //set window size
                 screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE | SDL_NOFRAME );
            }
//when big window is open
if( anotherwin==1)
        {
            if(ckmy==50)
            {

                ckmy=51;
             if(x>305 && x<315 && y>68 &&y<95)
            {

                decrease_year(&yearv);
            }
            else  if(x>185&& x<195 && y>68 &&y<95)
            {
               increase_year(&yearv);
            }
             if(x>SCREEN_WIDTH-90&& x<SCREEN_WIDTH-80 && y>68 &&y<95)
            {
                increase_month(&monthv,&yearv);
            }
            else  if(x>450 && x<460 && y>68 &&y<95)
            {
                decrease_month(&monthv,&yearv);
            }
            }
            //choose the menu in large window
if(mmc==5)
{
    //re-enter the password if it is wrong............
    if(x>=150&&x<=300&&y>=75&&y<=100&&cpassv==1&&mupd==0)
{
    mupd=1;
    cpassv=0;
}

if(x>=150&&x<=220&&y>=400&&y<=415&&addfolder==0&&mupd==0)
{
    mupd=1;
    addfolder=1;
}
else if(x>=150&&x<=310&&y>=400&&y<=415&&addfolder==1&&mupd==0)
{
     mupd=1;
    addfolder=0;
}

}

            if(mmc!=1)
            {
                monthv=st.wMonth;
                yearv=st.wYear;
                dayv=st.wDay;
                setcald();

            }
            else
            {

                if(x>150 && x<170 && y>60 &&y<75)
            {

                asbs=0;
            }
            else if(x>150 && x<170 && y>75 &&y<90)
            {

                asbs=1;
            }

            }
            if(x>0 && x<100 && y>50 &&y<98)
            {
                mmc=1;

            }
            else if(x>0 && x<100 && y>100 &&y<148)
            {
                mmc=2;
            }
            else if(x>0 && x<100 && y>150 &&y<198)
            {
                mmc=3;
            }
            else if(x>0 && x<100 && y>200 &&y<248)
            {
                mmc=4;
            }
            else if(x>0 && x<100 && y>250 &&y<298)
            {
                mmc=5;
            }
            else if(x>0 && x<100 && y>300 &&y<348)
            {
                mmc=6;
            }
            else if(x>0 && x<100 && y>350 &&y<398)
            {
                mmc=7;
            }
            else if(x>0 && x<100 && y>400 &&y<448)
            {
                mmc=8;
            }
        }

    }
    }
     if( event.type == SDL_MOUSEBUTTONUP )//mouse button is up
    {
        //when key up stop the win is moving
        move=0;
        mupd=0;

        if( event.button.button == SDL_BUTTON_LEFT)
        {
 ckmy=50;
        }
    }
  if(mmc==6)
    {
                    if(gameplaym==1)
                    {
                if( event.type == SDL_KEYDOWN )
            {

               if( event.key.keysym.sym == SDLK_UP&& mupd==0 )
                {
                     mupd=1;
                    if(gmove==0){
                    if(hl<=1)
                    {
                        frs++;
                        hl=3;

                    }
                     else
                    hl--;
                    if(frs>3)
                    frs=1;
                    }
                    else{
                        if(ls==1)
                        {
                           lr=3;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                           lr=2;
                           hl=1;
                           load_file();
                           lr=4;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                        }
                       else if(ls==2)
                        {
                            lr=3;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                           lr=2;
                           hl=2;
                           load_file();
                           lr=4;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                        }
                        else if(ls==3)
                        {
                            lr=3;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                           lr=2;
                           hl=3;
                           load_file();
                           lr=4;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                        }
                       else{
                lr=3;
                        load_file();

                }}
                }
                else if(event.key.keysym.sym == SDLK_DOWN&&mupd==0)
                {
                    mupd=1;
                    if(gmove==0){
                    if(frs<=1)
                    {
                        hl++;
                        frs=3;
                    }
                    else
                    frs--;
                    if(hl>3)
                    hl=1;
                    }
                    else
                    {
                        if(ls==1)
                        {
                           lr=4;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                           lr=2;
                           hl=3;
                           load_file();
                           lr=3;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                        }
                       else if(ls==2)
                        {
                           lr=4;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                           lr=2;
                           hl=2;
                           load_file();
                           lr=3;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                        }
                        else if(ls==3)
                        {
                           lr=4;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                           lr=2;
                           hl=1;
                           load_file();
                           lr=3;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                        }
                        else
                        {
                        lr=4;
                        load_file();
                        }
                    }
                }
                else if(event.key.keysym.sym == SDLK_LEFT&& mupd==0)
                {
                     mupd=1;
                    if(gmove==0){
                  if(ls>=1 && ls<=3)
                  {
                      ls--;
                    if(ls<=0)
                    {
                        vl=3;
                    }
                  }
                  else
                  {
                  vl--;
                  if(vl<=0)
                  ls=3;
                  }
                    }
                    else{
                        lr=1;
                    load_file();
                    }
                }
                else if(event.key.keysym.sym == SDLK_RIGHT&& mupd==0)
                {
                     mupd=1;
                    if(gmove==0){
                  if(vl<=3 && vl>=1)
                  {
                    vl++;
                    if(vl>3)
                    ls=1;


                  }
                  else
                  {
                  ls++;
                  if(ls>3)
                  vl=1;

                  }
                }

                else{
                    lr=2;
                load_file();
                }
            }
             else if(event.key.keysym.sym == SDLK_w&& mupd==0)
                {
                     mupd=1;
                    lr=3;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                }
                  else if(event.key.keysym.sym == SDLK_s&& mupd==0)
                {
                     mupd=1;
                    lr=4;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                }
                   else if(event.key.keysym.sym == SDLK_d&& mupd==0)
                {
                     mupd=1;
                    lr=2;
                           hl=1;
                           load_file();
                           hl=2;
                           load_file();
                           hl=3;
                           load_file();
                }
                     else if(event.key.keysym.sym == SDLK_a&& mupd==0)
                {
                     mupd=1;
                    lr=1;
                           hl=1;
                           load_file();
                           hl=2;
                           load_file();
                           hl=3;
                           load_file();
                }
                     else if(event.key.keysym.sym == SDLK_e&& mupd==0)
                {
                     mupd=1;
                     lr=4;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                    lr=2;
                           hl=1;
                           load_file();
                           hl=2;
                           load_file();
                           hl=3;
                           load_file();
                            lr=3;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                }
                  else if(event.key.keysym.sym == SDLK_q&& mupd==0)
                {
                     mupd=1;
                     lr=4;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                    lr=1;
                           hl=1;
                           load_file();
                           hl=2;
                           load_file();
                           hl=3;
                           load_file();
                            lr=3;
                           vl=1;
                           load_file();
                           vl=2;
                           load_file();
                           vl=3;
                           load_file();
                }
             if( event.key.keysym.sym == SDLK_LSHIFT ||event.key.keysym.sym == SDLK_RSHIFT)
                {
                    gmove=1;
                    lr=0;
                }
            }
                    }

if( event.type == SDL_KEYUP )
            {
                mupd=0;
if( event.key.keysym.sym == SDLK_LSHIFT ||event.key.keysym.sym == SDLK_RSHIFT)
                {
                    gmove=0;

                }
            }
                }
    if(mmc==5)
    {
         if( event.type == SDL_MOUSEBUTTONDOWN )//mouse button is up
    {
         if( event.button.button == SDL_BUTTON_LEFT)
        {
    if(x>150&&x<300&&y>300&&y<310)
    {
        passresult=2;
        clearall();
    }
        if(passresult==1 &&mupd==0 )
        {
             mupd=1;
            unhide=0;

            ///////////////
            ////////////////
            ///////////////
            if(x>300 && x<420&& y>355 && y<380)
            {
            showhidepage++;
            }
            else if(x>120&&x<239&&y>355&&y<380)
            {
            showhidepage--;
            if(showhidepage<=0)
            showhidepage=0;
            }
            //////////////////
            ///////////////////
            ////////////////
            ////////////////////
if((x>155&&x<230 && y>85 && y<95 ))
{
     fp=fopen("object\\hide.mp3","r+");
fp1=fopen("object\\temp.mp3","a+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if(showhidepage*10==unhide)
{
strcat(unhideadd,"attrib ");
strcat(unhideadd,hide[unhide].add);
strcat(unhideadd," -s -h");
system(unhideadd);

}
else
fwrite(&hide[unhide],sizeof(hide[unhide]),1,fp1);
unhide++;
}
fclose(fp);
fclose(fp1);
system("del object\\hide.mp3");
system("rename object\\temp.mp3 hide.mp3");

}
else if((x>155&&x<230 && y>85+60 && y<95+60))
{
 fp=fopen("object\\hide.mp3","r+");
fp1=fopen("object\\temp.mp3","a+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if(showhidepage*10==unhide-1)
{
strcat(unhideadd,"attrib ");
strcat(unhideadd,hide[unhide].add);
strcat(unhideadd," -s -h");
system(unhideadd);
}
else
fwrite(&hide[unhide],sizeof(hide[unhide]),1,fp1);
unhide++;
}
fclose(fp);
fclose(fp1);
system("del object\\hide.mp3");
system("rename object\\temp.mp3 hide.mp3");

}
else if((x>155&&x<230 && y>85+60*2 && y<95+60*2))
{
 fp=fopen("object\\hide.mp3","r+");
fp1=fopen("object\\temp.mp3","a+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+2)==unhide)
{strcat(unhideadd,"attrib ");
strcat(unhideadd,hide[unhide].add);
strcat(unhideadd," -s -h");
system(unhideadd);
}
else
fwrite(&hide[unhide],sizeof(hide[unhide]),1,fp1);
unhide++;
}
fclose(fp);
fclose(fp1);
system("del object\\hide.mp3");
system("rename object\\temp.mp3 hide.mp3");

}
else if((x>155&&x<230 && y>85+60*3 && y<95+60*3))
{
 fp=fopen("object\\hide.mp3","r+");
fp1=fopen("object\\temp.mp3","a+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+3)==unhide)
{
    strcat(unhideadd,"attrib ");
strcat(unhideadd,hide[unhide].add);
strcat(unhideadd," -s -h");
system(unhideadd);

}
else
fwrite(&hide[unhide],sizeof(hide[unhide]),1,fp1);
unhide++;
}
fclose(fp);
fclose(fp1);
system("del object\\hide.mp3");
system("rename object\\temp.mp3 hide.mp3");

}
else if((x>155&&x<230 && y>85+60*4 && y<95+60*4))
{
 fp=fopen("object\\hide.mp3","r+");
fp1=fopen("object\\temp.mp3","a+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+4)==unhide)
{
strcat(unhideadd,"attrib ");
strcat(unhideadd,hide[unhide].add);
strcat(unhideadd," -s -h");
system(unhideadd);

}
else
fwrite(&hide[unhide],sizeof(hide[unhide]),1,fp1);
unhide++;
}
fclose(fp);
fclose(fp1);
system("del object\\hide.mp3");
system("rename object\\temp.mp3 hide.mp3");

}
else if((x>455&&x<530 && y>85 && y<95))
{
 fp=fopen("object\\hide.mp3","r+");
fp1=fopen("object\\temp.mp3","a+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+5)==unhide)
{
strcat(unhideadd,"attrib ");
strcat(unhideadd,hide[unhide].add);
strcat(unhideadd," -s -h");
system(unhideadd);

}
else
fwrite(&hide[unhide],sizeof(hide[unhide]),1,fp1);
unhide++;
}
fclose(fp);
fclose(fp1);
system("del object\\hide.mp3");
system("rename object\\temp.mp3 hide.mp3");

}
else if((x>455&&x<530 && y>85+60 && y<95+60))
{
 fp=fopen("object\\hide.mp3","r+");
fp1=fopen("object\\temp.mp3","a+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+6)==unhide)
{
strcat(unhideadd,"attrib ");
strcat(unhideadd,hide[unhide].add);
strcat(unhideadd," -s -h");
system(unhideadd);

}
else
fwrite(&hide[unhide],sizeof(hide[unhide]),1,fp1);
unhide++;
}
fclose(fp);
fclose(fp1);
system("del object\\hide.mp3");
system("rename object\\temp.mp3 hide.mp3");

}
else if((x>455&&x<530 && y>85+60*2 && y<95+60*2))
{
 fp=fopen("object\\hide.mp3","r+");
fp1=fopen("object\\temp.mp3","a+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+7)==unhide)
{
strcat(unhideadd,"attrib ");
strcat(unhideadd,hide[unhide].add);
strcat(unhideadd," -s -h");
system(unhideadd);

}
else
fwrite(&hide[unhide],sizeof(hide[unhide]),1,fp1);
unhide++;
}
fclose(fp);
fclose(fp1);
system("del object\\hide.mp3");
system("rename object\\temp.mp3 hide.mp3");

}
else if((x>455&&x<530 && y>85+60*3 && y<95+60*3))
{
 fp=fopen("object\\hide.mp3","r+");
fp1=fopen("object\\temp.mp3","a+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+8)==unhide)
{
strcat(unhideadd,"attrib ");
strcat(unhideadd,hide[unhide].add);
strcat(unhideadd," -s -h");
system(unhideadd);

}
else
fwrite(&hide[unhide],sizeof(hide[unhide]),1,fp1);
unhide++;
}
fclose(fp);
fclose(fp1);
system("del object\\hide.mp3");
system("rename object\\temp.mp3 hide.mp3");

}
else if((x>455&&x<530 && y>85+60*4 && y<95+60*4))
{
 fp=fopen("object\\hide.mp3","r+");
fp1=fopen("object\\temp.mp3","a+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+9)==unhide)
{
strcat(unhideadd,"attrib ");
strcat(unhideadd,hide[unhide].add);
strcat(unhideadd," -s -h");
system(unhideadd);

}
else
fwrite(&hide[unhide],sizeof(hide[unhide]),1,fp1);
unhide++;
}
fclose(fp);
fclose(fp1);
system("del object\\hide.mp3");
system("ren object\\temp.mp3 hide.mp3");

}
//////////////////////////open
////////////////////////////
//////////////////////////////
if((x>275&&x<390 && y>65 && y<105)||(x>105&&x<150 && y>60 && y<110))
{
     fp=fopen("object\\hide.mp3","r+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10)==unhide)
{
    strcpy(unhideadd,"start ");
    strcat(unhideadd,hide[unhide].add);
system(unhideadd);

}
unhide++;
}
fclose(fp);

}
else if((x>275&&x<390 && y>65+58 && y<105+58)||(x>105&&x<150 && y>60+58 && y<110+58))
{
  fp=fopen("object\\hide.mp3","r+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+1)==unhide)
{
strcpy(unhideadd,"start ");
    strcat(unhideadd,hide[unhide].add);
system(unhideadd);
}
unhide++;
}
fclose(fp);


}
else if((x>275&&x<390 && y>65+58*2 && y<105+58*2)||(x>105&&x<150 && y>60+58*2 && y<110+58*2))
{
 fp=fopen("object\\hide.mp3","r+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+2)==unhide)
{
strcpy(unhideadd,"start ");
    strcat(unhideadd,hide[unhide].add);
system(unhideadd);
}
unhide++;
}
fclose(fp);

}
else if((x>275&&x<390 && y>65+58*3 && y<105+58*3)||(x>105&&x<150 && y>60+58*3 && y<110+58*3))
{
  fp=fopen("object\\hide.mp3","r+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+3)==unhide)
{
strcpy(unhideadd,"start ");
    strcat(unhideadd,hide[unhide].add);
system(unhideadd);
}
unhide++;
}
fclose(fp);


}
else if((x>275&&x<390 && y>65+58*4 && y<105+58*4)||(x>105&&x<150 && y>60+58*4 && y<110+58*4))
{
 fp=fopen("object\\hide.mp3","r+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+4)==unhide)
{
strcpy(unhideadd,"start ");
    strcat(unhideadd,hide[unhide].add);
system(unhideadd);
}
unhide++;
}
fclose(fp);


}
else if((x>575&&x<690 && y>65 && y<105)||(x>405&&x<450 && y>60 && y<110+58))
{
 fp=fopen("object\\hide.mp3","r+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+5)==unhide)
{
strcpy(unhideadd,"start ");
    strcat(unhideadd,hide[unhide].add);
system(unhideadd);
}
unhide++;
}
fclose(fp);

}
else if((x>575&&x<690 && y>65+58 && y<105+58)||(x>405&&x<450 && y>60+58 && y<110+58))
{
 fp=fopen("object\\hide.mp3","r+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+6)==unhide)
{
strcpy(unhideadd,"start ");
    strcat(unhideadd,hide[unhide].add);
system(unhideadd);
}
unhide++;
}
fclose(fp);

}
else if((x>575&&x<690 && y>65+58*2 && y<105+58*2)||(x>405&&x<450 && y>60+58*2 && y<110+58*2))
{
  fp=fopen("object\\hide.mp3","r+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+7)==unhide)
{
strcpy(unhideadd,"start ");
    strcat(unhideadd,hide[unhide].add);
system(unhideadd);
}
unhide++;
}
fclose(fp);

}
else if((x>575&&x<690 && y>65+58*3 && y<105+58*3)||(x>405&&x<450 && y>60+58*3 && y<110+58*3))
{
 fp=fopen("object\\hide.mp3","r+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+8)==unhide)
{
strcpy(unhideadd,"start ");
    strcat(unhideadd,hide[unhide].add);
system(unhideadd);
}
unhide++;
}
fclose(fp);

}
else if((x>575&&x<690 && y>65+58*4 && y<105+58*4)||(x>405&&x<450 && y>60+58*4 && y<110+58*4))
{
 fp=fopen("object\\hide.mp3","r+");
while(fread(&hide[unhide],sizeof(hide[unhide]),1,fp)!=NULL)
{
if((showhidepage*10+9)==unhide)
{
strcpy(unhideadd,"start ");
    strcat(unhideadd,hide[unhide].add);
system(unhideadd);
}
unhide++;
}
fclose(fp);

}


for(unhide=strlen(unhideadd);unhide>=0;unhide--)
{
  unhideadd[unhide]='\0';
}
unhide=0;
}

}
}
if( event.type == SDL_MOUSEBUTTONUP )
{
    mupd=0;
}

}





    if(move==1 && anotherwin==0 )//small window is moving
   {
       //set new window pos

        xc=dx-inx+xc;
        yc=dy-iny+yc;

        inx=dx;
        iny=dy;

    }
    else if(move==1 && anotherwin==1 && x>0&&x<678&&y>0&&y<30)//large window is moving criteria
   {
        xc=dx-inx+xc;
        yc=dy-iny+yc;
        inx=dx;
        iny=dy;

    }


}


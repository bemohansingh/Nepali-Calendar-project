
void deleteevent();
void addevent();
void viewevent();
void editevent();
void resetevent()
{
step4e=0;
while(mm.length() != 0)
{
    mm.erase( mm.length() - 1 );
}
while(yy.length() != 0)
{
    yy.erase( yy.length() - 1 );
}
while(dd.length() != 0)
{
    dd.erase( dd.length() - 1 );
}
while(tl.length() != 0)
{
    tl.erase( tl.length() - 1 );
}
while(ev1.length() != 0)
{
    ev1.erase( ev1.length() - 1 );
}
while(ev2.length() != 0)
{
    ev2.erase( ev2.length() - 1 );
}
 if( msg[151] != NULL )
        {
            //Free the old surface
            SDL_FreeSurface( msg[151] );

            //Render a new text surface
           msg[151] = TTF_RenderText_Solid( font[0], yy.c_str(), textColor );

        }
if( msg[152] != NULL )
        {
            //Free the old surface
            SDL_FreeSurface( msg[152] );

            //Render a new text surface
           msg[152] = TTF_RenderText_Solid( font[0], mm.c_str(), textColor );

        }
        if( msg[153] != NULL )
        {
            //Free the old surface
            SDL_FreeSurface( msg[153] );

            //Render a new text surface
           msg[153] = TTF_RenderText_Solid( font[0], dd.c_str(), textColor );

        }
        if( msg[154] != NULL )
        {
            //Free the old surface
            SDL_FreeSurface( msg[154] );

            //Render a new text surface
           msg[154] = TTF_RenderText_Solid( font[0], tl.c_str(), textColor );

        }
        if( msg[155] != NULL )
        {
            //Free the old surface
            SDL_FreeSurface( msg[155] );

            //Render a new text surface
           msg[155] = TTF_RenderText_Solid( font[0], ev1.c_str(), textColor );

        }
        if( msg[156] != NULL )
        {
            //Free the old surface
            SDL_FreeSurface( msg[156] );

            //Render a new text surface
           msg[156] = TTF_RenderText_Solid( font[0], ev2.c_str(), textColor );

        }
}
void eventtype()
{
    if(test==0)
    {

test=1;
    fp=fopen("object\\event.mp3","r+");
    evntlop=0;
while(fread(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp)!=NULL)
{
    evntlop++;
}
fclose(fp);
eventlist[evntlop].yy=0;
eventlist[evntlop].mm=0;
eventlist[evntlop].dd=0;

    }
     if( event.type == SDL_KEYDOWN )
    {

        //Keep a copy of the current version of the string
        std::string tempe = yy;
        std::string tempe1 = mm;
        std::string tempe2 = dd;
        std::string tempe3 = tl;
        std::string tempe4 = ev1;
        std::string tempe5 = ev2;

        if( ( event.key.keysym.sym == SDLK_BACKSPACE )  &&mupd==0 )
        {
            mupd=1;
            if(stevent==3)
            {
            if(edtslt>0&&edtslt<4)
            {
                edint=edint/10;
            }
            else if(edtslt==4)
            {
                edlen--;
            edchar[edlen]='\0';
            }
            }
            if(step4e==0 &&yy.length() != 0 || edtslt==1)
            {
                eventlist[evntlop].yy=eventlist[evntlop].yy/10;
            yy.erase( yy.length() - 1 );

            }
            else  if(step4e==0 &&mm.length() != 0||edtslt==2)
            {
                eventlist[evntlop].mm=eventlist[evntlop].mm/10;
            mm.erase( mm.length() - 1 );

            }
            else  if(step4e==0 &&dd.length() != 0||edtslt==3)
            {
                eventlist[evntlop].dd=eventlist[evntlop].dd/10;
            dd.erase( dd.length() - 1 );

            }
            else  if(step4e==0 &&tl.length() != 0||edtslt==4)
            {
                tillen--;
                eventlist[evntlop].tl[tillen]='\0';
            tl.erase( tl.length() - 1 );

            }
            else  if(step4e==0 &&ev1.length() != 0)
            {
                dislen1--;
                eventlist[evntlop].d1[dislen1]='\0';
            ev1.erase( ev1.length() - 1 );

            }
            else  if(step4e==0 &&ev2.length() != 0)
            {
                 dislen2--;
                eventlist[evntlop].d2[dislen2]='\0';
            ev2.erase( ev2.length() - 1 );

            }
        }
         else if( event.key.keysym.unicode ==SDLK_RETURN &&mupd==0 )
            {
            mupd=1;
             if(stevent==3)
            {
            if(edtslt>0&&edtslt<=4)
            {
fp=fopen("object\\event.mp3","r+");
    fp1=fopen("object\\eventdemo.mp3","a+");
    evntlop=0;
while(fread(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp)!=NULL)
{
    if((ddd)==evntlop)
    {
        if(edtslt==1)
        eventlist[evntlop].yy=edint;
        else if(edtslt==2)
         eventlist[evntlop].mm=edint;
         else if(edtslt==3)
         eventlist[evntlop].dd=edint;
         else if(edtslt==4)
         strcpy(eventlist[evntlop].tl,edchar);
        fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp1);
    }
    else
    fwrite(&eventlist[evntlop],sizeof(eventlist[evntlop]),1,fp1);
    evntlop++;
}
fclose(fp);
fclose(fp1);
system("del object\\event.mp3");
system("ren object\\eventdemo.mp3 event.mp3");
resetevent();


                edint=0;
            }
            else if(edtslt==4)
            {
            edchar[edlen]='\0';
            }
            }
            if(step4e==0 &&yy.length() != 0|| edtslt==1)
            {
                  yy +='\0';
                  step4e=1;
           }
            else  if(step4e==1||edtslt==2)
            {
            mm +='\0';
        step4e=2;
            }
            else  if(step4e==2||edtslt==3)
            {
            dd +='\0';
             step4e=3;

            }
            else  if(step4e==3||edtslt==4)
            {

                eventlist[evntlop].tl[tillen]='\0';
            tl +='\0';
            step4e=4;
            }
            else  if(step4e==4 )
            {
                eventlist[evntlop].d1[dislen1]='\0';
            ev1 +='\0';
             step4e=5;

            }
            else  if(step4e==5 )
            {
                 eventlist[evntlop].d2[dislen2]='\0';
              ev2 +='\0';
               step4e=6;

            }
            }
               else if(mupd==0&&( event.key.keysym.unicode>= (Uint16)'0' ) &&( event.key.keysym.unicode<= (Uint16)'9' ) )
            {
                mupd=1;
                 if(stevent==3)
            {
            if(edtslt>0&&edtslt<4)
            {
                edint=edint*10+(char)event.key.keysym.unicode-48;;
            }
            else if(edtslt==4)
            {

            edchar[edlen]=(char)event.key.keysym.unicode;
            edlen++;
            }
            }
                if(step4e==0 || edtslt==1)
            {
                if(yy.length()<=3)
                {
                    eventlist[evntlop].yy=eventlist[evntlop].yy*10+(char)event.key.keysym.unicode-48;
                    yy +=(char)event.key.keysym.unicode;
                }

            }
            else  if(step4e==1||edtslt==2)
            {
                if(eventlist[evntlop].mm<=12 &&mm.length()<=2 )

                {
                eventlist[evntlop].mm=eventlist[evntlop].mm*10+(char)event.key.keysym.unicode-48;
            mm +=(char)event.key.keysym.unicode;
                }
            }
            else  if(step4e==2||edtslt==3)
            {
                if(eventlist[evntlop].dd<=32 &&dd.length()<=2)
                {
            eventlist[evntlop].dd=eventlist[evntlop].dd*10+(char)event.key.keysym.unicode-48;
            dd +=(char)event.key.keysym.unicode;
                }

            }
            else  if(step4e==3||edtslt==4)
            {
                eventlist[evntlop].tl[tillen]=(char)event.key.keysym.unicode;
                tillen++;
            tl +=(char)event.key.keysym.unicode;

            }
            else  if(step4e==4 )
            {
                eventlist[evntlop].d1[dislen1]=(char)event.key.keysym.unicode;
                dislen1++;
            ev1 +=(char)event.key.keysym.unicode;


            }
            else  if(step4e==5 )
            {
                 eventlist[evntlop].d2[dislen2]=(char)event.key.keysym.unicode;
                dislen2++;
              ev2 +=(char)event.key.keysym.unicode;


            }

            }
              else if(mupd==0&&( event.key.keysym.sym != SDLK_LSHIFT ) &&( event.key.keysym.sym != SDLK_RSHIFT ) )
            {
                mupd=1;
 if(stevent==3)
            {
        if(edtslt==4)
            {

            edchar[edlen]=(char)event.key.keysym.unicode;
            edlen++;
            }
            }
                 if(step4e==3)
            {
                 eventlist[evntlop].tl[tillen]=(char)event.key.keysym.unicode;
                tillen++;
            tl +=(char)event.key.keysym.unicode;

            }
            else  if(step4e==4 )
            {
                 eventlist[evntlop].d1[dislen1]=(char)event.key.keysym.unicode;
                dislen1++;
            ev1 +=(char)event.key.keysym.unicode;


            }
            else  if(step4e==5 )
            {
                eventlist[evntlop].d2[dislen2]=(char)event.key.keysym.unicode;
                dislen2++;
              ev2 +=(char)event.key.keysym.unicode;


            }

            }


 if( yy != tempe )
        {
            //Free the old surface
            SDL_FreeSurface( msg[151] );

            //Render a new text surface
           msg[151] = TTF_RenderText_Solid( font[0], yy.c_str(), textColor );

        }
if( mm != tempe1 )
        {
            //Free the old surface
            SDL_FreeSurface( msg[152] );

            //Render a new text surface
           msg[152] = TTF_RenderText_Solid( font[0], mm.c_str(), textColor );

        }
        if( dd!= tempe2 )
        {
            //Free the old surface
            SDL_FreeSurface( msg[153] );

            //Render a new text surface
           msg[153] = TTF_RenderText_Solid( font[0], dd.c_str(), textColor );

        }
        if( tl != tempe3 )
        {
            //Free the old surface
            SDL_FreeSurface( msg[154] );

            //Render a new text surface
           msg[154] = TTF_RenderText_Solid( font[0], tl.c_str(), textColor );

        }
        if( ev1 != tempe4 )
        {
            //Free the old surface
            SDL_FreeSurface( msg[155] );

            //Render a new text surface
           msg[155] = TTF_RenderText_Solid( font[0], ev1.c_str(), textColor );

        }
        if( ev2 != tempe5 )
        {
            //Free the old surface
            SDL_FreeSurface( msg[156] );

            //Render a new text surface
           msg[156] = TTF_RenderText_Solid( font[0], ev2.c_str(), textColor );

        }
    }
    if(event.type == SDL_KEYUP)
{
    mupd=0;
}

}
void events()
{
      if(stevent!=0)
    {
    SDL_FreeSurface(msg[142]);
        if(x>490 &&x < 700 && y>410 && y< 440)
    msg[142]=TTF_RenderText_Solid(font1,">> MAIN PAGE <<",textColor);
    else
    msg[142]=TTF_RenderText_Solid(font1,">> MAIN PAGE <<",textColor7);
    apply_surface(490,410,msg[142],screen);

    if(stevent!=1)
    {
    SDL_FreeSurface(msg[145]);
        if(x>110 &&x < 220 && y>410 && y< 440)
    msg[145]=TTF_RenderText_Solid(font1,"<<BACK",textColor);
    else
    msg[145]=TTF_RenderText_Solid(font1,"<<BACK",textColor7);
    apply_surface(110,410,msg[145],screen);

     SDL_FreeSurface(msg[146]);
        if(x>230 &&x < 335 && y>410 && y< 440)
    msg[146]=TTF_RenderText_Solid(font1,"NEXT>>",textColor);
    else
    msg[146]=TTF_RenderText_Solid(font1,"NEXT>>",textColor7);

    apply_surface(230,410,msg[146],screen);

    apply_surface(110,60,msg[143],screen);
    apply_surface(300,60,msg[144],screen);

    }



    }

if(np<0)
{
    np=0;
}
else if(np/5>evntlop)
np=evntlop/5;
    if(stevent==0)
    {
        SDL_FreeSurface(msg[138]);
        if(x>150 &&x < 400 && y>150 && y< 180)
    msg[138]=TTF_RenderText_Solid(font1,">> ADD EVENT <<",textColor);
    else
    msg[138]=TTF_RenderText_Solid(font1,">> ADD EVENT <<",textColor7);
    apply_surface(150,150,msg[138],screen);
//////////
 SDL_FreeSurface(msg[139]);
if(x>150 &&x < 405 && y>210 && y< 240)
    msg[139]=TTF_RenderText_Solid(font1,">> VIEW EVENT <<",textColor);
    else
    msg[139]=TTF_RenderText_Solid(font1,">> VIEW EVENT <<",textColor7);
     apply_surface(150,210,msg[139],screen);
///////
        SDL_FreeSurface(msg[140]);
if(x>150 &&x < 410 && y>270 && y< 300)
    msg[140]=TTF_RenderText_Solid(font1,">> EDIT EVENT <<",textColor);
    else
     msg[140]=TTF_RenderText_Solid(font1,">> EDIT EVENT <<",textColor7);
      apply_surface(150,270,msg[140],screen);
     //////
        SDL_FreeSurface(msg[141]);
     if(x>150 &&x < 430 && y>330 && y< 360)
    msg[141]=TTF_RenderText_Solid(font1,">> DELETE EVENT <<",textColor);
    else
    msg[141]=TTF_RenderText_Solid(font1,">> DELETE EVENT <<",textColor7);
     apply_surface(150,330,msg[141],screen);
    }
    else if(stevent==1)
    {
        addevent();

    }
    else if(stevent==2)
    {
             viewevent();


    }
    else if(stevent==3)
    {
   editevent();
    }
    else if(stevent==4)
    {
         deleteevent();
    }

}
void addevent()
{
apply_surface(110,175,msg[147],screen);
apply_surface(110,200,msg[148],screen);
apply_surface(110,225,msg[149],screen);
apply_surface(110,290,msg[150],screen);
apply_surface(110,260,msg[157],screen);
eventtype();
apply_surface(125+msg[147]->w,175,msg[151],screen);
apply_surface(125+msg[148]->w,200,msg[152],screen);
apply_surface(125+msg[149]->w,225,msg[153],screen);
apply_surface(125+msg[150]->w,260,msg[154],screen);
apply_surface(110,320,msg[155],screen);
apply_surface(110,340,msg[156],screen);
if(step4e>=5)
{
if(x>225 && x<390 &&y>410 && y<445)
msg[158]=TTF_RenderText_Solid(font1,">> SAVE <<",textColor);
    else
    msg[158]=TTF_RenderText_Solid(font1,">> SAVE <<",textColor7);
     apply_surface(225,410,msg[158],screen);
}
}
void viewevent()
{
    SDL_FreeSurface(msg[159]);
    SDL_FreeSurface(msg[160]);
    SDL_FreeSurface(msg[161]);
    SDL_FreeSurface(msg[162]);
    SDL_FreeSurface(msg[163]);
    SDL_FreeSurface(msg[164]);
    SDL_FreeSurface(msg[165]);
    SDL_FreeSurface(msg[166]);
    SDL_FreeSurface(msg[167]);
    SDL_FreeSurface(msg[168]);
    SDL_FreeSurface(msg[169]);
    SDL_FreeSurface(msg[170]);
    SDL_FreeSurface(msg[171]);
    SDL_FreeSurface(msg[172]);
    SDL_FreeSurface(msg[173]);
    SDL_FreeSurface(msg[174]);
    SDL_FreeSurface(msg[175]);
    SDL_FreeSurface(msg[176]);
    SDL_FreeSurface(msg[177]);
    SDL_FreeSurface(msg[178]);


     fp=fopen("object\\event.mp3","r+");
    vw=0;
while(fread(&eventlist[vw],sizeof(eventlist[vw]),1,fp)!=NULL)
{
    vw++;
}
fclose(fp);
if(vw>np*5)
{
yev[0]=48+eventlist[np*5+0].yy/1000;
yev[1]=48+(eventlist[np*5+0].yy%1000)/100;
yev[2]=48+(eventlist[np*5+0].yy%100)/10;
yev[3]=48+eventlist[np*5+0].yy%10;
yev[4]='\0';
 msg[159]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,90,msg[159],screen);
 mev[0]=48+(eventlist[np*5+0].mm%100)/10;
mev[1]=48+eventlist[np*5+0].mm%10;
mev[2]='\0';
 msg[160]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,90,msg[160],screen);

 dev[0]=48+(eventlist[np*5+0].dd%100)/10;
dev[1]=48+eventlist[np*5+0].dd%10;
dev[2]='\0';
msg[161]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,90,msg[161],screen);
msg[162]=TTF_RenderText_Solid(font[5],eventlist[np*5+0].tl,textColor7);
apply_surface(300,90,msg[162],screen);
if(x>118 && y>90 &&y<110)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+0].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+0].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//2nd row
if(vw>np*5+1)
{
yev[0]=48+eventlist[np*5+1].yy/1000;
yev[1]=48+(eventlist[np*5+1].yy%1000)/100;
yev[2]=48+(eventlist[np*5+1].yy%100)/10;
yev[3]=48+eventlist[np*5+1].yy%10;
yev[4]='\0';
 msg[163]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,120,msg[163],screen);
 mev[0]=48+(eventlist[np*5+1].mm%100)/10;
mev[1]=48+eventlist[np*5+1].mm%10;
mev[2]='\0';
 msg[164]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,120,msg[164],screen);

 dev[0]=48+(eventlist[np*5+1].dd%100)/10;
dev[1]=48+eventlist[np*5+1].dd%10;
dev[2]='\0';
msg[165]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,120,msg[165],screen);
msg[166]=TTF_RenderText_Solid(font[5],eventlist[np*5+1].tl,textColor7);
apply_surface(300,120,msg[166],screen);
if(x>118 && y>120 &&y<140)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+1].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+1].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//3rd row
if(vw>np*5+2)
{
yev[0]=48+eventlist[np*5+2].yy/1000;
yev[1]=48+(eventlist[np*5+2].yy%1000)/100;
yev[2]=48+(eventlist[np*5+2].yy%100)/10;
yev[3]=48+eventlist[np*5+2].yy%10;
yev[4]='\0';
 msg[167]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,150,msg[167],screen);
 mev[0]=48+(eventlist[np*5+2].mm%100)/10;
mev[1]=48+eventlist[np*5+2].mm%10;
mev[2]='\0';
 msg[168]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,150,msg[168],screen);

 dev[0]=48+(eventlist[np*5+2].dd%100)/10;
dev[1]=48+eventlist[np*5+2].dd%10;
dev[2]='\0';
msg[169]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,150,msg[169],screen);
msg[170]=TTF_RenderText_Solid(font[5],eventlist[np*5+2].tl,textColor7);
apply_surface(300,150,msg[162],screen);
if(x>118 && y>150 &&y<170)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+2].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+2].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//4th row
if(vw>np*5+3)
{
yev[0]=48+eventlist[np*5+3].yy/1000;
yev[1]=48+(eventlist[np*5+3].yy%1000)/100;
yev[2]=48+(eventlist[np*5+3].yy%100)/10;
yev[3]=48+eventlist[np*5+3].yy%10;
yev[4]='\0';
 msg[171]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,180,msg[171],screen);
 mev[0]=48+(eventlist[np*5+3].mm%100)/10;
mev[1]=48+eventlist[np*5+3].mm%10;
mev[2]='\0';
 msg[172]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,180,msg[172],screen);

 dev[0]=48+(eventlist[np*5+3].dd%100)/10;
dev[1]=48+eventlist[np*5+3].dd%10;
dev[2]='\0';
msg[173]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,180,msg[173],screen);
msg[174]=TTF_RenderText_Solid(font[5],eventlist[np*5+3].tl,textColor7);
apply_surface(300,180,msg[174],screen);

if(x>118 && y>180 &&y<200)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+3].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+3].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//5th row
if(vw>np*5+4)
{
yev[0]=48+eventlist[np*5+4].yy/1000;
yev[1]=48+(eventlist[np*5+4].yy%1000)/100;
yev[2]=48+(eventlist[np*5+4].yy%100)/10;
yev[3]=48+eventlist[np*5+4].yy%10;
yev[4]='\0';
 msg[175]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,210,msg[175],screen);
 mev[0]=48+(eventlist[np*5+4].mm%100)/10;
mev[1]=48+eventlist[np*5+4].mm%10;
mev[2]='\0';
 msg[176]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,210,msg[176],screen);

 dev[0]=48+(eventlist[np*5+4].dd%100)/10;
dev[1]=48+eventlist[np*5+4].dd%10;
dev[2]='\0';
msg[177]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,210,msg[177],screen);
msg[178]=TTF_RenderText_Solid(font[5],eventlist[np*5+4].tl,textColor7);
apply_surface(300,210,msg[178],screen);

if(x>118 && y>210 &&y<230)
{
    SDL_FreeSurface(msg[179]);
    SDL_FreeSurface(msg[180]);
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+4].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+4].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}




}
void editevent()
{
    SDL_FreeSurface(msg[159]);
    SDL_FreeSurface(msg[160]);
    SDL_FreeSurface(msg[161]);

    SDL_FreeSurface(msg[163]);
    SDL_FreeSurface(msg[164]);
    SDL_FreeSurface(msg[165]);
    SDL_FreeSurface(msg[166]);
    SDL_FreeSurface(msg[167]);
    SDL_FreeSurface(msg[168]);
    SDL_FreeSurface(msg[169]);
    SDL_FreeSurface(msg[170]);
    SDL_FreeSurface(msg[171]);
    SDL_FreeSurface(msg[172]);
    SDL_FreeSurface(msg[173]);
    SDL_FreeSurface(msg[174]);
    SDL_FreeSurface(msg[175]);
    SDL_FreeSurface(msg[176]);
    SDL_FreeSurface(msg[177]);
    SDL_FreeSurface(msg[178]);

  fp=fopen("object\\event.mp3","r+");
    vw=0;
while(fread(&eventlist[vw],sizeof(eventlist[vw]),1,fp)!=NULL)
{
    vw++;
}
fclose(fp);
//1st row
if(vw>np*5)
{
    eventtype();
    if(edtslt==1)
    {
    ddd=0;
    apply_surface(118,90,msg[151],screen);
    }
    else{
yev[0]=48+eventlist[np*5+0].yy/1000;
yev[1]=48+(eventlist[np*5+0].yy%1000)/100;
yev[2]=48+(eventlist[np*5+0].yy%100)/10;
yev[3]=48+eventlist[np*5+0].yy%10;
yev[4]='\0';
 msg[159]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,90,msg[159],screen);
    }
    if(edtslt==2)
    {
ddd=0;
    apply_surface(118,90,msg[152],screen);
    }
    else{
 mev[0]=48+(eventlist[np*5+0].mm%100)/10;
mev[1]=48+eventlist[np*5+0].mm%10;
mev[2]='\0';
 msg[160]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,90,msg[160],screen);
    }
    if(edtslt==3)
    {
ddd=0;
    apply_surface(118,90,msg[153],screen);
    }
    else{
 dev[0]=48+(eventlist[np*5+0].dd%100)/10;
dev[1]=48+eventlist[np*5+0].dd%10;
dev[2]='\0';
msg[161]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,90,msg[161],screen);
    }
    if(edtslt==4)
    {
ddd=0;
    apply_surface(118,90,msg[154],screen);
    }
    else{
        SDL_FreeSurface(msg[162]);
msg[162]=TTF_RenderText_Solid(font[5],eventlist[np*5+0].tl,textColor7);
apply_surface(300,90,msg[162],screen);
    }
if(x>118 && y>90 &&y<110)
{

msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+0].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+0].d2,textColor7);
apply_surface(118,300,msg[180],screen);

}


}
//2nd row
if(vw>np*5+1)
{
    if(edtslt==1)
    {

    apply_surface(118,90,msg[151],screen);
    }
    else{
yev[0]=48+eventlist[np*5+1].yy/1000;
yev[1]=48+(eventlist[np*5+1].yy%1000)/100;
yev[2]=48+(eventlist[np*5+1].yy%100)/10;
yev[3]=48+eventlist[np*5+1].yy%10;
yev[4]='\0';
 msg[163]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,120,msg[163],screen);
    }
 if(edtslt==2)
    {

    apply_surface(118,90,msg[152],screen);
    }
    else{
 mev[0]=48+(eventlist[np*5+1].mm%100)/10;
mev[1]=48+eventlist[np*5+1].mm%10;
mev[2]='\0';
 msg[164]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,120,msg[164],screen);
}
 if(edtslt==3)
    {

    apply_surface(118,90,msg[153],screen);
    }
    else{
 dev[0]=48+(eventlist[np*5+1].dd%100)/10;
dev[1]=48+eventlist[np*5+1].dd%10;
dev[2]='\0';
msg[165]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,120,msg[165],screen);
    }
     if(edtslt==4)
    {

    apply_surface(118,90,msg[154],screen);
    }
    else{
msg[166]=TTF_RenderText_Solid(font[5],eventlist[np*5+1].tl,textColor7);
apply_surface(300,120,msg[166],screen);
    }
if(x>118 && y>120 &&y<140)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+1].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+1].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//3rd row
if(vw>np*5+2)
{
     if(edtslt==1)
    {

    apply_surface(118,90,msg[151],screen);
    }
    else{
yev[0]=48+eventlist[np*5+2].yy/1000;
yev[1]=48+(eventlist[np*5+2].yy%1000)/100;
yev[2]=48+(eventlist[np*5+2].yy%100)/10;
yev[3]=48+eventlist[np*5+2].yy%10;
yev[4]='\0';
 msg[167]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,150,msg[167],screen);}
  if(edtslt==2)
    {

    apply_surface(118,90,msg[152],screen);
    }
    else{
 mev[0]=48+(eventlist[np*5+2].mm%100)/10;
mev[1]=48+eventlist[np*5+2].mm%10;
mev[2]='\0';
 msg[168]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,150,msg[168],screen);}
if(edtslt==3)
    {

    apply_surface(118,90,msg[153],screen);
    }
    else{
 dev[0]=48+(eventlist[np*5+2].dd%100)/10;
dev[1]=48+eventlist[np*5+2].dd%10;
dev[2]='\0';
msg[169]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,150,msg[169],screen);
 }if(edtslt==4)
    {

    apply_surface(118,90,msg[154],screen);
    }
    else{
msg[170]=TTF_RenderText_Solid(font[5],eventlist[np*5+2].tl,textColor7);
apply_surface(300,150,msg[162],screen);
    }
if(x>118 && y>150 &&y<170)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+2].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+2].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//4th row
if(vw>np*5+3)
{
     if(edtslt==1)
    {

    apply_surface(118,90,msg[151],screen);
    }
    else{
yev[0]=48+eventlist[np*5+3].yy/1000;
yev[1]=48+(eventlist[np*5+3].yy%1000)/100;
yev[2]=48+(eventlist[np*5+3].yy%100)/10;
yev[3]=48+eventlist[np*5+3].yy%10;
yev[4]='\0';
 msg[171]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,180,msg[171],screen);}
  if(edtslt==2)
    {

    apply_surface(118,90,msg[152],screen);
    }
    else{
 mev[0]=48+(eventlist[np*5+3].mm%100)/10;
mev[1]=48+eventlist[np*5+3].mm%10;
mev[2]='\0';
 msg[172]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,180,msg[172],screen);}
if(edtslt==3)
    {

    apply_surface(118,90,msg[153],screen);
    }
    else{
 dev[0]=48+(eventlist[np*5+3].dd%100)/10;
dev[1]=48+eventlist[np*5+3].dd%10;
dev[2]='\0';
msg[173]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,180,msg[173],screen);
} if(edtslt==4)
    {

    apply_surface(118,90,msg[154],screen);
    }
    else{
msg[174]=TTF_RenderText_Solid(font[5],eventlist[np*5+3].tl,textColor7);
apply_surface(300,180,msg[174],screen);
}
if(x>118 && y>180 &&y<200)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+3].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+3].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//5th row
if(vw>np*5+4)
{
     if(edtslt==1)
    {

    apply_surface(118,90,msg[151],screen);
    }
    else{
yev[0]=48+eventlist[np*5+4].yy/1000;
yev[1]=48+(eventlist[np*5+4].yy%1000)/100;
yev[2]=48+(eventlist[np*5+4].yy%100)/10;
yev[3]=48+eventlist[np*5+4].yy%10;
yev[4]='\0';
 msg[175]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,210,msg[175],screen);}
  if(edtslt==2)
    {

    apply_surface(118,90,msg[152],screen);
    }
    else{
 mev[0]=48+(eventlist[np*5+4].mm%100)/10;
mev[1]=48+eventlist[np*5+4].mm%10;
mev[2]='\0';
 msg[176]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,210,msg[176],screen);}
if(edtslt==3)
    {

    apply_surface(118,90,msg[153],screen);
    }
    else{
 dev[0]=48+(eventlist[np*5+4].dd%100)/10;
dev[1]=48+eventlist[np*5+4].dd%10;
dev[2]='\0';
msg[177]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,210,msg[177],screen);
}
 if(edtslt==4)
    {

    apply_surface(118,90,msg[154],screen);
    }
    else{
msg[178]=TTF_RenderText_Solid(font[5],eventlist[np*5+4].tl,textColor7);
apply_surface(300,210,msg[178],screen);
}
if(x>118 && y>210 &&y<230)
{
     SDL_FreeSurface(msg[179]);
    SDL_FreeSurface(msg[180]);
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+4].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+4].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
}
void deleteevent()
{
    SDL_FreeSurface(msg[159]);
    SDL_FreeSurface(msg[160]);
    SDL_FreeSurface(msg[161]);
    SDL_FreeSurface(msg[162]);
    SDL_FreeSurface(msg[163]);
    SDL_FreeSurface(msg[164]);
    SDL_FreeSurface(msg[165]);
    SDL_FreeSurface(msg[166]);
    SDL_FreeSurface(msg[167]);
    SDL_FreeSurface(msg[168]);
    SDL_FreeSurface(msg[169]);
    SDL_FreeSurface(msg[170]);
    SDL_FreeSurface(msg[171]);
    SDL_FreeSurface(msg[172]);
    SDL_FreeSurface(msg[173]);
    SDL_FreeSurface(msg[174]);
    SDL_FreeSurface(msg[175]);
    SDL_FreeSurface(msg[176]);
    SDL_FreeSurface(msg[177]);
    SDL_FreeSurface(msg[178]);

  fp=fopen("object\\event.mp3","r+");
    vw=0;
while(fread(&eventlist[vw],sizeof(eventlist[vw]),1,fp)!=NULL)
{
    vw++;
}
fclose(fp);
if(vw>np*5)
{
yev[0]=48+eventlist[np*5+0].yy/1000;
yev[1]=48+(eventlist[np*5+0].yy%1000)/100;
yev[2]=48+(eventlist[np*5+0].yy%100)/10;
yev[3]=48+eventlist[np*5+0].yy%10;
yev[4]='\0';
 msg[159]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,90,msg[159],screen);
 mev[0]=48+(eventlist[np*5+0].mm%100)/10;
mev[1]=48+eventlist[np*5+0].mm%10;
mev[2]='\0';
 msg[160]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,90,msg[160],screen);

 dev[0]=48+(eventlist[np*5+0].dd%100)/10;
dev[1]=48+eventlist[np*5+0].dd%10;
dev[2]='\0';
msg[161]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,90,msg[161],screen);
msg[162]=TTF_RenderText_Solid(font[5],eventlist[np*5+0].tl,textColor7);
apply_surface(300,90,msg[162],screen);
if(x>118 && y>90 &&y<110)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+0].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+0].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//2nd row
if(vw>np*5+1)
{
yev[0]=48+eventlist[np*5+1].yy/1000;
yev[1]=48+(eventlist[np*5+1].yy%1000)/100;
yev[2]=48+(eventlist[np*5+1].yy%100)/10;
yev[3]=48+eventlist[np*5+1].yy%10;
yev[4]='\0';
 msg[163]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,120,msg[163],screen);
 mev[0]=48+(eventlist[np*5+1].mm%100)/10;
mev[1]=48+eventlist[np*5+1].mm%10;
mev[2]='\0';
 msg[164]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,120,msg[164],screen);

 dev[0]=48+(eventlist[np*5+1].dd%100)/10;
dev[1]=48+eventlist[np*5+1].dd%10;
dev[2]='\0';
msg[165]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,120,msg[165],screen);
msg[166]=TTF_RenderText_Solid(font[5],eventlist[np*5+1].tl,textColor7);
apply_surface(300,120,msg[166],screen);
if(x>118 && y>120 &&y<140)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+1].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+1].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//3rd row
if(vw>np*5+2)
{
yev[0]=48+eventlist[np*5+2].yy/1000;
yev[1]=48+(eventlist[np*5+2].yy%1000)/100;
yev[2]=48+(eventlist[np*5+2].yy%100)/10;
yev[3]=48+eventlist[np*5+2].yy%10;
yev[4]='\0';
 msg[167]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,150,msg[167],screen);
 mev[0]=48+(eventlist[np*5+2].mm%100)/10;
mev[1]=48+eventlist[np*5+2].mm%10;
mev[2]='\0';
 msg[168]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,150,msg[168],screen);

 dev[0]=48+(eventlist[np*5+2].dd%100)/10;
dev[1]=48+eventlist[np*5+2].dd%10;
dev[2]='\0';
msg[169]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,150,msg[169],screen);
msg[170]=TTF_RenderText_Solid(font[5],eventlist[np*5+2].tl,textColor7);
apply_surface(300,150,msg[162],screen);
if(x>118 && y>150 &&y<170)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+2].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+2].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//4th row
if(vw>np*5+3)
{
yev[0]=48+eventlist[np*5+3].yy/1000;
yev[1]=48+(eventlist[np*5+3].yy%1000)/100;
yev[2]=48+(eventlist[np*5+3].yy%100)/10;
yev[3]=48+eventlist[np*5+3].yy%10;
yev[4]='\0';
 msg[171]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,180,msg[171],screen);
 mev[0]=48+(eventlist[np*5+3].mm%100)/10;
mev[1]=48+eventlist[np*5+3].mm%10;
mev[2]='\0';
 msg[172]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,180,msg[172],screen);

 dev[0]=48+(eventlist[np*5+3].dd%100)/10;
dev[1]=48+eventlist[np*5+3].dd%10;
dev[2]='\0';
msg[173]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,180,msg[173],screen);
msg[174]=TTF_RenderText_Solid(font[5],eventlist[np*5+3].tl,textColor7);
apply_surface(300,180,msg[174],screen);

if(x>118 && y>180 &&y<200)
{
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+3].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+3].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
//5th row
if(vw>np*5+4)
{
yev[0]=48+eventlist[np*5+4].yy/1000;
yev[1]=48+(eventlist[np*5+4].yy%1000)/100;
yev[2]=48+(eventlist[np*5+4].yy%100)/10;
yev[3]=48+eventlist[np*5+4].yy%10;
yev[4]='\0';
 msg[175]=TTF_RenderText_Solid(font[5],yev,textColor7);
 apply_surface(118,210,msg[175],screen);
 mev[0]=48+(eventlist[np*5+4].mm%100)/10;
mev[1]=48+eventlist[np*5+4].mm%10;
mev[2]='\0';
 msg[176]=TTF_RenderText_Solid(font[5],mev,textColor7);
apply_surface(190,210,msg[176],screen);

 dev[0]=48+(eventlist[np*5+4].dd%100)/10;
dev[1]=48+eventlist[np*5+4].dd%10;
dev[2]='\0';
msg[177]=TTF_RenderText_Solid(font[5],dev,textColor7);
apply_surface(240,210,msg[177],screen);
msg[178]=TTF_RenderText_Solid(font[5],eventlist[np*5+4].tl,textColor7);
apply_surface(300,210,msg[178],screen);

if(x>118 && y>210 &&y<230)
{
     SDL_FreeSurface(msg[179]);
    SDL_FreeSurface(msg[180]);
msg[179]=TTF_RenderText_Solid(font[5],eventlist[np*5+4].d1,textColor7);
apply_surface(118,250,msg[179],screen);

msg[180]=TTF_RenderText_Solid(font[5],eventlist[np*5+4].d2,textColor7);
apply_surface(118,300,msg[180],screen);
}
}
}


char fname[100];
int leng=0;
int same=0;
int getadd=0;
int blink=0;
char lodimg[150];
void clear();
char pagepos[10];
char copysec[150];
void clearstruct()
{
int lenofs,ii=0;
while(ii<=30)
{
for(lenofs=strlen(hide[ii].add);lenofs>0;lenofs--)
{
hide[ii].add[lenofs]='\0';
}
for(lenofs=strlen(hide[ii].fname);lenofs>0;lenofs--)
{
hide[ii].fname[lenofs]='\0';
}
ii++;
}
}
void foldname()
{
if(addfolder==1)
{
 if( event.type == SDL_KEYDOWN )
    {
  std::string temp = str1;

        //If the string less than maximum size
        if( str1.length() <=100)
        {
            //If the key is a space
               //If backspace was pressed and the string isn't blank
        if( ( event.key.keysym.sym == SDLK_BACKSPACE ) && (str1.length() != 0 )&&mupd==0 )
        {
            mupd=1;
            //Remove a character from the end

            leng--;
            fname[leng]='\0';
             str1.erase( str1.length() - 1 );
        }
            else if( event.key.keysym.unicode ==SDLK_RETURN &&mupd==0 )
            {
                mupd=1;
                //Append the character
                str1+='\0';
                fname[leng]='\0';
                getadd=1;
                same=0;
            }
            else if(mupd==0&&( event.key.keysym.sym != SDLK_LSHIFT ) &&( event.key.keysym.sym != SDLK_RSHIFT ) )
            {
                mupd=1;
                str1 += (char)event.key.keysym.unicode;
                fname[leng]=(char)event.key.keysym.unicode;
                leng++;

                }
        }



        //If the string was changed            //Free the old surface
            if(fadd!=NULL)
            SDL_FreeSurface( fadd );

            fadd = TTF_RenderText_Solid( font[0], str1.c_str(), textColor );


    }
if(event.type == SDL_KEYUP)
{
    mupd=0;
}
}

}
void hideme()
{
    int passck=0;
    int datalp=0,blanklp=0;
    int fillp=0;
    int totfile=0;


    SDL_Surface *addfol=NULL;
 char a[20];
 foldname();
clearstruct();
 fp=fopen("object\\hide.mp3","r+");
 datalp=0;
while(fread(&hide[datalp],sizeof(hide[datalp]),1,fp)!=NULL)
{

    if(strcmp((hide[datalp].add),fname)==0)
    {
        same=1;
    }
datalp++;
}
fclose(fp);


apply_surface(100,55,lockwin,screen);
if(getadd==1)
{
    //check the input is done or not
if(strlen(fname)>0)
{
    //check the this folder is again add
 if( same ==0 )
 {
SDL_FreeSurface(ckfolder);
strcpy(copysec,"copy object\\ckfold.jpg ");
strcat(copysec,fname);
system(copysec);

strcpy(lodimg,fname);
strcat(lodimg,"\\ckfold.jpg");
ckfolder = load_image( lodimg );
//check the folder is there or not
if(ckfolder != NULL)
{
     int hi,hs=0;
     char temp[20];

     for(hi=strlen(fname)-1;fname[hi]!='\\';hi--)
     {
        hide[datalp].fname[hs]=fname[hi];
        hs++;
     }
     hide[datalp].fname[hs]='\0';
     strrev( hide[datalp].fname);

strcpy(temp,"attrib ");
strcat(temp,fname);
strcat(temp," +s +h");

     strcpy(hide[datalp].add,fname);
    system(temp);
    fp=fopen("object\\hide.mp3","a+");
     fwrite(&hide[datalp],sizeof(hide[datalp]),1,fp);
    fclose(fp);


}
else
{
MessageBox(0,"Sorry File Is Not Found","warning",MB_OK);

}



}
else if(same == 1)
{
    same=0;
MessageBox(0,"it is already done","warning",MB_OK);
 }
}
else
{

MessageBox(0,"Please Enter The Address","Warning",MB_OK);
}

clear();
}

 for(fillp=showhidepage*10;fillp<10+showhidepage*10&&fillp<datalp;fillp++)
 {
     totfile++;
//if(showhidepage*10+selecthide)
 }

 if(addfolder==1)
 {
blink++;
if(blink>=0 && blink<=30)
{
if(fadd!=NULL )
apply_surface(150+fadd->w,425,line,screen);
else
apply_surface(150,425,line,screen);
}
else
{
    if(blink>=40)
    blink=0;
}
 SDL_FreeSurface(addfol);
 addfol=TTF_RenderText_Solid(font[0],"Write The Your hide folder address",textColor3);
 apply_surface(150,400,addfol,screen);
 if(getadd==1)
 {
 getadd=0;
 addfolder=0;
clear();
apply_surface(150,425,fadd,screen);
 }
if(fadd!=NULL)
 apply_surface(150,425,fadd,screen);
 }
 else if(addfolder==0)
 {
SDL_FreeSurface(addfol);
 addfol=TTF_RenderText_Solid(font[0],"ADD HERE",textColor5);
 apply_surface(150,400,addfol,screen);

 }




 if(totfile>=1)
 {
 SDL_FreeSurface(lockfol[0]);
lockfol[0] = load_image( "object\\lockfile.jpg" );
apply_surface(105,60,lockfol[0],screen);
SDL_FreeSurface(msg[101]);
    msg[101]=TTF_RenderText_Solid(font[0],hide[showhidepage*10].fname,textColor1);
apply_surface(160,60,msg[101],screen);

SDL_FreeSurface(msg[111]);
if((x>155&&x<230 && y>85 && y<95))
msg[111]=TTF_RenderText_Solid(font[0],"unlock me",textColor);
else
msg[111]=TTF_RenderText_Solid(font[0],"unlock me",textColor7);
apply_surface(160,80,msg[111],screen);

SDL_FreeSurface(msg[121]);
if((x>275&&x<390 && y>65 && y<105)||(x>105&&x<150 && y>60 && y<110))
msg[121]=TTF_RenderText_Solid(font1,"<< OPEN",textColor);
else
msg[121]=TTF_RenderText_Solid(font1,"<< OPEN",textColor7);
apply_surface(275,65,msg[121],screen);

 }
 if(totfile>=2)
 {
 SDL_FreeSurface(lockfol[1]);
lockfol[1] = load_image( "object\\lockfile.jpg" );
apply_surface(105,120,lockfol[1],screen);
SDL_FreeSurface(msg[102]);
    msg[102]=TTF_RenderText_Solid(font[0],hide[showhidepage*10+1].fname,textColor1);
apply_surface(160,120,msg[102],screen);


SDL_FreeSurface(msg[112]);
if((x>155&&x<230 && y>85+60 && y<95+60))
msg[112]=TTF_RenderText_Solid(font[0],"unlock me",textColor);
else
msg[112]=TTF_RenderText_Solid(font[0],"unlock me",textColor7);
apply_surface(160,80+60,msg[112],screen);

SDL_FreeSurface(msg[122]);
if((x>275&&x<390 && y>65+58 && y<105+58)||(x>105&&x<150 && y>60+58 && y<110+58))
msg[122]=TTF_RenderText_Solid(font1,"<< OPEN",textColor);
else
msg[122]=TTF_RenderText_Solid(font1,"<< OPEN",textColor7);
apply_surface(275,65+58,msg[122],screen);


 }
 if(totfile>=3)
 {
 SDL_FreeSurface(lockfol[2]);
lockfol[2] = load_image( "object\\lockfile.jpg" );
apply_surface(105,180,lockfol[2],screen);
SDL_FreeSurface(msg[103]);
    msg[103]=TTF_RenderText_Solid(font[0],hide[showhidepage*10+2].fname,textColor1);
apply_surface(160,180,msg[103],screen);


SDL_FreeSurface(msg[113]);
if((x>155&&x<230 && y>85+60*2 && y<95+60*2))
msg[113]=TTF_RenderText_Solid(font[0],"unlock me",textColor);
else
msg[113]=TTF_RenderText_Solid(font[0],"unlock me",textColor7);
apply_surface(160,80+60*2,msg[113],screen);

SDL_FreeSurface(msg[123]);
if((x>275&&x<390 && y>65+58*2 && y<105+58*2)||(x>105&&x<150 && y>60+58*2 && y<110+58*2))
msg[123]=TTF_RenderText_Solid(font1,"<< OPEN",textColor);
else
msg[123]=TTF_RenderText_Solid(font1,"<< OPEN",textColor7);
apply_surface(275,65+58*2,msg[123],screen);

 }
 if(totfile>=4)
 {
 SDL_FreeSurface(lockfol[3]);
lockfol[3] = load_image( "object\\lockfile.jpg" );
apply_surface(105,240,lockfol[3],screen);
SDL_FreeSurface(msg[104]);
    msg[104]=TTF_RenderText_Solid(font[0],hide[showhidepage*10+3].fname,textColor1);
apply_surface(160,240,msg[104],screen);


SDL_FreeSurface(msg[114]);
if((x>155&&x<230 && y>85+60*3 && y<95+60*3))
msg[114]=TTF_RenderText_Solid(font[0],"unlock me",textColor);
else
msg[114]=TTF_RenderText_Solid(font[0],"unlock me",textColor7);
apply_surface(160,80+60*3,msg[114],screen);

SDL_FreeSurface(msg[124]);
if((x>275&&x<390 && y>65+58*3 && y<105+58*3)||(x>105&&x<150 && y>60+58*3 && y<110+58*3))
msg[124]=TTF_RenderText_Solid(font1,"<< OPEN",textColor);
else
msg[124]=TTF_RenderText_Solid(font1,"<< OPEN",textColor7);
apply_surface(275,65+58*3,msg[124],screen);

 }
 if(totfile>=5)
 {
 SDL_FreeSurface(lockfol[4]);
lockfol[4] = load_image( "object\\lockfile.jpg" );
apply_surface(105,300,lockfol[4],screen);
SDL_FreeSurface(msg[105]);
    msg[105]=TTF_RenderText_Solid(font[0],hide[showhidepage*10+4].fname,textColor1);
apply_surface(160,300,msg[105],screen);


SDL_FreeSurface(msg[115]);
if((x>155&&x<230 && y>85+60*4 && y<95+60*4))
msg[115]=TTF_RenderText_Solid(font[0],"unlock me",textColor);
else
msg[115]=TTF_RenderText_Solid(font[0],"unlock me",textColor7);
apply_surface(160,80+60*4,msg[115],screen);

SDL_FreeSurface(msg[124]);
if((x>275&&x<390 && y>65+58*4 && y<105+58*4)||(x>105&&x<150 && y>60+58*4 && y<110+58*4))
msg[125]=TTF_RenderText_Solid(font1,"<< OPEN",textColor);
else
msg[125]=TTF_RenderText_Solid(font1,"<< OPEN",textColor7);
apply_surface(275,65+58*4,msg[125],screen);

 }
 if(totfile>=6)
 {
 SDL_FreeSurface(lockfol[5]);
lockfol[5] = load_image( "object\\lockfile.jpg" );
apply_surface(405,60,lockfol[5],screen);
SDL_FreeSurface(msg[106]);
    msg[106]=TTF_RenderText_Solid(font[0],hide[showhidepage*10+5].fname,textColor1);
apply_surface(460,60,msg[106],screen);



SDL_FreeSurface(msg[116]);
if((x>455&&x<530 && y>85 && y<95))
msg[116]=TTF_RenderText_Solid(font[0],"unlock me",textColor);
else
msg[116]=TTF_RenderText_Solid(font[0],"unlock me",textColor7);
apply_surface(460,80,msg[116],screen);

SDL_FreeSurface(msg[126]);
if((x>575&&x<690 && y>65 && y<105)||(x>405&&x<450 && y>60 && y<110+58))
msg[126]=TTF_RenderText_Solid(font1,"<< OPEN",textColor);
else
msg[126]=TTF_RenderText_Solid(font1,"<< OPEN",textColor7);
apply_surface(575,65,msg[126],screen);

 }
 if(totfile>=7)
 {
 SDL_FreeSurface(lockfol[6]);
lockfol[6] = load_image( "object\\lockfile.jpg" );
apply_surface(405,120,lockfol[6],screen);
SDL_FreeSurface(msg[107]);
    msg[107]=TTF_RenderText_Solid(font[0],hide[showhidepage*10+6].fname,textColor1);
apply_surface(460,120,msg[107],screen);


SDL_FreeSurface(msg[117]);
if((x>455&&x<530 && y>85+60 && y<95+60))
msg[117]=TTF_RenderText_Solid(font[0],"unlock me",textColor);
else
msg[117]=TTF_RenderText_Solid(font[0],"unlock me",textColor7);
apply_surface(460,80+60,msg[117],screen);

SDL_FreeSurface(msg[127]);
if((x>575&&x<690 && y>65+58 && y<105+58)||(x>405&&x<450 && y>60+58 && y<110+58))
msg[127]=TTF_RenderText_Solid(font1,"<< OPEN",textColor);
else
msg[127]=TTF_RenderText_Solid(font1,"<< OPEN",textColor7);
apply_surface(575,65+58,msg[127],screen);

 }
 if(totfile>=8)
 {
 SDL_FreeSurface(lockfol[7]);
lockfol[7] = load_image( "object\\lockfile.jpg" );
apply_surface(405,180,lockfol[7],screen);
SDL_FreeSurface(msg[108]);
    msg[108]=TTF_RenderText_Solid(font[0],hide[showhidepage*10+7].fname,textColor1);
apply_surface(460,180,msg[108],screen);


SDL_FreeSurface(msg[118]);
if((x>455&&x<530 && y>85+60*2 && y<95+60*2))
msg[118]=TTF_RenderText_Solid(font[0],"unlock me",textColor);
else
msg[118]=TTF_RenderText_Solid(font[0],"unlock me",textColor7);
apply_surface(460,80+60*2,msg[118],screen);

SDL_FreeSurface(msg[128]);
if((x>575&&x<690 && y>65+58*2 && y<105+58*2)||(x>405&&x<450 && y>60+58*2 && y<110+58*2))
msg[128]=TTF_RenderText_Solid(font1,"<< OPEN",textColor);
else
msg[128]=TTF_RenderText_Solid(font1,"<< OPEN",textColor7);
apply_surface(575,65+58*2,msg[128],screen);

 }
 if(totfile>=9)
 {
 SDL_FreeSurface(lockfol[8]);
lockfol[8] = load_image( "object\\lockfile.jpg" );
apply_surface(405,240,lockfol[8],screen);
SDL_FreeSurface(msg[109]);
    msg[109]=TTF_RenderText_Solid(font[0],hide[showhidepage*10+8].fname,textColor1);
apply_surface(460,240,msg[109],screen);


SDL_FreeSurface(msg[119]);
if((x>455&&x<530 && y>85+60*3 && y<95+60*3))
msg[119]=TTF_RenderText_Solid(font[0],"unlock me",textColor);
else
msg[119]=TTF_RenderText_Solid(font[0],"unlock me",textColor7);
apply_surface(460,80+60*3,msg[119],screen);

SDL_FreeSurface(msg[129]);
if((x>575&&x<690 && y>65+58*3 && y<105+58*3)||(x>405&&x<450 && y>60+58*3 && y<110+58*3))
msg[129]=TTF_RenderText_Solid(font1,"<< OPEN",textColor);
else
msg[129]=TTF_RenderText_Solid(font1,"<< OPEN",textColor7);
apply_surface(575,65+58*3,msg[129],screen);

 }
 if(totfile>=10)
 {
 SDL_FreeSurface(lockfol[9]);
lockfol[9] = load_image( "object\\lockfile.jpg" );
apply_surface(405,300,lockfol[9],screen);
SDL_FreeSurface(msg[110]);
    msg[110]=TTF_RenderText_Solid(font[0],hide[showhidepage*10+9].fname,textColor1);
apply_surface(460,300,msg[110],screen);


SDL_FreeSurface(msg[120]);
if((x>455&&x<530 && y>85+60*4 && y<95+60*4))
msg[120]=TTF_RenderText_Solid(font[0],"unlock me",textColor);
else
msg[120]=TTF_RenderText_Solid(font[0],"unlock me",textColor7);
apply_surface(460,80+60*4,msg[120],screen);

SDL_FreeSurface(msg[130]);
if((x>575&&x<690 && y>65+58*4 && y<105+58*4)||(x>405&&x<450 && y>60+58*4 && y<110+58*4))
msg[130]=TTF_RenderText_Solid(font1,"<< OPEN",textColor);
else
msg[130]=TTF_RenderText_Solid(font1,"<< OPEN",textColor7);
apply_surface(575,65+58*4,msg[130],screen);

 }
 totfile=0;


SDL_FreeSurface(msg[131]);
if(x>120&&x<239&&y>355&&y<380)
msg[131]=TTF_RenderText_Solid(font1,"<< BACK",textColor);
else
msg[131]=TTF_RenderText_Solid(font1,"<< BACK",textColor5);
apply_surface(120,355,msg[131],screen);


SDL_FreeSurface(msg[132]);
if(x>300 && x<420&& y>355 && y<380)
msg[132]=TTF_RenderText_Solid(font1,"NEXT >>",textColor);
else
msg[132]=TTF_RenderText_Solid(font1,"NEXT >>",textColor5);
apply_surface(300,355,msg[132],screen);

 if(showhidepage>=(datalp/10))
    {
    showhidepage=datalp/10;
    }

SDL_FreeSurface(msg[133]);
strcpy(pagepos,"page no. ");
pagepos[9]=48+(showhidepage+1)/10;
pagepos[10]=48+(showhidepage+1)%10;
strcat(pagepos," / ");
pagepos[14]=48+(datalp/10+1)/10;
pagepos[15]=48+(datalp/10+1)%10;
pagepos[16]='\0';
msg[133]=TTF_RenderText_Solid(font[0],pagepos,textColor);
apply_surface(580,380,msg[133],screen);

}
void clear()
{
while((str1.length() != 0 ))
{
    str1.erase( str1.length() - 1 );

}
addfolder=0;
for(leng=strlen(fname);leng>0;leng--)
{
    fname[leng]='\0';
}
for(leng=strlen(lodimg);leng>0;leng--)
{
    lodimg[leng]='\0';
}
for(leng=strlen(copysec);leng>0;leng--)
{
    copysec[leng]='\0';
}

            fadd = TTF_RenderText_Solid( font[0], str1.c_str(), textColor );
getadd=0;
for(leng=strlen(pagepos);leng>0;leng--)
{
    pagepos[leng]='\0';
}
}

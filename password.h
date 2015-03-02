int clp=0;
void clearall()
{
while((str.length() != 0 ))
{
  str.erase( str.length() - 1 );
  len--;
                password[len]='\0';
}

while((str2.length() != 0 ))
{
  str2.erase( str2.length() - 1 );
   sp1--;
                    p1[sp1]='\0';
}

while((str3.length() != 0 ))
{
  str3.erase( str3.length() - 1 );
   sp2--;
                    p2[sp2]='\0';
}
cpassv=0;
step=0;
len=0;
sp2=0;
sp1=0;
  //Free the old surface
            SDL_FreeSurface( pass );

            //Render a new text surface
            pass = TTF_RenderText_Solid( font[7], str.c_str(), textColor );


             SDL_FreeSurface( pass1 );

            //Render a new text surface
            pass1 = TTF_RenderText_Solid( font[7], str2.c_str(), textColor );

              SDL_FreeSurface( pass2 );

            //Render a new text surface
            pass2 = TTF_RenderText_Solid( font[7], str3.c_str(), textColor );


}
void getpass()
{
    if( event.type == SDL_KEYDOWN )
    {

        //Keep a copy of the current version of the string
        std::string temp = str;
        std::string temp2 = str2;
        std::string temp3 = str3;



        //If the string less than maximum size
        if( str.length() <=100)
        {
             if( ( event.key.keysym.sym == SDLK_BACKSPACE )  &&mupd==0 )
        {
             mupd=1;
            //Remove a character from the end

              if(step==0&&(str.length() != 0 ))
                {
                    str.erase( str.length() - 1 );
                    len--;
                password[len]='\0';

                }
                else if(step==1&&(str2.length() != 0 ))
                {
                    str2.erase( str2.length() - 1 );
                    sp1--;
                    p1[sp1]='\0';

                }
                else if(step==2&&(str3.length() != 0 ))
                {
                    str3.erase( str3.length() - 1 );
                    sp2--;
                  p2[sp2]='\0';
                }

        }
          else if( event.key.keysym.unicode ==SDLK_RETURN &&mupd==0 )
            {
mupd=1;
                if(step==0)
                {
                    cpassv=1;
                    str += '\0';
                password[len]='\0';
                if(passresult==0)
                {
                    passresult=1;
                }
                else
                    step=1;

                }
                else if(step==1)
                {
                    step=2;
                    p1[sp1]='\0';
                   str2 += '\0';
                }
                else if(step==2)
                {
                    step=3;
                  p2[sp2]='\0';
                  str3 += '\0';
                }
            }

           else if(mupd==0&&( event.key.keysym.sym != SDLK_LSHIFT ) &&( event.key.keysym.sym != SDLK_RSHIFT ) )
            {
                mupd=1;
                //Append the character

                if(step==0)
                {
                    str += '*';
                password[len]=(char)event.key.keysym.unicode;
                len++;
                }
                else if(step==1)
                {
                    str2 += '*';
                p1[sp1]=(char)event.key.keysym.unicode;
                sp1++;
                }
                else if(step==2)
                {
                    str3 += '*';
                  p2[sp2]=(char)event.key.keysym.unicode;
                sp2++;
                }
            }


        }
        //If the string was changed
        if( str != temp )
        {
            //Free the old surface
            SDL_FreeSurface( pass );

            //Render a new text surface
            pass = TTF_RenderText_Solid( font[7], str.c_str(), textColor );

        }
         if( str2 != temp2 )
        {
             SDL_FreeSurface( pass1 );

            //Render a new text surface
            pass1 = TTF_RenderText_Solid( font[7], str2.c_str(), textColor );
        }
         if(str3!=temp3)
        {
              SDL_FreeSurface( pass2 );

            //Render a new text surface
            pass2 = TTF_RenderText_Solid( font[7], str3.c_str(), textColor );
        }
    }
if(event.type == SDL_KEYUP)
{
    mupd=0;
}

}
void cpassws()
{
    char kk[100];
    SDL_Surface *passmsg=NULL;
    getpass();
 if(anotherwin!=5)
        {
        anotherwin=5;
        xc=300;
        yc=200;
       SCREEN_HEIGHT=150;
       SCREEN_WIDTH=300;
        screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE | SDL_NOFRAME );

        }
       if(anotherwin==5)
        {
            SDL_FreeSurface(passnw);
            passnw=load_image("object\\pass.jpg");
            apply_surface(0,0,passnw,screen);
        }
         if(cpassv==0)
        {
        apply_surface(3,50,pass,screen);
        }
        else if(cpassv==1)
        {
            fp=fopen("object\\pas.mp3","r+");
            fread(&kk,sizeof(kk),1,fp);
            fclose(fp);
            if(strcmp(password,kk)==0)
            {




            }
            else
            {


             SDL_FreeSurface(pass);
            len=0;

            }
        }

}
void renamepass()
{
    char ops[100];
    SDL_FreeSurface(msg[134]);
    msg[134]=TTF_RenderText_Solid(font[0],"Enter Your Old Password",textColor);
    apply_surface(150,150,msg[134],screen);
    SDL_FreeSurface(msg[135]);
    msg[135]=TTF_RenderText_Solid(font[0],"Enter New Password",textColor);
    apply_surface(150,220,msg[135],screen);
    SDL_FreeSurface(msg[136]);
    msg[136]=TTF_RenderText_Solid(font[0],"Again Enter Password",textColor);
    apply_surface(150,290,msg[136],screen);

    getpass();
    if(step>=0)
    {
    apply_surface(150,170,pass,screen);
    }
    if(step>=1)
    {
    apply_surface(150,240,pass1,screen);
    }
    if(step>=2)
    {
    apply_surface(150,310,pass2,screen);
    }
    if(step==3)
    {
            fp=fopen("object\\pas.mp3","r+");
            if(fp==NULL)
            {
                strcpy(ops,"");
                fclose(fp);
                fp=fopen("object\\pas.mp3","w+");
                fwrite(&ops,sizeof(ops),1,fp);
                fclose(fp);
            }
            fread(&ops,sizeof(ops),1,fp);
            fclose(fp);
            if(strcmp(password,ops)==0 )
            {
                if(strcmp(p1,p2)==0)
                {
                fp=fopen("object\\pas.mp3","w+");
                fwrite(&p1,sizeof(p1),1,fp);
                fclose(fp);
                passresult=0;
                MessageBox(0,"Your password is successfully changed","password changed",MB_OK);


                }
                else
                {
                     MessageBox(0,"New password doesn't match","Doesn't match",MB_OK);



                }
            }
            else
            {
                 MessageBox(0,"Old password doesn't match","wrong",MB_OK);

            }
             clearall();
    }
}
void cpassw()
{
    char kk[100];
    SDL_Surface *passmsg=NULL;
    getpass();
    if(mmc==5)
    {
        if(cpassv==0)
        {
        SDL_FreeSurface(passmsg);
        passmsg=TTF_RenderText_Solid(font[0],"ENTER THE PASSWORD",textColor);
        apply_surface(150,75,passmsg,screen);
        apply_surface(150,100,pass,screen);


         SDL_FreeSurface(msg[134]);
         if(x>150&&x<300&&y>300&&y<310)
        msg[134]=TTF_RenderText_Solid(font[0],"change password",textColor);
        else
         msg[134]=TTF_RenderText_Solid(font[0],"change password",textColor7);
        apply_surface(150,300,msg[134],screen);
        }
        else if(cpassv==1)
        {
            for(clp=strlen(kk);clp>0;clp--)
            {
                kk[clp]='\0';
            }
            fp=fopen("object\\pas.mp3","r+");
            fread(&kk,sizeof(kk),1,fp);
            fclose(fp);

            if(strcmp(password,kk)==0)
            {

            passresult=1;


            }
            else
            {
                passresult=0;
             SDL_FreeSurface(passmsg);
        passmsg=TTF_RenderText_Solid(font1,"YOUR PASSWORD IS WRONG",textColor7);
        apply_surface(150,75,passmsg,screen);
            }
        }

    }




}

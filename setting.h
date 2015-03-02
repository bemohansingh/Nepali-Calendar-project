
void settings()
{
    char v[50];
    if(mms[0].lonof==1)
    {
        SDL_FreeSurface(msg[0]);
    msg[0]=TTF_RenderText_Solid(font[0],"My computer should run <<      >> hour <<     >> minute, in a day",textColor);

    apply_surface(105,72,off,screen);
    SDL_FreeSurface(setting[0]);
    SDL_FreeSurface(setting[1]);
    v[0]=48+mms[0].h/10;
    v[1]=48+mms[0].h%10;
    v[2]='\0';
    setting[0]=TTF_RenderText_Solid(font[4],v,textColor1);
     v[0]=48+mms[0].m/10;
    v[1]=48+mms[0].m%10;
    v[2]='\0';
    setting[1]=TTF_RenderText_Solid(font[4],v,textColor1);
    apply_surface(333,72,setting[0],screen);
    apply_surface(425,72,setting[1],screen);
    }
    else
    {
         SDL_FreeSurface(msg[0]);
    msg[0]=TTF_RenderText_Solid(font[0],"My computer should run <<**>> hour <<**>> minute, in a day",textColor1);

        apply_surface(105,72,on,screen);
    }

   apply_surface(150,75,msg[0],screen);


 if(mms[1].lonof==1)
    {
    SDL_FreeSurface(msg[1]);
    SDL_FreeSurface(setting[2]);
    SDL_FreeSurface(setting[3]);
    v[0]=48+mms[1].h/10;
    v[1]=48+mms[1].h%10;
    v[2]='\0';
    setting[2]=TTF_RenderText_Solid(font[4],v,textColor1);
     v[0]=48+mms[1].m/10;
    v[1]=48+mms[1].m%10;
    v[2]='\0';
    msg[1]=TTF_RenderText_Solid(font[0],"My computer should run continue<<      >>hour<<      >>minute, at a time",textColor);
     apply_surface(105,122,off,screen);
     setting[3]=TTF_RenderText_Solid(font[4],v,textColor1);
    apply_surface(392,122,setting[2],screen);
    apply_surface(478,122,setting[3],screen);
    }
    else
    {
      SDL_FreeSurface(msg[1]);
    msg[1]=TTF_RenderText_Solid(font[0],"My computer should run continue<<**>>hour<<**>>minute, at a time",textColor1);
      apply_surface(105,122,on,screen);
    }
    apply_surface(150,125,msg[1],screen);


if(mms[2].lonof==1)
    {
    SDL_FreeSurface(msg[2]);
    SDL_FreeSurface(setting[4]);
    v[0]=48+mms[2].bl/10;
    v[1]=48+mms[2].bl%10;
    v[2]='\0';
    setting[4]=TTF_RenderText_Solid(font[4],v,textColor1);
    msg[2]=TTF_RenderText_Solid(font[0],"Warning to me if battery power is less than<<      %>>",textColor);
    apply_surface(105,172,off,screen);
    apply_surface(457,172,setting[4],screen);
    }
    else
    {
SDL_FreeSurface(msg[2]);
    msg[2]=TTF_RenderText_Solid(font[0],"Warning to me if battery power is less than<<***>>",textColor1);
apply_surface(105,172,on,screen);
    }
    apply_surface(150,175,msg[2],screen);


if(mms[3].lonof==1)
    {
    SDL_FreeSurface(msg[3]);
    msg[3]=TTF_RenderText_Solid(font[0],"Battery! fully charged",textColor);
    apply_surface(105,222,off,screen);
    }
    else
    {
         SDL_FreeSurface(msg[3]);
    msg[3]=TTF_RenderText_Solid(font[0],"Battery! fully charged",textColor1);

apply_surface(105,222,on,screen);
    }
    apply_surface(150,225,msg[3],screen);
if(mms[4].lonof==1)
    {
    SDL_FreeSurface(msg[4]);
    msg[4]=TTF_RenderText_Solid(font[0],"Power supply disruption",textColor);
    apply_surface(105,272,off,screen);
    }
    else
    {
      SDL_FreeSurface(msg[4]);
    msg[4]=TTF_RenderText_Solid(font[0],"Power supply disruption",textColor1);
     apply_surface(105,272,on,screen);
    }
    apply_surface(150,275,msg[4],screen);

if(mms[5].lonof==1)
    {
    SDL_FreeSurface(msg[5]);
    msg[5]=TTF_RenderText_Solid(font[0],"Hide My Compute(lock my computer)",textColor);
    apply_surface(105,272+50,off,screen);
    }
    else
    {
      SDL_FreeSurface(msg[5]);
    msg[5]=TTF_RenderText_Solid(font[0],"Hide My Compute(lock my computer)",textColor1);
     apply_surface(105,272+50,on,screen);
    }
    apply_surface(150,275+50,msg[5],screen);

if(ed==1)
{
    SDL_FreeSurface(msg[400]);
    msg[400]=TTF_RenderText_Solid(font1,"SAVE",textColor7);
    apply_surface(355,410,msg[400],screen);
}


}

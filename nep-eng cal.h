struct Date{
    int dd;
    int mm;
    int yy;
};
 int mmm,yyy,dat=0,indd=0,ml,mpo=0,brs=0;
struct Date date;
void caltour()
{

     if( event.type == SDL_KEYDOWN )
    {


            if( ( event.key.keysym.sym == SDLK_BACKSPACE )  &&mupd==0 )
            {
                ytour=0;
                mtour=0;
                dtour=0;
               mupd=1;
               gotour=0;
               if(lencr>0)
               {
                lencr--;
                datecon[lencr]='\0';
               }

            }
            else if( event.key.keysym.unicode ==SDLK_RETURN &&mupd==0 )
            {
                gotour=1;
                mupd=1;
            datecon[lencr]='\0';
            for(lopcal=0;datecon[lopcal]!='\0';lopcal++)
            {
                if(datecon[lopcal]>='0'&&datecon[lopcal]<='9')
                {
            if(chngdt==0)
            {
                ytour=ytour*10-48+datecon[lopcal];
            }
            else if(chngdt==1)
            {
            mtour=mtour*10-48+datecon[lopcal];
            }
            else if(chngdt==2)
            {
            dtour=dtour*10-48+datecon[lopcal];
            }
            }
            else
                {
             chngdt++;
                }

            }
            chngdt=0;
           }
               else if(mupd==0&&( event.key.keysym.unicode>= (Uint16)'0' ) &&( event.key.keysym.unicode<= (Uint16)'9' ) )
            {
                mupd=1;
                gotour=0;
                datecon[lencr]=(char)event.key.keysym.unicode;
                lencr++;
            }
            else if(mupd==0&&( event.key.keysym.unicode== (Uint16)'-' ) )
            {
                mupd=1;
                gotour=0;
                datecon[lencr]=(char)event.key.keysym.unicode;
                lencr++;
            }



if(msg[465]!=NULL)
SDL_FreeSurface(msg[465]);
if(asbs==0)
msg[465]=TTF_RenderText_Solid(font[5],datecon,textColor);
else
msg[465]=TTF_RenderText_Solid(font[3],datecon,textColor);
}
    if(event.type == SDL_KEYUP)
{
    mupd=0;
}

}

char *monthdtn(int mm)
{ //prints the name of month and year

    switch(mm){
        case 1: return("j}zfv");
        case 2: return("h]i&");
        case 3: return("cfiff)");
        case 4: return(">fj0f");
        case 5: return("efb|");
        case 6: return("cflZjg");
        case 7: return("sflt{s");
        case 8: return("d+;L/");
        case 9: return("kf}if");
        case 10: return("df3");
        case 11: return("kmfNu'0f");
        case 12: return("r}q");
    }
}
char *getNamen(int day){ //returns the name of the day
   switch(day){
      case 0 :return("cfOtaf/");
      case 1 :return(";f]daf/");
      case 2 :return("d+unaf/");
      case 3 :return("a'waf/");
      case 4 :return("ljlxaf/");
      case 5 :return("z'qmaf/");
      case 6 :return("zlgjf/");
   }
}

int check_leapYear(int year){ //checks whether the year passed is leap year or not
    if(year % 400 == 0 || (year % 100!=0 && year % 4 ==0))
       return 1;
    return 0;
}

int getNumberOfDays(int month,int year){ //returns the number of days in given month
   switch(month){                          //and year
      case 1 : return(31);
      case 2 : if(check_leapYear(year)==1)
		 return(29);
	       else
		 return(28);
      case 3 : return(31);
      case 4 : return(30);
      case 5 : return(31);
      case 6 : return(30);
      case 7 : return(31);
      case 8 : return(31);
      case 9 : return(30);
      case 10: return(31);
      case 11: return(30);
      case 12: return(31);
      default: return(-1);
   }
}


int getDayNumber(int day,int mon,int year){ //retuns the day number
    int res = 0, t1, t2, y = year;
    year = year - 1600;
    while(year >= 100){
        res = res + 5;
        year = year - 100;
    }
    res = (res % 7);
    t1 = ((year - 1) / 4);
    t2 = (year-1)-t1;
    t1 = (t1*2)+t2;
    t1 = (t1%7);
    res = res + t1;
    res = res%7;
    t2 = 0;
    for(t1 = 1;t1 < mon; t1++){
        t2 += getNumberOfDays(t1,y);
    }
    t2 = t2 + day;
    t2 = t2 % 7;
    res = res + t2;
    res = res % 7;
    if(y > 2000)
        res = res + 1;
    res = res % 7;
    return res;
}
int brpt,changedt;
int monl,yearl,monn;

int nepaliconvert(int day,int month,int year)
{

    if(year%4==0)
    {
        switch(month)
        {
            case 1:
            {
                changedt=15;
                if(day>14)
                {

                        brpt=day-14;
                    monn=10;
                    monl=29;
                    yearl=year+56;
                    return brpt;
                }
                else
                {

                   monn=9;
                    monl=30;
                    brpt=monl+day-14;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 2:
             {
                 changedt=13;
                if(day<=12)
                {
                    monn=10;
                    monl=29;
                    yearl=year+56;
                    brpt=monl-12+day;
                      return brpt;
                }
                else
                {
                   monn=11;
                    monl=30;
                    brpt=day-12;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 3:
             {
                 changedt=14;
                if(day>13)
                {
                    monn=12;
                    monl=30;
                    yearl=year+56;
                    brpt=day-13;
                      return brpt;
                }
                else
                {
                   monn=11;
                    monl=30;
                    brpt=monl-13+day;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 4:
            {
                changedt=13;
                if(day<=12)
                {
                    monn=12;
                    monl=30;
                    brpt=monl-12+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=1;
                    monl=31;
                    brpt=day-12;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 5:
            {
                changedt=14;
                if(day<=13)
                {
                    monn=1;
                    monl=31;
                    brpt=monl-13+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=2;
                    monl=32;
                    brpt=day-13;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 6:
              {
                  changedt=15;
                if(day<=14)
                {
                    monn=2;
                    monl=32;
                    brpt=monl-14+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=3;
                    monl=31;
                    brpt=day-14;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 7:
              {
                  changedt=16;
                if(day<=15)
                {
                    monn=3;
                    monl=31;
                    brpt=monl-15+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=4;
                    monl=32;
                    brpt=day-15;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 8:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=4;
                    monl=32;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=5;
                   brpt=day-16;
                    monl=31;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 9:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=5;
                    monl=31;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=6;
                    monl=30;
                    brpt=day-16;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 10:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=6;
                    monl=30;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=7;
                    monl=30;
                    brpt=day-16;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 11:
              {
                  changedt=16;
                if(day<=15)
                {
                    monn=7;
                    monl=30;
                    brpt=monl-15+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=8;
                    monl=30;
                    brpt=day-15;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 12:
              {
                  changedt=16;
                if(day<=15)
                {
                    monn=8;
                    monl=30;
                    brpt=monl-15+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=9;
                   brpt=day-15;
                    monl=29;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
        }
    }
 else if(year%4==1)
    {
        switch(month)
        {
            case 1:
            {
                changedt=14;
                if(day<=13)
                {
                    monn=9;
                    monl=29;
                    brpt=monl-13+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=10;
                    monl=29;
                    brpt=day-13;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 2:
             {
                 changedt=12;
                if(day<=11)
                {
                    monn=10;
                    monl=29;
                    brpt=monl-11+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=11;
                   brpt=day-11;
                    monl=30;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 3:
             {
                 changedt=14;
                if(day<=13)
                {
                    monn=11;
                    monl=30;
                    brpt=monl-13+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=12;
                    monl=30;
                    brpt=day-13;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 4:
            {
                changedt=13;
                if(day<=12)
                {
                    monn=12;
                    monl=30;
                    brpt=monl-12+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=1;
                    monl=31;
                    brpt=day-12;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 5:
            {
                changedt=14;
                if(day<=13)
                {
                    monn=1;
                    monl=31;
                    brpt=monl+day-13;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=2;
                   brpt=day-13;
                    monl=32;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 6:
              {
                  changedt=15;
                if(day<=14)
                {
                    monn=2;
                    monl=32;
                    brpt=monl-14+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=3;
                    monl=31;
                    brpt=day-14;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 7:
              {
                  changedt=16;
                if(day<=15)
                {
                    monn=3;
                    monl=31;
                    brpt=monl-15+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=4;
                   brpt=day-15;
                    monl=32;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 8:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=4;
                    monl=32;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=5;
                    monl=31;
                    brpt=day-16;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 9:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=5;
                    monl=31;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=6;
                   brpt=day-16;
                    monl=30;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 10:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=6;
                    monl=30;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=7;
                   brpt=day-16;
                    monl=30;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 11:
              {
                  changedt=16;
                if(day<=15)
                {
                    monn=7;
                    monl=30;
                    brpt=monl-15+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=8;
                    monl=30;
                    brpt=day-15;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 12:
              {
                  changedt=16;
                if(day<=15)
                {
                    monn=8;
                    monl=30;
                    brpt=monl-15+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=9;
                    monl=39;
                    brpt=day-15;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
        }
    }
 else if(year%4==2)
    {
        switch(month)
        {
            case 1:
            {
                changedt=14;
                if(day<=13)
                {
                    monn=9;
                    monl=29;
                    brpt=monl-13+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=10;
                    monl=30;
                    brpt=day-13;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 2:
             {
                 changedt=13;
                if(day<=12)
                {
                    monn=10;
                    monl=30;
                    brpt=monl-12+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=11;
                   brpt=day-12;
                    monl=29;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 3:
             {
                 changedt=14;
                if(day<=13)
                {
                    monn=11;
                    monl=29;
                    brpt=monl-13+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=12;
                    monl=31;
                    brpt=day-13;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 4:
            {
                changedt=14;
                if(day<=13)
                {
                    monn=12;
                    monl=31;
                    brpt=monl-13+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=1;
                   brpt=day-13;
                    monl=31;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 5:
            {
                changedt=15;
                if(day<=14)
                {
                    monn=1;
                    monl=31;
                    brpt=monl-14+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=2;
                    monl=31;
                    brpt=day-14;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 6:
              {
                  changedt=15;
                if(day<=14)
                {
                    monn=2;
                    monl=31;
                    brpt=monl-14+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=3;
                   brpt=day-14;
                    monl=32;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 7:
              {
                  changedt=16;
                if(day<=16)
                {
                    monn=3;
                    monl=32;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                    brpt=day-16;
                   monn=4;
                    monl=31;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 8:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=4;
                    monl=31;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=5;
                    monl=31;
                    brpt=day-16;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 9:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=5;
                    monl=31;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=6;
                    monl=31;
                    brpt=day-16;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 10:
              {
                  changedt=18;
                if(day<=17)
                {
                    monn=6;
                    monl=31;
                    brpt=monl-17+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=7;
                    monl=30;
                    brpt=day-17;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 11:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=7;
                    monl=30;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=8;
                    monl=29;
                    brpt=day-16;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 12:
              {
                  changedt=16;
                if(day<=15)
                {
                    monn=8;
                    monl=29;
                    brpt=monl-15+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=9;
                   brpt=day-15;
                    monl=30;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
        }
    }
 else if(year%4==3)
    {
        switch(month)
        {
            case 1:
            {
                changedt=15;
                if(day<=14)
                {
                    monn=9;
                    monl=30;
                    brpt=monl-14+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=10;
                    monl=29;
                    brpt=day-14;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 2:
             {
                 changedt=13;
                if(day<=12)
                {
                    monn=10;
                    monl=29;
                    brpt=monl-12+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=11;
                    monl=30;
                    brpt=day-12;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 3:
             {
                 changedt=15;
                if(day<=14)
                {
                    monn=11;
                    monl=30;
                    brpt=monl-14+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=12;
                    monl=30;
                    brpt=day-14;
                    yearl=year+56;
                      return brpt;
                }
                break;
            }
            case 4:
            {
                changedt=14;
                if(day<=13)
                {
                    monn=12;
                    monl=30;
                    brpt=monl-13+day;
                    yearl=year+56;
                      return brpt;
                }
                else
                {
                   monn=1;
                    monl=31;
                    brpt=day-13;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 5:
            {
                changedt=15;
                if(day<=14)
                {
                    monn=1;
                    monl=31;
                    brpt=monl-14+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=2;
                    monl=31;
                    brpt=day-14;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 6:
              {
                  changedt=15;
                if(day<=14)
                {
                    monn=2;
                    monl=31;
                    brpt=monl-14+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=3;
                    monl=32;
                    brpt=day-14;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 7:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=3;
                    monl=32;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=4;
                   brpt=day-16;
                    monl=31;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 8:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=4;
                    monl=31;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=5;
                   brpt=day-16;
                    monl=32;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 9:
              {
                  changedt=18;
                if(day<=17)
                {
                    monn=5;
                    monl=32;
                    brpt=monl-17+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=6;
                   brpt=day-17;
                    monl=30;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 10:
              {
                  changedt=18;
                if(day<=17)
                {
                    monn=6;
                    monl=30;
                    brpt=monl-17+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=7;
                    monl=30;
                    brpt=day-17;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 11:
              {
                  changedt=17;
                if(day<=16)
                {
                    monn=7;
                    monl=30;
                    brpt=monl-16+day;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=8;
                   brpt=day-16;
                    monl=29;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
            case 12:
              {
                  changedt=16;
                if(day<=15)
                {
                    monn=8;
                    monl=29;
                    brpt=monl+day-15;
                    yearl=year+57;
                      return brpt;
                }
                else
                {
                   monn=9;
                   brpt=day-15;
                    monl=30;
                    yearl=year+57;
                      return brpt;
                }
                break;
            }
        }
    }
}

char *getName(int day){ //returns the name of the day
   switch(day){
      case 0 :return("Sunday");
      case 1 :return("Monday");
      case 2 :return("Tuesday");
      case 3 :return("Wednesday");
      case 4 :return("Thursday");
      case 5 :return("Friday");
      case 6 :return("Saturday");
   }
}


char *monthdt(int mm){ //prints the name of month and year

    switch(mm){
        case 1: return("January");
        case 2: return("February");
        case 3: return("March");
        case 4: return("April");
        case 5: return("May");
        case 6: return("June");
        case 7: return("July");
        case 8: return("August");
        case 9: return("September");
        case 10: return("October");
        case 11: return("November");
        case 12: return("December");
    }
}


char *getDay(int dd,int mm,int yy){
    int day;
    if(!(mm>=1 && mm<=12)){
        return("Invalid month value");
    }
    if(!(dd>=1 && dd<=getNumberOfDays(mm,yy))){
        return("Invalid date");
    }
    if(yy>=1600){
        day = getDayNumber(dd,mm,yy);
        day = day%7;
        return(getName(day));
    }else{
        return("Please give year more than 1600");
    }
}
void time()
{

smtm[4][0]=' ';
if(st.wHour%12!=0)
{
smtm[4][1]=48+(st.wHour%12)/10;
smtm[4][2]=48+(st.wHour%12)%10;
smtm[4][3]='\0';
}
else
{
    smtm[4][1]='1';
 smtm[4][2]='2';
smtm[4][3]='\0';
}
hhour = TTF_RenderText_Solid( font1,smtm[4], textColor );
if(st.wHour>=12)
{
  ampm = TTF_RenderText_Solid( font[0],"P", textColor );
}
else{
ampm = TTF_RenderText_Solid( font[0],"A", textColor );
}
ampm1 = TTF_RenderText_Solid( font[0],"M", textColor );
smtm[5][0]=':';
smtm[5][1]=48+st.wMinute/10;
smtm[5][2]=48+(st.wMinute%10);
smtm[5][3]='\0';
mminate = TTF_RenderText_Solid( font1,smtm[5], textColor );
smtm[6][0]=':';
smtm[6][1]=48+st.wSecond/10;
smtm[6][2]=48+(st.wSecond%10);
smtm[6][3]='\0';
sseconds = TTF_RenderText_Solid( font1,smtm[6], textColor );
}
void datee()
{
  strcpy(smtm[0],getDay(st.wDay,st.wMonth,st.wYear));
bbar = TTF_RenderText_Solid( font[0],smtm[0], textColor3 );
smtm[1][0]=48+st.wYear/1000;
smtm[1][1]=48+(st.wYear%1000)/100;
smtm[1][2]=48+(st.wYear%100)/10;
smtm[1][3]=48+(st.wYear%10);
smtm[1][4]=' ';
smtm[1][5]='\0';
yyear = TTF_RenderText_Solid( font[0],smtm[1], textColor3 );
strcpy(smtm[2],monthdt(st.wMonth));
mmonth = TTF_RenderText_Solid( font[0],smtm[2], textColor3 );
smtm[3][0]=' ';
smtm[3][1]=48+st.wDay/10;
smtm[3][2]=48+(st.wDay%10);
smtm[3][3]='\0';
dday = TTF_RenderText_Solid( font[0],smtm[3], textColor3 );
}

void calender()
{
            if(gotour==1 &&strlen(datecon)<=10&&strlen(datecon)>=3 )
            {
            if(asbs==0)
            {
            if(ytour-yearv>0)
            {
                decrease_year(&yearv);

            }
            dvs=dtour;
            if(ytour-yearv<0)
            {
            increase_year(&yearv);
            }
            if(ytour-yearv==0)
            gotour=0;
            }
            else
            {
            if(ytour-yearl>0)
            {
           decrease_year(&yearv);

            }
            else if(ytour-yearl<0)
            {
            increase_year(&yearv);

            }
            else
            gotour=0;
            }
            if(asbs==0)
            {
            if(mtour>12)
            mtour=12;
            else if(mtour<=0)
            mtour=1;
            monthv=mtour;
            if(dtour>=getNumberOfDays(monthv,yearv))
                dtour=getNumberOfDays(monthv,yearv);
                if(dtour<=0)
                dtour=1;
            }
            else
            {
              if(mtour>=12)
            mtour=12;
            else if(mtour<=0)
            mtour=1;
            monthv=mtour;
            if(dtour>=monl)
                dtour=monl;
                if(dtour<=0)
                dtour=1;
            }
          setcald();
          dvs=dtour;
            }
            else
            {
                gotour=0;
            }

gettime();
int y,m,ninr=0;
if(mvs==1)
{
    m=12;
    y=yvs-1;

}
else
{
    m=mvs-1;
    y=yvs;
}
int aa,nmon=0;

a=getNumberOfDays(m,y);
cd=getNumberOfDays(mvs,yvs);
b=getDayNumber(1,mvs,yvs);
inrdry=0;
inrdrm=0;
  if(anotherwin==0)
    {

aa=nepaliconvert(st.wDay,st.wMonth,st.wYear);

SDL_FreeSurface( bbarn );
        SDL_FreeSurface( ddayn );
         SDL_FreeSurface( mmonthn );
          SDL_FreeSurface( yyearn );
smtm[8][0]=48+yearl/1000;
smtm[8][1]=48+(yearl%1000)/100;
smtm[8][2]=48+(yearl%100)/10;
smtm[8][3]=48+(yearl%10);
smtm[8][4]=' ';
smtm[8][5]='\0';
 GetLocalTime(&st);
 yyearn = TTF_RenderText_Solid( font[1],smtm[8], textColor );
 mmonthn = TTF_RenderText_Solid( font[1],monthdtn(monn), textColor );
 smtm[9][0]=48+brpt/10;
smtm[9][1]=48+(brpt%10);
smtm[9][2]='\0';
char as[50];
as[0]='u';
as[1]='t';
as[2]=']';
as[3]=',';
as[4]='\0';
strcat(as,getNamen( getDayNumber(st.wDay,st.wMonth,st.wYear)));
 ddayn = TTF_RenderText_Solid( font[1],smtm[9], textColor );
 bbarn = TTF_RenderText_Solid( font[1],as, textColor );

datee();
time();
    }
    else if(anotherwin==1)
    {
        caltour();
for(loop=0;loop<40;loop++)
{
if(viewcal!=NULL)
{
    SDL_FreeSurface( viewcal[loop] );
  viewcal[loop]=NULL;
 }   if(viewcals!=NULL)
 {
    SDL_FreeSurface( viewcals[loop]);

    viewcals[loop]=NULL;
 }
}
int cnt=0;

if(asbs==0)
{

d=0;
d=b;
ninr=d;
for(loop=1;loop<=cd;loop++)
{
    cnt=0;
     if(d>=35)
     {
        d=0;
     ninr=0;
     }
        as[cnt]=48+loop/10;
        as[cnt+1]=48+loop%10;
        as[cnt+2]='\0';
        edt[d]=loop;
if(loop==dtour)
{

 viewcal[d]=TTF_RenderText_Solid( font1,as, textColor3 );
  cnt=0;

        ndt[ninr]=nepaliconvert(edt[d],mvs,y);
        as[cnt]=48+ndt[ninr]/10;
        as[cnt+1]=48+ndt[ninr]%10;
        as[cnt+2]='\0';
        viewcals[ninr]=TTF_RenderText_Solid( font[3],as, textColor4 );
  d++;
  ninr++;
}
else if(d%7==0)
{

 viewcal[d]=TTF_RenderText_Solid( font1,as, textColor6 );
   cnt=0;

        ndt[ninr]=nepaliconvert(edt[d],mvs,y);
        as[cnt]=48+ndt[ninr]/10;
        as[cnt+1]=48+ndt[ninr]%10;
        as[cnt+2]='\0';
        viewcals[ninr]=TTF_RenderText_Solid( font[3],as, textColor4 );
d++;
ninr++;
}
else
{

    viewcal[d]=TTF_RenderText_Solid( font1,as, textColor );
      cnt=0;
        ndt[ninr]=nepaliconvert(edt[d],mvs,y);
        as[cnt]=48+ndt[ninr]/10;
        as[cnt+1]=48+ndt[ninr]%10;
        as[cnt+2]='\0';
        viewcals[ninr]=TTF_RenderText_Solid( font[3],as, textColor4 );
  d++;
  ninr++;
}

}

    }
else if(asbs==1)
{

    brs=0;
    dat=0;
    mmm=0;
    yyy=0;
    indd=0;
    mpo=0;
    ml=0;
    mmm=mvs;
    yyy=yvs;
 nepaliconvert(1,6,2013);
ml=monl;
if(dvs>=changedt)
{
nepaliconvert(dvs,mmm,yyy);
dat=changedt;
//ml=monl;
}
else
{
if(mmm<=1)
    {
mmm=12;
    yyy--;
    }
    else
    mmm--;
nepaliconvert(dvs,mmm,yyy);
    dat=changedt;
  //  ml=monl;
}


brs=getDayNumber(dat,mmm,yyy);

for(loop=1;loop<=ml;loop++)
{
    cnt=0;

        edt[brs]=dat;
        ndt[brs]=nepaliconvert(edt[brs],mmm,yyy);
        as[cnt]=48+dat/10;
        as[cnt+1]=48+dat%10;
        as[cnt+2]='\0';

if(dat<=ml)
viewcals[brs]=TTF_RenderText_Solid( font[4],as, textColor4 );
else
viewcals[brs]=TTF_RenderText_Solid( font[4]," ", textColor4 );


        cnt=0;
        as[cnt]=48+ndt[brs]/10;
        as[cnt+1]=48+ndt[brs]%10;
        as[cnt+2]='\0';

if(dat<=ml)
viewcal[brs]=TTF_RenderText_Solid( font[8],as, textColor);
else
viewcal[brs]=TTF_RenderText_Solid( font[8],as, textColor);
brs++;
if(brs>=35 && dat<=ml)
brs=0;

   if(dat>getNumberOfDays(mmm,yyy))
    {
        dat=1;
        mmm++;
        if(mmm>12)
        yyy++;


    }
    else
    {


    dat++;
    }
}
}
   nepaliconvert(dtour,mtour,ytour);
    apply_surface(290,450,msg[465],screen);
apply_surface(550,470,msg[466],screen);
if(gotour==1)
{
    dateconn[0]=48+yearl/1000;
        dateconn[1]=48+yearl%1000/100;
        dateconn[2]=48+yearl%100/10;
        dateconn[3]=48+yearl%10;
        dateconn[4]=' ';
        dateconn[5]=48+monn/10;
        dateconn[6]=48+monn%10;
        dateconn[7]=' ';
        dateconn[8]=48+nepaliconvert( dtour, mtour,ytour)/10;
        dateconn[9]=48+nepaliconvert( dtour, mtour,ytour)%10;
        dateconn[10]='\0';
 if(asbs==1)
msg[466]=TTF_RenderText_Solid(font[5],dateconn,textColor);
else
msg[466]=TTF_RenderText_Solid(font[3],dateconn,textColor);
}

}

}


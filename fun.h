void load_file()
{
    int a=0,b=0,c=0;
      //top view

       if(lr==1)    //left arrow is presed
   {
if(hl==1)
{
SDL_FreeSurface( f1 );
SDL_FreeSurface( f2 );
SDL_FreeSurface( f3 );
SDL_FreeSurface( b1 );
SDL_FreeSurface( b2 );
SDL_FreeSurface( b3 );
SDL_FreeSurface( r1 );
SDL_FreeSurface( r2 );
SDL_FreeSurface( r3 );
SDL_FreeSurface( l1 );
SDL_FreeSurface( l2 );
SDL_FreeSurface( l3 );

SDL_FreeSurface( fr1 );
SDL_FreeSurface( fr2 );
SDL_FreeSurface( fr3 );
SDL_FreeSurface( fr4 );
SDL_FreeSurface( fr6 );
SDL_FreeSurface( fr7 );
SDL_FreeSurface( fr8 );
SDL_FreeSurface( fr9 );
a=cf[1];
b=cf[2];
c=cf[3];
fflush(stdin);
switch(cr[1])
{

    case 1:cf[1]=1;f1=load_image("ri//R.png");break;
    case 2:cf[1]=2;f1=load_image("ri//G.png");break;
    case 3:cf[1]=3;f1=load_image("ri//B.png");break;
    case 4:cf[1]=4;f1=load_image("ri//Y.png");break;
    case 5:cf[1]=5;f1=load_image("ri//V.png");break;
    case 6:cf[1]=6;f1=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[2])
{

    case 1:cf[2]=1;f2=load_image("ri//R.png");break;
    case 2:cf[2]=2;f2=load_image("ri//G.png");break;
    case 3:cf[2]=3;f2=load_image("ri//B.png");break;
    case 4:cf[2]=4;f2=load_image("ri//Y.png");break;
    case 5:cf[2]=5;f2=load_image("ri//V.png");break;
    case 6:cf[2]=6;f2=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[3])
{

    case 1:cf[3]=1;f3=load_image("ri//R.png");break;
    case 2:cf[3]=2;f3=load_image("ri//G.png");break;
    case 3:cf[3]=3;f3=load_image("ri//B.png");break;
    case 4:cf[3]=4;f3=load_image("ri//Y.png");break;
    case 5:cf[3]=5;f3=load_image("ri//V.png");break;
    case 6:cf[3]=6;f3=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[3])
{

    case 1:cr[1]=1;r1=load_image("ri//SR.png");break;
    case 2:cr[1]=2;r1=load_image("ri//SG.png");break;
    case 3:cr[1]=3;r1=load_image("ri//SB.png");break;
    case 4:cr[1]=4;r1=load_image("ri//SY.png");break;
    case 5:cr[1]=5;r1=load_image("ri//SV.png");break;
    case 6:cr[1]=6;r1=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[2])
{

    case 1:cr[2]=1;r2=load_image("ri//SR.png");break;
    case 2:cr[2]=2;r2=load_image("ri//SG.png");break;
    case 3:cr[2]=3;r2=load_image("ri//SB.png");break;
    case 4:cr[2]=4;r2=load_image("ri//SY.png");break;
    case 5:cr[2]=5;r2=load_image("ri//SV.png");break;
    case 6:cr[2]=6;r2=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[1])
{

    case 1:cr[3]=1;r3=load_image("ri//SR.png");break;
    case 2:cr[3]=2;r3=load_image("ri//SG.png");break;
    case 3:cr[3]=3;r3=load_image("ri//SB.png");break;
    case 4:cr[3]=4;r3=load_image("ri//SY.png");break;
    case 5:cr[3]=5;r3=load_image("ri//SV.png");break;
    case 6:cr[3]=6;r3=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cl[3])
{

    case 1:cb[1]=1;b1=load_image("ri//R.png");break;
    case 2:cb[1]=2;b1=load_image("ri//G.png");break;
    case 3:cb[1]=3;b1=load_image("ri//B.png");break;
    case 4:cb[1]=4;b1=load_image("ri//Y.png");break;
    case 5:cb[1]=5;b1=load_image("ri//V.png");break;
    case 6:cb[1]=6;b1=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[2])
{

    case 1:cb[2]=1;b2=load_image("ri//R.png");break;
    case 2:cb[2]=2;b2=load_image("ri//G.png");break;
    case 3:cb[2]=3;b2=load_image("ri//B.png");break;
    case 4:cb[2]=4;b2=load_image("ri//Y.png");break;
    case 5:cb[2]=5;b2=load_image("ri//V.png");break;
    case 6:cb[2]=6;b2=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[1])
{

    case 1:cb[3]=1;b3=load_image("ri//R.png");break;
    case 2:cb[3]=2;b3=load_image("ri//G.png");break;
    case 3:cb[3]=3;b3=load_image("ri//B.png");break;
    case 4:cb[3]=4;b3=load_image("ri//Y.png");break;
    case 5:cb[3]=5;b3=load_image("ri//V.png");break;
    case 6:cb[3]=6;b3=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cl[1]=1;l1=load_image("ri//SR.png");break;
    case 2:cl[1]=2;l1=load_image("ri//SG.png");break;
    case 3:cl[1]=3;l1=load_image("ri//SB.png");break;
    case 4:cl[1]=4;l1=load_image("ri//SY.png");break;
    case 5:cl[1]=5;l1=load_image("ri//SV.png");break;
    case 6:cl[1]=6;l1=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cl[2]=1;l2=load_image("ri//SR.png");break;
    case 2:cl[2]=2;l2=load_image("ri//SG.png");break;
    case 3:cl[2]=3;l2=load_image("ri//SB.png");break;
    case 4:cl[2]=4;l2=load_image("ri//SY.png");break;
    case 5:cl[2]=5;l2=load_image("ri//SV.png");break;
    case 6:cl[2]=6;l2=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cl[3]=1;l3=load_image("ri//SR.png");break;
    case 2:cl[3]=2;l3=load_image("ri//SG.png");break;
    case 3:cl[3]=3;l3=load_image("ri//SB.png");break;
    case 4:cl[3]=4;l3=load_image("ri//SY.png");break;
    case 5:cl[3]=5;l3=load_image("ri//SV.png");break;
    case 6:cl[3]=6;l3=load_image("ri//SP.png");break;
}
a=cfr[2];
b=cfr[3];
c=cfr[6];
switch(cfr[1])
{
    case 1:cfr[3]=1;fr3=load_image("ri//SSR.png");break;
    case 2:cfr[3]=2;fr3=load_image("ri//SSG.png");break;
    case 3:cfr[3]=3;fr3=load_image("ri//SSB.png");break;
    case 4:cfr[3]=4;fr3=load_image("ri//SSY.png");break;
    case 5:cfr[3]=5;fr3=load_image("ri//SSV.png");break;
    case 6:cfr[3]=6;fr3=load_image("ri//SSP.png");break;

}
switch(cfr[4])
{
    case 1:cfr[2]=1;fr2=load_image("ri//SSR.png");break;
    case 2:cfr[2]=2;fr2=load_image("ri//SSG.png");break;
    case 3:cfr[2]=3;fr2=load_image("ri//SSB.png");break;
    case 4:cfr[2]=4;fr2=load_image("ri//SSY.png");break;
    case 5:cfr[2]=5;fr2=load_image("ri//SSV.png");break;
    case 6:cfr[2]=6;fr2=load_image("ri//SSP.png");break;

}
switch(cfr[7])
{
    case 1:cfr[1]=1;fr1=load_image("ri//SSR.png");break;
    case 2:cfr[1]=2;fr1=load_image("ri//SSG.png");break;
    case 3:cfr[1]=3;fr1=load_image("ri//SSB.png");break;
    case 4:cfr[1]=4;fr1=load_image("ri//SSY.png");break;
    case 5:cfr[1]=5;fr1=load_image("ri//SSV.png");break;
    case 6:cfr[1]=6;fr1=load_image("ri//SSP.png");break;

}
switch(a)
{
    case 1:cfr[6]=1;fr6=load_image("ri//SSR.png");break;
    case 2:cfr[6]=2;fr6=load_image("ri//SSG.png");break;
    case 3:cfr[6]=3;fr6=load_image("ri//SSB.png");break;
    case 4:cfr[6]=4;fr6=load_image("ri//SSY.png");break;
    case 5:cfr[6]=5;fr6=load_image("ri//SSV.png");break;
    case 6:cfr[6]=6;fr6=load_image("ri//SSP.png");break;

}
switch(cfr[8])
{
    case 1:cfr[4]=1;fr4=load_image("ri//SSR.png");break;
    case 2:cfr[4]=2;fr4=load_image("ri//SSG.png");break;
    case 3:cfr[4]=3;fr4=load_image("ri//SSB.png");break;
    case 4:cfr[4]=4;fr4=load_image("ri//SSY.png");break;
    case 5:cfr[4]=5;fr4=load_image("ri//SSV.png");break;
    case 6:cfr[4]=6;fr4=load_image("ri//SSP.png");break;

}
switch(cfr[9])
{
    case 1:cfr[7]=1;fr7=load_image("ri//SSR.png");break;
    case 2:cfr[7]=2;fr7=load_image("ri//SSG.png");break;
    case 3:cfr[7]=3;fr7=load_image("ri//SSB.png");break;
    case 4:cfr[7]=4;fr7=load_image("ri//SSY.png");break;
    case 5:cfr[7]=5;fr7=load_image("ri//SSV.png");break;
    case 6:cfr[7]=6;fr7=load_image("ri//SSP.png");break;

}
switch(c)
{
    case 1:cfr[8]=1;fr8=load_image("ri//SSR.png");break;
    case 2:cfr[8]=2;fr8=load_image("ri//SSG.png");break;
    case 3:cfr[8]=3;fr8=load_image("ri//SSB.png");break;
    case 4:cfr[8]=4;fr8=load_image("ri//SSY.png");break;
    case 5:cfr[8]=5;fr8=load_image("ri//SSV.png");break;
    case 6:cfr[8]=6;fr8=load_image("ri//SSP.png");break;

}
switch(b)
{
    case 1:cfr[9]=1;fr9=load_image("ri//SSR.png");break;
    case 2:cfr[9]=2;fr9=load_image("ri//SSG.png");break;
    case 3:cfr[9]=3;fr9=load_image("ri//SSB.png");break;
    case 4:cfr[9]=4;fr9=load_image("ri//SSY.png");break;
    case 5:cfr[9]=5;fr9=load_image("ri//SSV.png");break;
    case 6:cfr[9]=6;fr9=load_image("ri//SSP.png");break;

}
}
else if(hl==2)
{
SDL_FreeSurface( f4 );
SDL_FreeSurface( f5 );
SDL_FreeSurface( f6 );
SDL_FreeSurface( b4 );
SDL_FreeSurface( b5 );
SDL_FreeSurface( b6 );
SDL_FreeSurface( r4 );
SDL_FreeSurface( r5 );
SDL_FreeSurface( r6 );
SDL_FreeSurface( l4 );
SDL_FreeSurface( l5 );
SDL_FreeSurface( l6 );
a=cf[4];
b=cf[5];
c=cf[6];
fflush(stdin);
switch(cr[4])
{

    case 1:cf[4]=1;f4=load_image("ri//R.png");break;
    case 2:cf[4]=2;f4=load_image("ri//G.png");break;
    case 3:cf[4]=3;f4=load_image("ri//B.png");break;
    case 4:cf[4]=4;f4=load_image("ri//Y.png");break;
    case 5:cf[4]=5;f4=load_image("ri//V.png");break;
    case 6:cf[4]=6;f4=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[5])
{

    case 1:cf[5]=1;f5=load_image("ri//R.png");break;
    case 2:cf[5]=2;f5=load_image("ri//G.png");break;
    case 3:cf[5]=3;f5=load_image("ri//B.png");break;
    case 4:cf[5]=4;f5=load_image("ri//Y.png");break;
    case 5:cf[5]=5;f5=load_image("ri//V.png");break;
    case 6:cf[5]=6;f5=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[6])
{

    case 1:cf[6]=1;f6=load_image("ri//R.png");break;
    case 2:cf[6]=2;f6=load_image("ri//G.png");break;
    case 3:cf[6]=3;f6=load_image("ri//B.png");break;
    case 4:cf[6]=4;f6=load_image("ri//Y.png");break;
    case 5:cf[6]=5;f6=load_image("ri//V.png");break;
    case 6:cf[6]=6;f6=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[6])
{

    case 1:cr[4]=1;r4=load_image("ri//SR.png");break;
    case 2:cr[4]=2;r4=load_image("ri//SG.png");break;
    case 3:cr[4]=3;r4=load_image("ri//SB.png");break;
    case 4:cr[4]=4;r4=load_image("ri//SY.png");break;
    case 5:cr[4]=5;r4=load_image("ri//SV.png");break;
    case 6:cr[4]=6;r4=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[5])
{

    case 1:cr[5]=1;r5=load_image("ri//SR.png");break;
    case 2:cr[5]=2;r5=load_image("ri//SG.png");break;
    case 3:cr[5]=3;r5=load_image("ri//SB.png");break;
    case 4:cr[5]=4;r5=load_image("ri//SY.png");break;
    case 5:cr[5]=5;r5=load_image("ri//SV.png");break;
    case 6:cr[5]=6;r5=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[4])
{

    case 1:cr[6]=1;r6=load_image("ri//SR.png");break;
    case 2:cr[6]=2;r6=load_image("ri//SG.png");break;
    case 3:cr[6]=3;r6=load_image("ri//SB.png");break;
    case 4:cr[6]=4;r6=load_image("ri//SY.png");break;
    case 5:cr[6]=5;r6=load_image("ri//SV.png");break;
    case 6:cr[6]=6;r6=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cl[6])
{

    case 1:cb[4]=1;b4=load_image("ri//R.png");break;
    case 2:cb[4]=2;b4=load_image("ri//G.png");break;
    case 3:cb[4]=3;b4=load_image("ri//B.png");break;
    case 4:cb[4]=4;b4=load_image("ri//Y.png");break;
    case 5:cb[4]=5;b4=load_image("ri//V.png");break;
    case 6:cb[4]=6;b4=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[5])
{

    case 1:cb[5]=1;b5=load_image("ri//R.png");break;
    case 2:cb[5]=2;b5=load_image("ri//G.png");break;
    case 3:cb[5]=3;b5=load_image("ri//B.png");break;
    case 4:cb[5]=4;b5=load_image("ri//Y.png");break;
    case 5:cb[5]=5;b5=load_image("ri//V.png");break;
    case 6:cb[5]=6;b5=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[4])
{

    case 1:cb[6]=1;b6=load_image("ri//R.png");break;
    case 2:cb[6]=2;b6=load_image("ri//G.png");break;
    case 3:cb[6]=3;b6=load_image("ri//B.png");break;
    case 4:cb[6]=4;b6=load_image("ri//Y.png");break;
    case 5:cb[6]=5;b6=load_image("ri//V.png");break;
    case 6:cb[6]=6;b6=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cl[4]=1;l4=load_image("ri//SR.png");break;
    case 2:cl[4]=2;l4=load_image("ri//SG.png");break;
    case 3:cl[4]=3;l4=load_image("ri//SB.png");break;
    case 4:cl[4]=4;l4=load_image("ri//SY.png");break;
    case 5:cl[4]=5;l4=load_image("ri//SV.png");break;
    case 6:cl[4]=6;l4=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cl[5]=1;l5=load_image("ri//SR.png");break;
    case 2:cl[5]=2;l5=load_image("ri//SG.png");break;
    case 3:cl[5]=3;l5=load_image("ri//SB.png");break;
    case 4:cl[5]=4;l5=load_image("ri//SY.png");break;
    case 5:cl[5]=5;l5=load_image("ri//SV.png");break;
    case 6:cl[5]=6;l5=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cl[6]=1;l6=load_image("ri//SR.png");break;
    case 2:cl[6]=2;l6=load_image("ri//SG.png");break;
    case 3:cl[6]=3;l6=load_image("ri//SB.png");break;
    case 4:cl[6]=4;l6=load_image("ri//SY.png");break;
    case 5:cl[6]=5;l6=load_image("ri//SV.png");break;
    case 6:cl[6]=6;l6=load_image("ri//SP.png");break;
}
}
else if(hl==3)
{
SDL_FreeSurface( f7 );
SDL_FreeSurface( f8 );
SDL_FreeSurface( f9 );
SDL_FreeSurface( b7 );
SDL_FreeSurface( b8 );
SDL_FreeSurface( b9 );
SDL_FreeSurface( r7 );
SDL_FreeSurface( r8 );
SDL_FreeSurface( r9 );
SDL_FreeSurface( l7 );
SDL_FreeSurface( l8 );
SDL_FreeSurface( l9 );


a=cf[7];
b=cf[8];
c=cf[9];
fflush(stdin);
switch(cr[7])
{

    case 1:cf[7]=1;f7=load_image("ri//R.png");break;
    case 2:cf[7]=2;f7=load_image("ri//G.png");break;
    case 3:cf[7]=3;f7=load_image("ri//B.png");break;
    case 4:cf[7]=4;f7=load_image("ri//Y.png");break;
    case 5:cf[7]=5;f7=load_image("ri//V.png");break;
    case 6:cf[7]=6;f7=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[8])
{

    case 1:cf[8]=1;f8=load_image("ri//R.png");break;
    case 2:cf[8]=2;f8=load_image("ri//G.png");break;
    case 3:cf[8]=3;f8=load_image("ri//B.png");break;
    case 4:cf[8]=4;f8=load_image("ri//Y.png");break;
    case 5:cf[8]=5;f8=load_image("ri//V.png");break;
    case 6:cf[8]=6;f8=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[9])
{

    case 1:cf[9]=1;f9=load_image("ri//R.png");break;
    case 2:cf[9]=2;f9=load_image("ri//G.png");break;
    case 3:cf[9]=3;f9=load_image("ri//B.png");break;
    case 4:cf[9]=4;f9=load_image("ri//Y.png");break;
    case 5:cf[9]=5;f9=load_image("ri//V.png");break;
    case 6:cf[9]=6;f9=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[9])
{

    case 1:cr[7]=1;r7=load_image("ri//SR.png");break;
    case 2:cr[7]=2;r7=load_image("ri//SG.png");break;
    case 3:cr[7]=3;r7=load_image("ri//SB.png");break;
    case 4:cr[7]=4;r7=load_image("ri//SY.png");break;
    case 5:cr[7]=5;r7=load_image("ri//SV.png");break;
    case 6:cr[7]=6;r7=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[8])
{

    case 1:cr[8]=1;r8=load_image("ri//SR.png");break;
    case 2:cr[8]=2;r8=load_image("ri//SG.png");break;
    case 3:cr[8]=3;r8=load_image("ri//SB.png");break;
    case 4:cr[8]=4;r8=load_image("ri//SY.png");break;
    case 5:cr[8]=5;r8=load_image("ri//SV.png");break;
    case 6:cr[8]=6;r8=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[7])
{

    case 1:cr[9]=1;r9=load_image("ri//SR.png");break;
    case 2:cr[9]=2;r9=load_image("ri//SG.png");break;
    case 3:cr[9]=3;r9=load_image("ri//SB.png");break;
    case 4:cr[9]=4;r9=load_image("ri//SY.png");break;
    case 5:cr[9]=5;r9=load_image("ri//SV.png");break;
    case 6:cr[9]=6;r9=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cl[9])
{

    case 1:cb[7]=1;b7=load_image("ri//R.png");break;
    case 2:cb[7]=2;b7=load_image("ri//G.png");break;
    case 3:cb[7]=3;b7=load_image("ri//B.png");break;
    case 4:cb[7]=4;b7=load_image("ri//Y.png");break;
    case 5:cb[7]=5;b7=load_image("ri//V.png");break;
    case 6:cb[7]=6;b7=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[8])
{

    case 1:cb[8]=1;b8=load_image("ri//R.png");break;
    case 2:cb[8]=2;b8=load_image("ri//G.png");break;
    case 3:cb[8]=3;b8=load_image("ri//B.png");break;
    case 4:cb[8]=4;b8=load_image("ri//Y.png");break;
    case 5:cb[8]=5;b8=load_image("ri//V.png");break;
    case 6:cb[8]=6;b8=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[7])
{

    case 1:cb[9]=1;b9=load_image("ri//R.png");break;
    case 2:cb[9]=2;b9=load_image("ri//G.png");break;
    case 3:cb[9]=3;b9=load_image("ri//B.png");break;
    case 4:cb[9]=4;b9=load_image("ri//Y.png");break;
    case 5:cb[9]=5;b9=load_image("ri//V.png");break;
    case 6:cb[9]=6;b9=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cl[7]=1;l7=load_image("ri//SR.png");break;
    case 2:cl[7]=2;l7=load_image("ri//SG.png");break;
    case 3:cl[7]=3;l7=load_image("ri//SB.png");break;
    case 4:cl[7]=4;l7=load_image("ri//SY.png");break;
    case 5:cl[7]=5;l7=load_image("ri//SV.png");break;
    case 6:cl[7]=6;l7=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cl[8]=1;l8=load_image("ri//SR.png");break;
    case 2:cl[8]=2;l8=load_image("ri//SG.png");break;
    case 3:cl[8]=3;l8=load_image("ri//SB.png");break;
    case 4:cl[8]=4;l8=load_image("ri//SY.png");break;
    case 5:cl[8]=5;l8=load_image("ri//SV.png");break;
    case 6:cl[8]=6;l8=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cl[9]=1;l9=load_image("ri//SR.png");break;
    case 2:cl[9]=2;l9=load_image("ri//SG.png");break;
    case 3:cl[9]=3;l9=load_image("ri//SB.png");break;
    case 4:cl[9]=4;l9=load_image("ri//SY.png");break;
    case 5:cl[9]=5;l9=load_image("ri//SV.png");break;
    case 6:cl[9]=6;l9=load_image("ri//SP.png");break;
}
/////////////////////////////////////////

SDL_FreeSurface( bk1 );
SDL_FreeSurface( bk2);
SDL_FreeSurface( bk3);
SDL_FreeSurface( bk4 );
SDL_FreeSurface( bk6 );
SDL_FreeSurface( bk7 );
SDL_FreeSurface( bk8 );
SDL_FreeSurface( bk9 );

a=cbk[4];
b=cbk[7];
c=cbk[8];
switch(cbk[1])
{
    case 1:cbk[7]=1;bk7=load_image("ri//SSR.png");break;
    case 2:cbk[7]=2;bk7=load_image("ri//SSG.png");break;
    case 3:cbk[7]=3;bk7=load_image("ri//SSB.png");break;
    case 4:cbk[7]=4;bk7=load_image("ri//SSY.png");break;
    case 5:cbk[7]=5;bk7=load_image("ri//SSV.png");break;
    case 6:cbk[7]=6;bk7=load_image("ri//SSP.png");break;

}
switch(cbk[2])
{
    case 1:cbk[4]=1;bk4=load_image("ri//SSR.png");break;
    case 2:cbk[4]=2;bk4=load_image("ri//SSG.png");break;
    case 3:cbk[4]=3;bk4=load_image("ri//SSB.png");break;
    case 4:cbk[4]=4;bk4=load_image("ri//SSY.png");break;
    case 5:cbk[4]=5;bk4=load_image("ri//SSV.png");break;
    case 6:cbk[4]=6;bk4=load_image("ri//SSP.png");break;

}
switch(cbk[3])
{
    case 1:cbk[1]=1;bk1=load_image("ri//SSR.png");break;
    case 2:cbk[1]=2;bk1=load_image("ri//SSG.png");break;
    case 3:cbk[1]=3;bk1=load_image("ri//SSB.png");break;
    case 4:cbk[1]=4;bk1=load_image("ri//SSY.png");break;
    case 5:cbk[1]=5;bk1=load_image("ri//SSV.png");break;
    case 6:cbk[1]=6;bk1=load_image("ri//SSP.png");break;
}
switch(a)
{
    case 1:cbk[8]=1;bk8=load_image("ri//SSR.png");break;
    case 2:cbk[8]=2;bk8=load_image("ri//SSG.png");break;
    case 3:cbk[8]=3;bk8=load_image("ri//SSB.png");break;
    case 4:cbk[8]=4;bk8=load_image("ri//SSY.png");break;
    case 5:cbk[8]=5;bk8=load_image("ri//SSV.png");break;
    case 6:cbk[8]=6;bk8=load_image("ri//SSP.png");break;

}
switch(cbk[6])
{
    case 1:cbk[2]=1;bk2=load_image("ri//SSR.png");break;
    case 2:cbk[2]=2;bk2=load_image("ri//SSG.png");break;
    case 3:cbk[2]=3;bk2=load_image("ri//SSB.png");break;
    case 4:cbk[2]=4;bk2=load_image("ri//SSY.png");break;
    case 5:cbk[2]=5;bk2=load_image("ri//SSV.png");break;
    case 6:cbk[2]=6;bk2=load_image("ri//SSP.png");break;

}
switch(cbk[9])
{
    case 1:cbk[3]=1;bk3=load_image("ri//SSR.png");break;
    case 2:cbk[3]=2;bk3=load_image("ri//SSG.png");break;
    case 3:cbk[3]=3;bk3=load_image("ri//SSB.png");break;
    case 4:cbk[3]=4;bk3=load_image("ri//SSY.png");break;
    case 5:cbk[3]=5;bk3=load_image("ri//SSV.png");break;
    case 6:cbk[3]=6;bk3=load_image("ri//SSP.png");break;

}
switch(c)
{
    case 1:cbk[6]=1;bk6=load_image("ri//SSR.png");break;
    case 2:cbk[6]=2;bk6=load_image("ri//SSG.png");break;
    case 3:cbk[6]=3;bk6=load_image("ri//SSB.png");break;
    case 4:cbk[6]=4;bk6=load_image("ri//SSY.png");break;
    case 5:cbk[6]=5;bk6=load_image("ri//SSV.png");break;
    case 6:cbk[6]=6;bk6=load_image("ri//SSP.png");break;

}
switch(b)
{
    case 1:cbk[9]=1;bk9=load_image("ri//SSR.png");break;
    case 2:cbk[9]=2;bk9=load_image("ri//SSG.png");break;
    case 3:cbk[9]=3;bk9=load_image("ri//SSB.png");break;
    case 4:cbk[9]=4;bk9=load_image("ri//SSY.png");break;
    case 5:cbk[9]=5;bk9=load_image("ri//SSV.png");break;
    case 6:cbk[9]=6;bk9=load_image("ri//SSP.png");break;

}


}
   }
   else if(lr==2)    //right arrow is presed
   {

if(hl==1)
{
SDL_FreeSurface( f1 );
SDL_FreeSurface( f2 );
SDL_FreeSurface( f3 );
SDL_FreeSurface( b1 );
SDL_FreeSurface( b2 );
SDL_FreeSurface( b3 );
SDL_FreeSurface( r1 );
SDL_FreeSurface( r2 );
SDL_FreeSurface( r3 );
SDL_FreeSurface( l1 );
SDL_FreeSurface( l2 );
SDL_FreeSurface( l3 );

SDL_FreeSurface( fr1 );
SDL_FreeSurface( fr2 );
SDL_FreeSurface( fr3 );
SDL_FreeSurface( fr4 );
SDL_FreeSurface( fr6 );
SDL_FreeSurface( fr7 );
SDL_FreeSurface( fr8 );
SDL_FreeSurface( fr9 );
a=cf[1];
b=cf[2];
c=cf[3];
fflush(stdin);
switch(cl[1])
{

    case 1:cf[1]=1;f1=load_image("ri//R.png");break;
    case 2:cf[1]=2;f1=load_image("ri//G.png");break;
    case 3:cf[1]=3;f1=load_image("ri//B.png");break;
    case 4:cf[1]=4;f1=load_image("ri//Y.png");break;
    case 5:cf[1]=5;f1=load_image("ri//V.png");break;
    case 6:cf[1]=6;f1=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[2])
{

    case 1:cf[2]=1;f2=load_image("ri//R.png");break;
    case 2:cf[2]=2;f2=load_image("ri//G.png");break;
    case 3:cf[2]=3;f2=load_image("ri//B.png");break;
    case 4:cf[2]=4;f2=load_image("ri//Y.png");break;
    case 5:cf[2]=5;f2=load_image("ri//V.png");break;
    case 6:cf[2]=6;f2=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[3])
{

    case 1:cf[3]=1;f3=load_image("ri//R.png");break;
    case 2:cf[3]=2;f3=load_image("ri//G.png");break;
    case 3:cf[3]=3;f3=load_image("ri//B.png");break;
    case 4:cf[3]=4;f3=load_image("ri//Y.png");break;
    case 5:cf[3]=5;f3=load_image("ri//V.png");break;
    case 6:cf[3]=6;f3=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[3])
{

    case 1:cl[1]=1;l1=load_image("ri//SR.png");break;
    case 2:cl[1]=2;l1=load_image("ri//SG.png");break;
    case 3:cl[1]=3;l1=load_image("ri//SB.png");break;
    case 4:cl[1]=4;l1=load_image("ri//SY.png");break;
    case 5:cl[1]=5;l1=load_image("ri//SV.png");break;
    case 6:cl[1]=6;l1=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[2])
{

    case 1:cl[2]=1;l2=load_image("ri//SR.png");break;
    case 2:cl[2]=2;l2=load_image("ri//SG.png");break;
    case 3:cl[2]=3;l2=load_image("ri//SB.png");break;
    case 4:cl[2]=4;l2=load_image("ri//SY.png");break;
    case 5:cl[2]=5;l2=load_image("ri//SV.png");break;
    case 6:cl[2]=6;l2=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[1])
{

    case 1:cl[3]=1;l3=load_image("ri//SR.png");break;
    case 2:cl[3]=2;l3=load_image("ri//SG.png");break;
    case 3:cl[3]=3;l3=load_image("ri//SB.png");break;
    case 4:cl[3]=4;l3=load_image("ri//SY.png");break;
    case 5:cl[3]=5;l3=load_image("ri//SV.png");break;
    case 6:cl[3]=6;l3=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cr[3])
{

    case 1:cb[1]=1;b1=load_image("ri//R.png");break;
    case 2:cb[1]=2;b1=load_image("ri//G.png");break;
    case 3:cb[1]=3;b1=load_image("ri//B.png");break;
    case 4:cb[1]=4;b1=load_image("ri//Y.png");break;
    case 5:cb[1]=5;b1=load_image("ri//V.png");break;
    case 6:cb[1]=6;b1=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[2])
{

    case 1:cb[2]=1;b2=load_image("ri//R.png");break;
    case 2:cb[2]=2;b2=load_image("ri//G.png");break;
    case 3:cb[2]=3;b2=load_image("ri//B.png");break;
    case 4:cb[2]=4;b2=load_image("ri//Y.png");break;
    case 5:cb[2]=5;b2=load_image("ri//V.png");break;
    case 6:cb[2]=6;b2=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[1])
{

    case 1:cb[3]=1;b3=load_image("ri//R.png");break;
    case 2:cb[3]=2;b3=load_image("ri//G.png");break;
    case 3:cb[3]=3;b3=load_image("ri//B.png");break;
    case 4:cb[3]=4;b3=load_image("ri//Y.png");break;
    case 5:cb[3]=5;b3=load_image("ri//V.png");break;
    case 6:cb[3]=6;b3=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cr[1]=1;r1=load_image("ri//SR.png");break;
    case 2:cr[1]=2;r1=load_image("ri//SG.png");break;
    case 3:cr[1]=3;r1=load_image("ri//SB.png");break;
    case 4:cr[1]=4;r1=load_image("ri//SY.png");break;
    case 5:cr[1]=5;r1=load_image("ri//SV.png");break;
    case 6:cr[1]=6;r1=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cr[2]=1;r2=load_image("ri//SR.png");break;
    case 2:cr[2]=2;r2=load_image("ri//SG.png");break;
    case 3:cr[2]=3;r2=load_image("ri//SB.png");break;
    case 4:cr[2]=4;r2=load_image("ri//SY.png");break;
    case 5:cr[2]=5;r2=load_image("ri//SV.png");break;
    case 6:cr[2]=6;r2=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cr[3]=1;r3=load_image("ri//SR.png");break;
    case 2:cr[3]=2;r3=load_image("ri//SG.png");break;
    case 3:cr[3]=3;r3=load_image("ri//SB.png");break;
    case 4:cr[3]=4;r3=load_image("ri//SY.png");break;
    case 5:cr[3]=5;r3=load_image("ri//SV.png");break;
    case 6:cr[3]=6;r3=load_image("ri//SP.png");break;
}

a=cfr[7];
b=cfr[8];
c=cfr[4];
switch(cfr[1])
{
    case 1:cfr[7]=1;fr7=load_image("ri//SSR.png");break;
    case 2:cfr[7]=2;fr7=load_image("ri//SSG.png");break;
    case 3:cfr[7]=3;fr7=load_image("ri//SSB.png");break;
    case 4:cfr[7]=4;fr7=load_image("ri//SSY.png");break;
    case 5:cfr[7]=5;fr7=load_image("ri//SSV.png");break;
    case 6:cfr[7]=6;fr7=load_image("ri//SSP.png");break;

}
switch(cfr[2])
{
    case 1:cfr[4]=1;fr4=load_image("ri//SSR.png");break;
    case 2:cfr[4]=2;fr4=load_image("ri//SSG.png");break;
    case 3:cfr[4]=3;fr4=load_image("ri//SSB.png");break;
    case 4:cfr[4]=4;fr4=load_image("ri//SSY.png");break;
    case 5:cfr[4]=5;fr4=load_image("ri//SSV.png");break;
    case 6:cfr[4]=6;fr4=load_image("ri//SSP.png");break;

}
switch(cfr[3])
{
    case 1:cfr[1]=1;fr1=load_image("ri//SSR.png");break;
    case 2:cfr[1]=2;fr1=load_image("ri//SSG.png");break;
    case 3:cfr[1]=3;fr1=load_image("ri//SSB.png");break;
    case 4:cfr[1]=4;fr1=load_image("ri//SSY.png");break;
    case 5:cfr[1]=5;fr1=load_image("ri//SSV.png");break;
    case 6:cfr[1]=6;fr1=load_image("ri//SSP.png");break;

}
switch(c)
{
    case 1:cfr[8]=1;fr8=load_image("ri//SSR.png");break;
    case 2:cfr[8]=2;fr8=load_image("ri//SSG.png");break;
    case 3:cfr[8]=3;fr8=load_image("ri//SSB.png");break;
    case 4:cfr[8]=4;fr8=load_image("ri//SSY.png");break;
    case 5:cfr[8]=5;fr8=load_image("ri//SSV.png");break;
    case 6:cfr[8]=6;fr8=load_image("ri//SSP.png");break;

}
switch(cfr[6])
{
    case 1:cfr[2]=1;fr2=load_image("ri//SSR.png");break;
    case 2:cfr[2]=2;fr2=load_image("ri//SSG.png");break;
    case 3:cfr[2]=3;fr2=load_image("ri//SSB.png");break;
    case 4:cfr[2]=4;fr2=load_image("ri//SSY.png");break;
    case 5:cfr[2]=5;fr2=load_image("ri//SSV.png");break;
    case 6:cfr[2]=6;fr2=load_image("ri//SSP.png");break;

}

switch(cfr[9])
{
    case 1:cfr[3]=1;fr3=load_image("ri//SSR.png");break;
    case 2:cfr[3]=2;fr3=load_image("ri//SSG.png");break;
    case 3:cfr[3]=3;fr3=load_image("ri//SSB.png");break;
    case 4:cfr[3]=4;fr3=load_image("ri//SSY.png");break;
    case 5:cfr[3]=5;fr3=load_image("ri//SSV.png");break;
    case 6:cfr[3]=6;fr3=load_image("ri//SSP.png");break;

}
switch(a)
{
    case 1:cfr[9]=1;fr9=load_image("ri//SSR.png");break;
    case 2:cfr[9]=2;fr9=load_image("ri//SSG.png");break;
    case 3:cfr[9]=3;fr9=load_image("ri//SSB.png");break;
    case 4:cfr[9]=4;fr9=load_image("ri//SSY.png");break;
    case 5:cfr[9]=5;fr9=load_image("ri//SSV.png");break;
    case 6:cfr[9]=6;fr9=load_image("ri//SSP.png");break;

}
switch(b)
{
    case 1:cfr[6]=1;fr6=load_image("ri//SSR.png");break;
    case 2:cfr[6]=2;fr6=load_image("ri//SSG.png");break;
    case 3:cfr[6]=3;fr6=load_image("ri//SSB.png");break;
    case 4:cfr[6]=4;fr6=load_image("ri//SSY.png");break;
    case 5:cfr[6]=5;fr6=load_image("ri//SSV.png");break;
    case 6:cfr[6]=6;fr6=load_image("ri//SSP.png");break;

}

}
else if(hl==2)
{
SDL_FreeSurface( f4 );
SDL_FreeSurface( f5 );
SDL_FreeSurface( f6 );
SDL_FreeSurface( b4 );
SDL_FreeSurface( b5 );
SDL_FreeSurface( b6 );
SDL_FreeSurface( r4 );
SDL_FreeSurface( r5 );
SDL_FreeSurface( r6 );
SDL_FreeSurface( l4 );
SDL_FreeSurface( l5 );
SDL_FreeSurface( l6 );
a=cf[4];
b=cf[5];
c=cf[6];
fflush(stdin);
switch(cl[4])
{

    case 1:cf[4]=1;f4=load_image("ri//R.png");break;
    case 2:cf[4]=2;f4=load_image("ri//G.png");break;
    case 3:cf[4]=3;f4=load_image("ri//B.png");break;
    case 4:cf[4]=4;f4=load_image("ri//Y.png");break;
    case 5:cf[4]=5;f4=load_image("ri//V.png");break;
    case 6:cf[4]=6;f4=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[5])
{

    case 1:cf[5]=1;f5=load_image("ri//R.png");break;
    case 2:cf[5]=2;f5=load_image("ri//G.png");break;
    case 3:cf[5]=3;f5=load_image("ri//B.png");break;
    case 4:cf[5]=4;f5=load_image("ri//Y.png");break;
    case 5:cf[5]=5;f5=load_image("ri//V.png");break;
    case 6:cf[5]=6;f5=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[6])
{

    case 1:cf[6]=1;f6=load_image("ri//R.png");break;
    case 2:cf[6]=2;f6=load_image("ri//G.png");break;
    case 3:cf[6]=3;f6=load_image("ri//B.png");break;
    case 4:cf[6]=4;f6=load_image("ri//Y.png");break;
    case 5:cf[6]=5;f6=load_image("ri//V.png");break;
    case 6:cf[6]=6;f6=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[6])
{

    case 1:cl[4]=1;l4=load_image("ri//SR.png");break;
    case 2:cl[4]=2;l4=load_image("ri//SG.png");break;
    case 3:cl[4]=3;l4=load_image("ri//SB.png");break;
    case 4:cl[4]=4;l4=load_image("ri//SY.png");break;
    case 5:cl[4]=5;l4=load_image("ri//SV.png");break;
    case 6:cl[4]=6;l4=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[5])
{

    case 1:cl[5]=1;l5=load_image("ri//SR.png");break;
    case 2:cl[5]=2;l5=load_image("ri//SG.png");break;
    case 3:cl[5]=3;l5=load_image("ri//SB.png");break;
    case 4:cl[5]=4;l5=load_image("ri//SY.png");break;
    case 5:cl[5]=5;l5=load_image("ri//SV.png");break;
    case 6:cl[5]=6;l5=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[4])
{

    case 1:cl[6]=1;l6=load_image("ri//SR.png");break;
    case 2:cl[6]=2;l6=load_image("ri//SG.png");break;
    case 3:cl[6]=3;l6=load_image("ri//SB.png");break;
    case 4:cl[6]=4;l6=load_image("ri//SY.png");break;
    case 5:cl[6]=5;l6=load_image("ri//SV.png");break;
    case 6:cl[6]=6;l6=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cr[6])
{

    case 1:cb[4]=1;b4=load_image("ri//R.png");break;
    case 2:cb[4]=2;b4=load_image("ri//G.png");break;
    case 3:cb[4]=3;b4=load_image("ri//B.png");break;
    case 4:cb[4]=4;b4=load_image("ri//Y.png");break;
    case 5:cb[4]=5;b4=load_image("ri//V.png");break;
    case 6:cb[4]=6;b4=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[5])
{

    case 1:cb[5]=1;b5=load_image("ri//R.png");break;
    case 2:cb[5]=2;b5=load_image("ri//G.png");break;
    case 3:cb[5]=3;b5=load_image("ri//B.png");break;
    case 4:cb[5]=4;b5=load_image("ri//Y.png");break;
    case 5:cb[5]=5;b5=load_image("ri//V.png");break;
    case 6:cb[5]=6;b5=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[4])
{

    case 1:cb[6]=1;b6=load_image("ri//R.png");break;
    case 2:cb[6]=2;b6=load_image("ri//G.png");break;
    case 3:cb[6]=3;b6=load_image("ri//B.png");break;
    case 4:cb[6]=4;b6=load_image("ri//Y.png");break;
    case 5:cb[6]=5;b6=load_image("ri//V.png");break;
    case 6:cb[6]=6;b6=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cr[4]=1;r4=load_image("ri//SR.png");break;
    case 2:cr[4]=2;r4=load_image("ri//SG.png");break;
    case 3:cr[4]=3;r4=load_image("ri//SB.png");break;
    case 4:cr[4]=4;r4=load_image("ri//SY.png");break;
    case 5:cr[4]=5;r4=load_image("ri//SV.png");break;
    case 6:cr[4]=6;r4=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cr[5]=1;r5=load_image("ri//SR.png");break;
    case 2:cr[5]=2;r5=load_image("ri//SG.png");break;
    case 3:cr[5]=3;r5=load_image("ri//SB.png");break;
    case 4:cr[5]=4;r5=load_image("ri//SY.png");break;
    case 5:cr[5]=5;r5=load_image("ri//SV.png");break;
    case 6:cr[5]=6;r5=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cr[6]=1;r6=load_image("ri//SR.png");break;
    case 2:cr[6]=2;r6=load_image("ri//SG.png");break;
    case 3:cr[6]=3;r6=load_image("ri//SB.png");break;
    case 4:cr[6]=4;r6=load_image("ri//SY.png");break;
    case 5:cr[6]=5;r6=load_image("ri//SV.png");break;
    case 6:cr[6]=6;r6=load_image("ri//SP.png");break;
}
}
else if(hl==3)
{
SDL_FreeSurface( f7 );
SDL_FreeSurface( f8 );
SDL_FreeSurface( f9 );
SDL_FreeSurface( b7 );
SDL_FreeSurface( b8 );
SDL_FreeSurface( b9 );
SDL_FreeSurface( r7 );
SDL_FreeSurface( r8 );
SDL_FreeSurface( r9 );
SDL_FreeSurface( l7 );
SDL_FreeSurface( l8 );
SDL_FreeSurface( l9 );

SDL_FreeSurface( bk1 );
SDL_FreeSurface( bk2 );
SDL_FreeSurface( bk3 );
SDL_FreeSurface( bk4 );
SDL_FreeSurface( bk6 );
SDL_FreeSurface( bk7 );
SDL_FreeSurface( bk8 );
SDL_FreeSurface( bk9 );
a=cf[7];
b=cf[8];
c=cf[9];
fflush(stdin);
switch(cl[7])
{

    case 1:cf[7]=1;f7=load_image("ri//R.png");break;
    case 2:cf[7]=2;f7=load_image("ri//G.png");break;
    case 3:cf[7]=3;f7=load_image("ri//B.png");break;
    case 4:cf[7]=4;f7=load_image("ri//Y.png");break;
    case 5:cf[7]=5;f7=load_image("ri//V.png");break;
    case 6:cf[7]=6;f7=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[8])
{

    case 1:cf[8]=1;f8=load_image("ri//R.png");break;
    case 2:cf[8]=2;f8=load_image("ri//G.png");break;
    case 3:cf[8]=3;f8=load_image("ri//B.png");break;
    case 4:cf[8]=4;f8=load_image("ri//Y.png");break;
    case 5:cf[8]=5;f8=load_image("ri//V.png");break;
    case 6:cf[8]=6;f8=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cl[9])
{

    case 1:cf[9]=1;f9=load_image("ri//R.png");break;
    case 2:cf[9]=2;f9=load_image("ri//G.png");break;
    case 3:cf[9]=3;f9=load_image("ri//B.png");break;
    case 4:cf[9]=4;f9=load_image("ri//Y.png");break;
    case 5:cf[9]=5;f9=load_image("ri//V.png");break;
    case 6:cf[9]=6;f9=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[9])
{

    case 1:cl[7]=1;l7=load_image("ri//SR.png");break;
    case 2:cl[7]=2;l7=load_image("ri//SG.png");break;
    case 3:cl[7]=3;l7=load_image("ri//SB.png");break;
    case 4:cl[7]=4;l7=load_image("ri//SY.png");break;
    case 5:cl[7]=5;l7=load_image("ri//SV.png");break;
    case 6:cl[7]=6;l7=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[8])
{

    case 1:cl[8]=1;l8=load_image("ri//SR.png");break;
    case 2:cl[8]=2;l8=load_image("ri//SG.png");break;
    case 3:cl[8]=3;l8=load_image("ri//SB.png");break;
    case 4:cl[8]=4;l8=load_image("ri//SY.png");break;
    case 5:cl[8]=5;l8=load_image("ri//SV.png");break;
    case 6:cl[8]=6;l8=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cb[7])
{

    case 1:cl[9]=1;l9=load_image("ri//SR.png");break;
    case 2:cl[9]=2;l9=load_image("ri//SG.png");break;
    case 3:cl[9]=3;l9=load_image("ri//SB.png");break;
    case 4:cl[9]=4;l9=load_image("ri//SY.png");break;
    case 5:cl[9]=5;l9=load_image("ri//SV.png");break;
    case 6:cl[9]=6;l9=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(cr[9])
{

    case 1:cb[7]=1;b7=load_image("ri//R.png");break;
    case 2:cb[7]=2;b7=load_image("ri//G.png");break;
    case 3:cb[7]=3;b7=load_image("ri//B.png");break;
    case 4:cb[7]=4;b7=load_image("ri//Y.png");break;
    case 5:cb[7]=5;b7=load_image("ri//V.png");break;
    case 6:cb[7]=6;b7=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[8])
{

    case 1:cb[8]=1;b8=load_image("ri//R.png");break;
    case 2:cb[8]=2;b8=load_image("ri//G.png");break;
    case 3:cb[8]=3;b8=load_image("ri//B.png");break;
    case 4:cb[8]=4;b8=load_image("ri//Y.png");break;
    case 5:cb[8]=5;b8=load_image("ri//V.png");break;
    case 6:cb[8]=6;b8=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cr[7])
{

    case 1:cb[9]=1;b9=load_image("ri//R.png");break;
    case 2:cb[9]=2;b9=load_image("ri//G.png");break;
    case 3:cb[9]=3;b9=load_image("ri//B.png");break;
    case 4:cb[9]=4;b9=load_image("ri//Y.png");break;
    case 5:cb[9]=5;b9=load_image("ri//V.png");break;
    case 6:cb[9]=6;b9=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cr[7]=1;r7=load_image("ri//SR.png");break;
    case 2:cr[7]=2;r7=load_image("ri//SG.png");break;
    case 3:cr[7]=3;r7=load_image("ri//SB.png");break;
    case 4:cr[7]=4;r7=load_image("ri//SY.png");break;
    case 5:cr[7]=5;r7=load_image("ri//SV.png");break;
    case 6:cr[7]=6;r7=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cr[8]=1;r8=load_image("ri//SR.png");break;
    case 2:cr[8]=2;r8=load_image("ri//SG.png");break;
    case 3:cr[8]=3;r8=load_image("ri//SB.png");break;
    case 4:cr[8]=4;r8=load_image("ri//SY.png");break;
    case 5:cr[8]=5;r8=load_image("ri//SV.png");break;
    case 6:cr[8]=6;r8=load_image("ri//SP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cr[9]=1;r9=load_image("ri//SR.png");break;
    case 2:cr[9]=2;r9=load_image("ri//SG.png");break;
    case 3:cr[9]=3;r9=load_image("ri//SB.png");break;
    case 4:cr[9]=4;r9=load_image("ri//SY.png");break;
    case 5:cr[9]=5;r9=load_image("ri//SV.png");break;
    case 6:cr[9]=6;r9=load_image("ri//SP.png");break;
}
int i=0;
while(i<3)
{
i++;
a=cbk[4];
b=cbk[7];
c=cbk[8];
switch(cbk[1])
{
    case 1:cbk[7]=1;bk7=load_image("ri//SSR.png");break;
    case 2:cbk[7]=2;bk7=load_image("ri//SSG.png");break;
    case 3:cbk[7]=3;bk7=load_image("ri//SSB.png");break;
    case 4:cbk[7]=4;bk7=load_image("ri//SSY.png");break;
    case 5:cbk[7]=5;bk7=load_image("ri//SSV.png");break;
    case 6:cbk[7]=6;bk7=load_image("ri//SSP.png");break;

}
switch(cbk[2])
{
    case 1:cbk[4]=1;bk4=load_image("ri//SSR.png");break;
    case 2:cbk[4]=2;bk4=load_image("ri//SSG.png");break;
    case 3:cbk[4]=3;bk4=load_image("ri//SSB.png");break;
    case 4:cbk[4]=4;bk4=load_image("ri//SSY.png");break;
    case 5:cbk[4]=5;bk4=load_image("ri//SSV.png");break;
    case 6:cbk[4]=6;bk4=load_image("ri//SSP.png");break;

}
switch(cbk[3])
{
    case 1:cbk[1]=1;bk1=load_image("ri//SSR.png");break;
    case 2:cbk[1]=2;bk1=load_image("ri//SSG.png");break;
    case 3:cbk[1]=3;bk1=load_image("ri//SSB.png");break;
    case 4:cbk[1]=4;bk1=load_image("ri//SSY.png");break;
    case 5:cbk[1]=5;bk1=load_image("ri//SSV.png");break;
    case 6:cbk[1]=6;bk1=load_image("ri//SSP.png");break;
}
switch(a)
{
    case 1:cbk[8]=1;bk8=load_image("ri//SSR.png");break;
    case 2:cbk[8]=2;bk8=load_image("ri//SSG.png");break;
    case 3:cbk[8]=3;bk8=load_image("ri//SSB.png");break;
    case 4:cbk[8]=4;bk8=load_image("ri//SSY.png");break;
    case 5:cbk[8]=5;bk8=load_image("ri//SSV.png");break;
    case 6:cbk[8]=6;bk8=load_image("ri//SSP.png");break;

}
switch(cbk[6])
{
    case 1:cbk[2]=1;bk2=load_image("ri//SSR.png");break;
    case 2:cbk[2]=2;bk2=load_image("ri//SSG.png");break;
    case 3:cbk[2]=3;bk2=load_image("ri//SSB.png");break;
    case 4:cbk[2]=4;bk2=load_image("ri//SSY.png");break;
    case 5:cbk[2]=5;bk2=load_image("ri//SSV.png");break;
    case 6:cbk[2]=6;bk2=load_image("ri//SSP.png");break;

}
switch(cbk[9])
{
    case 1:cbk[3]=1;bk3=load_image("ri//SSR.png");break;
    case 2:cbk[3]=2;bk3=load_image("ri//SSG.png");break;
    case 3:cbk[3]=3;bk3=load_image("ri//SSB.png");break;
    case 4:cbk[3]=4;bk3=load_image("ri//SSY.png");break;
    case 5:cbk[3]=5;bk3=load_image("ri//SSV.png");break;
    case 6:cbk[3]=6;bk3=load_image("ri//SSP.png");break;

}
switch(c)
{
    case 1:cbk[6]=1;bk6=load_image("ri//SSR.png");break;
    case 2:cbk[6]=2;bk6=load_image("ri//SSG.png");break;
    case 3:cbk[6]=3;bk6=load_image("ri//SSB.png");break;
    case 4:cbk[6]=4;bk6=load_image("ri//SSY.png");break;
    case 5:cbk[6]=5;bk6=load_image("ri//SSV.png");break;
    case 6:cbk[6]=6;bk6=load_image("ri//SSP.png");break;

}
switch(b)
{
    case 1:cbk[9]=1;bk9=load_image("ri//SSR.png");break;
    case 2:cbk[9]=2;bk9=load_image("ri//SSG.png");break;
    case 3:cbk[9]=3;bk9=load_image("ri//SSB.png");break;
    case 4:cbk[9]=4;bk9=load_image("ri//SSY.png");break;
    case 5:cbk[9]=5;bk9=load_image("ri//SSV.png");break;
    case 6:cbk[9]=6;bk9=load_image("ri//SSP.png");break;

}
}
}

   }


       if(lr==3)    //up arrow is presed
       {
       if(vl==1)
       {

SDL_FreeSurface( f1 );
SDL_FreeSurface( f4 );
SDL_FreeSurface( f7 );
SDL_FreeSurface( b1 );
SDL_FreeSurface( b4 );
SDL_FreeSurface( b7 );
SDL_FreeSurface( fr1 );
SDL_FreeSurface( fr4 );
SDL_FreeSurface( fr7 );
SDL_FreeSurface( bk1 );
SDL_FreeSurface( bk4 );
SDL_FreeSurface( bk7 );

a=cf[1];
b=cf[4];
c=cf[7];
fflush(stdin);
switch(cbk[1])
{

    case 1:cf[1]=1;f1=load_image("ri//R.png");break;
    case 2:cf[1]=2;f1=load_image("ri//G.png");break;
    case 3:cf[1]=3;f1=load_image("ri//B.png");break;
    case 4:cf[1]=4;f1=load_image("ri//Y.png");break;
    case 5:cf[1]=5;f1=load_image("ri//V.png");break;
    case 6:cf[1]=6;f1=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[4])
{

    case 1:cf[4]=1;f4=load_image("ri//R.png");break;
    case 2:cf[4]=2;f4=load_image("ri//G.png");break;
    case 3:cf[4]=3;f4=load_image("ri//B.png");break;
    case 4:cf[4]=4;f4=load_image("ri//Y.png");break;
    case 5:cf[4]=5;f4=load_image("ri//V.png");break;
    case 6:cf[4]=6;f4=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[7])
{

    case 1:cf[7]=1;f7=load_image("ri//R.png");break;
    case 2:cf[7]=2;f7=load_image("ri//G.png");break;
    case 3:cf[7]=3;f7=load_image("ri//B.png");break;
    case 4:cf[7]=4;f7=load_image("ri//Y.png");break;
    case 5:cf[7]=5;f7=load_image("ri//V.png");break;
    case 6:cf[7]=6;f7=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[7])
{

    case 1:cbk[1]=1;bk1=load_image("ri//SSR.png");break;
    case 2:cbk[1]=2;bk1=load_image("ri//SSG.png");break;
    case 3:cbk[1]=3;bk1=load_image("ri//SSB.png");break;
    case 4:cbk[1]=4;bk1=load_image("ri//SSY.png");break;
    case 5:cbk[1]=5;bk1=load_image("ri//SSV.png");break;
    case 6:cbk[1]=6;bk1=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[4])
{

    case 1:cbk[4]=1;bk4=load_image("ri//SSR.png");break;
    case 2:cbk[4]=2;bk4=load_image("ri//SSG.png");break;
    case 3:cbk[4]=3;bk4=load_image("ri//SSB.png");break;
    case 4:cbk[4]=4;bk4=load_image("ri//SSY.png");break;
    case 5:cbk[4]=5;bk4=load_image("ri//SSV.png");break;
    case 6:cbk[4]=6;bk4=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[1])
{

    case 1:cbk[7]=1;bk7=load_image("ri//SSR.png");break;
    case 2:cbk[7]=2;bk7=load_image("ri//SSG.png");break;
    case 3:cbk[7]=3;bk7=load_image("ri//SSB.png");break;
    case 4:cbk[7]=4;bk7=load_image("ri//SSY.png");break;
    case 5:cbk[7]=5;bk7=load_image("ri//SSV.png");break;
    case 6:cbk[7]=6;bk7=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cfr[7])
{

    case 1:cb[1]=1;b1=load_image("ri//R.png");break;
    case 2:cb[1]=2;b1=load_image("ri//G.png");break;
    case 3:cb[1]=3;b1=load_image("ri//B.png");break;
    case 4:cb[1]=4;b1=load_image("ri//Y.png");break;
    case 5:cb[1]=5;b1=load_image("ri//V.png");break;
    case 6:cb[1]=6;b1=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[4])
{

    case 1:cb[4]=1;b4=load_image("ri//R.png");break;
    case 2:cb[4]=2;b4=load_image("ri//G.png");break;
    case 3:cb[4]=3;b4=load_image("ri//B.png");break;
    case 4:cb[4]=4;b4=load_image("ri//Y.png");break;
    case 5:cb[4]=5;b4=load_image("ri//V.png");break;
    case 6:cb[4]=6;b4=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[1])
{

    case 1:cb[7]=1;b7=load_image("ri//R.png");break;
    case 2:cb[7]=2;b7=load_image("ri//G.png");break;
    case 3:cb[7]=3;b7=load_image("ri//B.png");break;
    case 4:cb[7]=4;b7=load_image("ri//Y.png");break;
    case 5:cb[7]=5;b7=load_image("ri//V.png");break;
    case 6:cb[7]=6;b7=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cfr[1]=1;fr1=load_image("ri//SSR.png");break;
    case 2:cfr[1]=2;fr1=load_image("ri//SSG.png");break;
    case 3:cfr[1]=3;fr1=load_image("ri//SSB.png");break;
    case 4:cfr[1]=4;fr1=load_image("ri//SSY.png");break;
    case 5:cfr[1]=5;fr1=load_image("ri//SSV.png");break;
    case 6:cfr[1]=6;fr1=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cfr[4]=1;fr4=load_image("ri//SSR.png");break;
    case 2:cfr[4]=2;fr4=load_image("ri//SSG.png");break;
    case 3:cfr[4]=3;fr4=load_image("ri//SSB.png");break;
    case 4:cfr[4]=4;fr4=load_image("ri//SSY.png");break;
    case 5:cfr[4]=5;fr4=load_image("ri//SSV.png");break;
    case 6:cfr[4]=6;fr4=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cfr[7]=1;fr7=load_image("ri//SSR.png");break;
    case 2:cfr[7]=2;fr7=load_image("ri//SSG.png");break;
    case 3:cfr[7]=3;fr7=load_image("ri//SSB.png");break;
    case 4:cfr[7]=4;fr7=load_image("ri//SSY.png");break;
    case 5:cfr[7]=5;fr7=load_image("ri//SSV.png");break;
    case 6:cfr[7]=6;fr7=load_image("ri//SSP.png");break;
}
SDL_FreeSurface( l1 );
SDL_FreeSurface( l2 );
SDL_FreeSurface( l3 );
SDL_FreeSurface( l4 );
SDL_FreeSurface( l6 );
SDL_FreeSurface( l7 );
SDL_FreeSurface( l8 );
SDL_FreeSurface( l9 );
a=cl[7];
b=cl[8];
c=cl[4];
switch(cl[1])
{
    case 1:cl[7]=1;l7=load_image("ri//SR.png");break;
    case 2:cl[7]=2;l7=load_image("ri//SG.png");break;
    case 3:cl[7]=3;l7=load_image("ri//SB.png");break;
    case 4:cl[7]=4;l7=load_image("ri//SY.png");break;
    case 5:cl[7]=5;l7=load_image("ri//SV.png");break;
    case 6:cl[7]=6;l7=load_image("ri//SP.png");break;

}
switch(cl[2])
{
    case 1:cl[4]=1;l4=load_image("ri//SR.png");break;
    case 2:cl[4]=2;l4=load_image("ri//SG.png");break;
    case 3:cl[4]=3;l4=load_image("ri//SB.png");break;
    case 4:cl[4]=4;l4=load_image("ri//SY.png");break;
    case 5:cl[4]=5;l4=load_image("ri//SV.png");break;
    case 6:cl[4]=6;l4=load_image("ri//SP.png");break;

}
switch(cl[3])
{
    case 1:cl[1]=1;l1=load_image("ri//SR.png");break;
    case 2:cl[1]=2;l1=load_image("ri//SG.png");break;
    case 3:cl[1]=3;l1=load_image("ri//SB.png");break;
    case 4:cl[1]=4;l1=load_image("ri//SY.png");break;
    case 5:cl[1]=5;l1=load_image("ri//SV.png");break;
    case 6:cl[1]=6;l1=load_image("ri//SP.png");break;

}
switch(c)
{
    case 1:cl[8]=1;l8=load_image("ri//SR.png");break;
    case 2:cl[8]=2;l8=load_image("ri//SG.png");break;
    case 3:cl[8]=3;l8=load_image("ri//SB.png");break;
    case 4:cl[8]=4;l8=load_image("ri//SY.png");break;
    case 5:cl[8]=5;l8=load_image("ri//SV.png");break;
    case 6:cl[8]=6;l8=load_image("ri//SP.png");break;

}
switch(cl[6])
{
    case 1:cl[2]=1;l2=load_image("ri//SR.png");break;
    case 2:cl[2]=2;l2=load_image("ri//SG.png");break;
    case 3:cl[2]=3;l2=load_image("ri//SB.png");break;
    case 4:cl[2]=4;l2=load_image("ri//SY.png");break;
    case 5:cl[2]=5;l2=load_image("ri//SV.png");break;
    case 6:cl[2]=6;l2=load_image("ri//SP.png");break;

}
switch(cl[9])
{
    case 1:cl[3]=1;l3=load_image("ri//SR.png");break;
    case 2:cl[3]=2;l3=load_image("ri//SG.png");break;
    case 3:cl[3]=3;l3=load_image("ri//SB.png");break;
    case 4:cl[3]=4;l3=load_image("ri//SY.png");break;
    case 5:cl[3]=5;l3=load_image("ri//SV.png");break;
    case 6:cl[3]=6;l3=load_image("ri//SP.png");break;

}
switch(a)
{
    case 1:cl[9]=1;l9=load_image("ri//SR.png");break;
    case 2:cl[9]=2;l9=load_image("ri//SG.png");break;
    case 3:cl[9]=3;l9=load_image("ri//SB.png");break;
    case 4:cl[9]=4;l9=load_image("ri//SY.png");break;
    case 5:cl[9]=5;l9=load_image("ri//SV.png");break;
    case 6:cl[9]=6;l9=load_image("ri//SP.png");break;

}
switch(b)
{
    case 1:cl[6]=1;l6=load_image("ri//SR.png");break;
    case 2:cl[6]=2;l6=load_image("ri//SG.png");break;
    case 3:cl[6]=3;l6=load_image("ri//SB.png");break;
    case 4:cl[6]=4;l6=load_image("ri//SY.png");break;
    case 5:cl[6]=5;l6=load_image("ri//SV.png");break;
    case 6:cl[6]=6;l6=load_image("ri//SP.png");break;

}
       }
       else if(vl==2)
       {
SDL_FreeSurface( f2 );
SDL_FreeSurface( f5 );
SDL_FreeSurface( f8 );
SDL_FreeSurface( b2 );
SDL_FreeSurface( b5 );
SDL_FreeSurface( b8 );
SDL_FreeSurface( fr2 );
SDL_FreeSurface( fr5 );
SDL_FreeSurface( fr8 );
SDL_FreeSurface( bk2 );
SDL_FreeSurface( bk5 );
SDL_FreeSurface( bk8 );
a=cf[2];
b=cf[5];
c=cf[8];
fflush(stdin);
switch(cbk[5])
{

    case 1:cf[5]=1;f5=load_image("ri//R.png");break;
    case 2:cf[5]=2;f5=load_image("ri//G.png");break;
    case 3:cf[5]=3;f5=load_image("ri//B.png");break;
    case 4:cf[5]=4;f5=load_image("ri//Y.png");break;
    case 5:cf[5]=5;f5=load_image("ri//V.png");break;
    case 6:cf[5]=6;f5=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[2])
{

    case 1:cf[2]=1;f2=load_image("ri//R.png");break;
    case 2:cf[2]=2;f2=load_image("ri//G.png");break;
    case 3:cf[2]=3;f2=load_image("ri//B.png");break;
    case 4:cf[2]=4;f2=load_image("ri//Y.png");break;
    case 5:cf[2]=5;f2=load_image("ri//V.png");break;
    case 6:cf[2]=6;f2=load_image("ri//P.png");break;
}

switch(cbk[8])
{

    case 1:cf[8]=1;f8=load_image("ri//R.png");break;
    case 2:cf[8]=2;f8=load_image("ri//G.png");break;
    case 3:cf[8]=3;f8=load_image("ri//B.png");break;
    case 4:cf[8]=4;f8=load_image("ri//Y.png");break;
    case 5:cf[8]=5;f8=load_image("ri//V.png");break;
    case 6:cf[8]=6;f8=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[8])
{

    case 1:cbk[2]=1;bk2=load_image("ri//SSR.png");break;
    case 2:cbk[2]=2;bk2=load_image("ri//SSG.png");break;
    case 3:cbk[2]=3;bk2=load_image("ri//SSB.png");break;
    case 4:cbk[2]=4;bk2=load_image("ri//SSY.png");break;
    case 5:cbk[2]=5;bk2=load_image("ri//SSV.png");break;
    case 6:cbk[2]=6;bk2=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[5])
{

    case 1:cbk[5]=1;bk5=load_image("ri//SSR.png");break;
    case 2:cbk[5]=2;bk5=load_image("ri//SSG.png");break;
    case 3:cbk[5]=3;bk5=load_image("ri//SSB.png");break;
    case 4:cbk[5]=4;bk5=load_image("ri//SSY.png");break;
    case 5:cbk[5]=5;bk5=load_image("ri//SSV.png");break;
    case 6:cbk[5]=6;bk5=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[2])
{

    case 1:cbk[8]=1;bk8=load_image("ri//SSR.png");break;
    case 2:cbk[8]=2;bk8=load_image("ri//SSG.png");break;
    case 3:cbk[8]=3;bk8=load_image("ri//SSB.png");break;
    case 4:cbk[8]=4;bk8=load_image("ri//SSY.png");break;
    case 5:cbk[8]=5;bk8=load_image("ri//SSV.png");break;
    case 6:cbk[8]=6;bk8=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cfr[8])
{

    case 1:cb[2]=1;b2=load_image("ri//R.png");break;
    case 2:cb[2]=2;b2=load_image("ri//G.png");break;
    case 3:cb[2]=3;b2=load_image("ri//B.png");break;
    case 4:cb[2]=4;b2=load_image("ri//Y.png");break;
    case 5:cb[2]=5;b2=load_image("ri//V.png");break;
    case 6:cb[2]=6;b2=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[5])
{

    case 1:cb[5]=1;b5=load_image("ri//R.png");break;
    case 2:cb[5]=2;b5=load_image("ri//G.png");break;
    case 3:cb[5]=3;b5=load_image("ri//B.png");break;
    case 4:cb[5]=4;b5=load_image("ri//Y.png");break;
    case 5:cb[5]=5;b5=load_image("ri//V.png");break;
    case 6:cb[5]=6;b5=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[2])
{

    case 1:cb[8]=1;b8=load_image("ri//R.png");break;
    case 2:cb[8]=2;b8=load_image("ri//G.png");break;
    case 3:cb[8]=3;b8=load_image("ri//B.png");break;
    case 4:cb[8]=4;b8=load_image("ri//Y.png");break;
    case 5:cb[8]=5;b8=load_image("ri//V.png");break;
    case 6:cb[8]=6;b8=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cfr[2]=1;fr2=load_image("ri//SSR.png");break;
    case 2:cfr[2]=2;fr2=load_image("ri//SSG.png");break;
    case 3:cfr[2]=3;fr2=load_image("ri//SSB.png");break;
    case 4:cfr[2]=4;fr2=load_image("ri//SSY.png");break;
    case 5:cfr[2]=5;fr2=load_image("ri//SSV.png");break;
    case 6:cfr[2]=6;fr2=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cfr[5]=1;fr5=load_image("ri//SSR.png");break;
    case 2:cfr[5]=2;fr5=load_image("ri//SSG.png");break;
    case 3:cfr[5]=3;fr5=load_image("ri//SSB.png");break;
    case 4:cfr[5]=4;fr5=load_image("ri//SSY.png");break;
    case 5:cfr[5]=5;fr5=load_image("ri//SSV.png");break;
    case 6:cfr[5]=6;fr5=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cfr[8]=1;fr8=load_image("ri//SSR.png");break;
    case 2:cfr[8]=2;fr8=load_image("ri//SSG.png");break;
    case 3:cfr[8]=3;fr8=load_image("ri//SSB.png");break;
    case 4:cfr[8]=4;fr8=load_image("ri//SSY.png");break;
    case 5:cfr[8]=5;fr8=load_image("ri//SSV.png");break;
    case 6:cfr[8]=6;fr8=load_image("ri//SSP.png");break;
}
       }
       else if(vl==3)
       {
SDL_FreeSurface( f3 );
SDL_FreeSurface( f6 );
SDL_FreeSurface( f9 );
SDL_FreeSurface( b3 );
SDL_FreeSurface( b6 );
SDL_FreeSurface( b9 );
SDL_FreeSurface( fr3 );
SDL_FreeSurface( fr6 );
SDL_FreeSurface( fr9 );
SDL_FreeSurface( bk3 );
SDL_FreeSurface( bk6 );
SDL_FreeSurface( bk9 );

a=cf[3];
b=cf[6];
c=cf[9];
fflush(stdin);
switch(cbk[3])
{

    case 1:cf[3]=1;f3=load_image("ri//R.png");break;
    case 2:cf[3]=2;f3=load_image("ri//G.png");break;
    case 3:cf[3]=3;f3=load_image("ri//B.png");break;
    case 4:cf[3]=4;f3=load_image("ri//Y.png");break;
    case 5:cf[3]=5;f3=load_image("ri//V.png");break;
    case 6:cf[3]=6;f3=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[6])
{

    case 1:cf[6]=1;f6=load_image("ri//R.png");break;
    case 2:cf[6]=2;f6=load_image("ri//G.png");break;
    case 3:cf[6]=3;f6=load_image("ri//B.png");break;
    case 4:cf[6]=4;f6=load_image("ri//Y.png");break;
    case 5:cf[6]=5;f6=load_image("ri//V.png");break;
    case 6:cf[6]=6;f6=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[9])
{

    case 1:cf[9]=1;f9=load_image("ri//R.png");break;
    case 2:cf[9]=2;f9=load_image("ri//G.png");break;
    case 3:cf[9]=3;f9=load_image("ri//B.png");break;
    case 4:cf[9]=4;f9=load_image("ri//Y.png");break;
    case 5:cf[9]=5;f9=load_image("ri//V.png");break;
    case 6:cf[9]=6;f9=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[9])
{

    case 1:cbk[3]=1;bk3=load_image("ri//SSR.png");break;
    case 2:cbk[3]=2;bk3=load_image("ri//SSG.png");break;
    case 3:cbk[3]=3;bk3=load_image("ri//SSB.png");break;
    case 4:cbk[3]=4;bk3=load_image("ri//SSY.png");break;
    case 5:cbk[3]=5;bk3=load_image("ri//SSV.png");break;
    case 6:cbk[3]=6;bk3=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[6])
{

    case 1:cbk[6]=1;bk6=load_image("ri//SSR.png");break;
    case 2:cbk[6]=2;bk6=load_image("ri//SSG.png");break;
    case 3:cbk[6]=3;bk6=load_image("ri//SSB.png");break;
    case 4:cbk[6]=4;bk6=load_image("ri//SSY.png");break;
    case 5:cbk[6]=5;bk6=load_image("ri//SSV.png");break;
    case 6:cbk[6]=6;bk6=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[3])
{

    case 1:cbk[9]=1;bk9=load_image("ri//SSR.png");break;
    case 2:cbk[9]=2;bk9=load_image("ri//SSG.png");break;
    case 3:cbk[9]=3;bk9=load_image("ri//SSB.png");break;
    case 4:cbk[9]=4;bk9=load_image("ri//SSY.png");break;
    case 5:cbk[9]=5;bk9=load_image("ri//SSV.png");break;
    case 6:cbk[9]=6;bk9=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cfr[9])
{

    case 1:cb[3]=1;b3=load_image("ri//R.png");break;
    case 2:cb[3]=2;b3=load_image("ri//G.png");break;
    case 3:cb[3]=3;b3=load_image("ri//B.png");break;
    case 4:cb[3]=4;b3=load_image("ri//Y.png");break;
    case 5:cb[3]=5;b3=load_image("ri//V.png");break;
    case 6:cb[3]=6;b3=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[6])
{

    case 1:cb[6]=1;b6=load_image("ri//R.png");break;
    case 2:cb[6]=2;b6=load_image("ri//G.png");break;
    case 3:cb[6]=3;b6=load_image("ri//B.png");break;
    case 4:cb[6]=4;b6=load_image("ri//Y.png");break;
    case 5:cb[6]=5;b6=load_image("ri//V.png");break;
    case 6:cb[6]=6;b6=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[3])
{

    case 1:cb[9]=1;b9=load_image("ri//R.png");break;
    case 2:cb[9]=2;b9=load_image("ri//G.png");break;
    case 3:cb[9]=3;b9=load_image("ri//B.png");break;
    case 4:cb[9]=4;b9=load_image("ri//Y.png");break;
    case 5:cb[9]=5;b9=load_image("ri//V.png");break;
    case 6:cb[9]=6;b9=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cfr[3]=1;fr3=load_image("ri//SSR.png");break;
    case 2:cfr[3]=2;fr3=load_image("ri//SSG.png");break;
    case 3:cfr[3]=3;fr3=load_image("ri//SSB.png");break;
    case 4:cfr[3]=4;fr3=load_image("ri//SSY.png");break;
    case 5:cfr[3]=5;fr3=load_image("ri//SSV.png");break;
    case 6:cfr[3]=6;fr3=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cfr[6]=1;fr6=load_image("ri//SSR.png");break;
    case 2:cfr[6]=2;fr6=load_image("ri//SSG.png");break;
    case 3:cfr[6]=3;fr6=load_image("ri//SSB.png");break;
    case 4:cfr[6]=4;fr6=load_image("ri//SSY.png");break;
    case 5:cfr[6]=5;fr6=load_image("ri//SSV.png");break;
    case 6:cfr[6]=6;fr6=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cfr[9]=1;fr9=load_image("ri//SSR.png");break;
    case 2:cfr[9]=2;fr9=load_image("ri//SSG.png");break;
    case 3:cfr[9]=3;fr9=load_image("ri//SSB.png");break;
    case 4:cfr[9]=4;fr9=load_image("ri//SSY.png");break;
    case 5:cfr[9]=5;fr9=load_image("ri//SSV.png");break;
    case 6:cfr[9]=6;fr9=load_image("ri//SSP.png");break;
}

SDL_FreeSurface( r1 );
SDL_FreeSurface( r2 );
SDL_FreeSurface( r3 );
SDL_FreeSurface( r4 );
SDL_FreeSurface( r6 );
SDL_FreeSurface( r7 );
SDL_FreeSurface( r8 );
SDL_FreeSurface( r9 );
a=cr[2];
b=cr[3];
c=cr[6];
switch(cr[1])
{
    case 1:cr[3]=1;r3=load_image("ri//SR.png");break;
    case 2:cr[3]=2;r3=load_image("ri//SG.png");break;
    case 3:cr[3]=3;r3=load_image("ri//SB.png");break;
    case 4:cr[3]=4;r3=load_image("ri//SY.png");break;
    case 5:cr[3]=5;r3=load_image("ri//SV.png");break;
    case 6:cr[3]=6;r3=load_image("ri//SP.png");break;

}
switch(cr[4])
{
    case 1:cr[2]=1;r2=load_image("ri//SR.png");break;
    case 2:cr[2]=2;r2=load_image("ri//SG.png");break;
    case 3:cr[2]=3;r2=load_image("ri//SB.png");break;
    case 4:cr[2]=4;r2=load_image("ri//SY.png");break;
    case 5:cr[2]=5;r2=load_image("ri//SV.png");break;
    case 6:cr[2]=6;r2=load_image("ri//SP.png");break;

}
switch(cr[7])
{
    case 1:cr[1]=1;r1=load_image("ri//SR.png");break;
    case 2:cr[1]=2;r1=load_image("ri//SG.png");break;
    case 3:cr[1]=3;r1=load_image("ri//SB.png");break;
    case 4:cr[1]=4;r1=load_image("ri//SY.png");break;
    case 5:cr[1]=5;r1=load_image("ri//SV.png");break;
    case 6:cr[1]=6;r1=load_image("ri//SP.png");break;

}
switch(a)
{
    case 1:cr[6]=1;r6=load_image("ri//SR.png");break;
    case 2:cr[6]=2;r6=load_image("ri//SG.png");break;
    case 3:cr[6]=3;r6=load_image("ri//SB.png");break;
    case 4:cr[6]=4;r6=load_image("ri//SY.png");break;
    case 5:cr[6]=5;r6=load_image("ri//SV.png");break;
    case 6:cr[6]=6;r6=load_image("ri//SP.png");break;

}
switch(cr[8])
{
    case 1:cr[4]=1;r4=load_image("ri//SR.png");break;
    case 2:cr[4]=2;r4=load_image("ri//SG.png");break;
    case 3:cr[4]=3;r4=load_image("ri//SB.png");break;
    case 4:cr[4]=4;r4=load_image("ri//SY.png");break;
    case 5:cr[4]=5;r4=load_image("ri//SV.png");break;
    case 6:cr[4]=6;r4=load_image("ri//SP.png");break;

}
switch(cr[9])
{
    case 1:cr[7]=1;r7=load_image("ri//SR.png");break;
    case 2:cr[7]=2;r7=load_image("ri//SG.png");break;
    case 3:cr[7]=3;r7=load_image("ri//SB.png");break;
    case 4:cr[7]=4;r7=load_image("ri//SY.png");break;
    case 5:cr[7]=5;r7=load_image("ri//SV.png");break;
    case 6:cr[7]=6;r7=load_image("ri//SP.png");break;

}
switch(c)
{
    case 1:cr[8]=1;r8=load_image("ri//SR.png");break;
    case 2:cr[8]=2;r8=load_image("ri//SG.png");break;
    case 3:cr[8]=3;r8=load_image("ri//SB.png");break;
    case 4:cr[8]=4;r8=load_image("ri//SY.png");break;
    case 5:cr[8]=5;r8=load_image("ri//SV.png");break;
    case 6:cr[8]=6;r8=load_image("ri//SP.png");break;

}
switch(b)
{
    case 1:cr[9]=1;r9=load_image("ri//SR.png");break;
    case 2:cr[9]=2;r9=load_image("ri//SG.png");break;
    case 3:cr[9]=3;r9=load_image("ri//SB.png");break;
    case 4:cr[9]=4;r9=load_image("ri//SY.png");break;
    case 5:cr[9]=5;r9=load_image("ri//SV.png");break;
    case 6:cr[9]=6;r9=load_image("ri//SP.png");break;

}

       }
   }
   else if(lr==4)   //down arrow is presed
       {
       if(vl==1)
       {

SDL_FreeSurface( f1 );
SDL_FreeSurface( f4 );
SDL_FreeSurface( f7 );
SDL_FreeSurface( b1 );
SDL_FreeSurface( b4 );
SDL_FreeSurface( b7 );
SDL_FreeSurface( fr1 );
SDL_FreeSurface( fr4 );
SDL_FreeSurface( fr7 );
SDL_FreeSurface( bk1 );
SDL_FreeSurface( bk4 );
SDL_FreeSurface( bk7 );

a=cf[1];
b=cf[4];
c=cf[7];
fflush(stdin);
switch(cfr[1])
{

    case 1:cf[1]=1;f1=load_image("ri//R.png");break;
    case 2:cf[1]=2;f1=load_image("ri//G.png");break;
    case 3:cf[1]=3;f1=load_image("ri//B.png");break;
    case 4:cf[1]=4;f1=load_image("ri//Y.png");break;
    case 5:cf[1]=5;f1=load_image("ri//V.png");break;
    case 6:cf[1]=6;f1=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[4])
{

    case 1:cf[4]=1;f4=load_image("ri//R.png");break;
    case 2:cf[4]=2;f4=load_image("ri//G.png");break;
    case 3:cf[4]=3;f4=load_image("ri//B.png");break;
    case 4:cf[4]=4;f4=load_image("ri//Y.png");break;
    case 5:cf[4]=5;f4=load_image("ri//V.png");break;
    case 6:cf[4]=6;f4=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[7])
{

    case 1:cf[7]=1;f7=load_image("ri//R.png");break;
    case 2:cf[7]=2;f7=load_image("ri//G.png");break;
    case 3:cf[7]=3;f7=load_image("ri//B.png");break;
    case 4:cf[7]=4;f7=load_image("ri//Y.png");break;
    case 5:cf[7]=5;f7=load_image("ri//V.png");break;
    case 6:cf[7]=6;f7=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[7])
{

    case 1:cfr[1]=1;fr1=load_image("ri//SSR.png");break;
    case 2:cfr[1]=2;fr1=load_image("ri//SSG.png");break;
    case 3:cfr[1]=3;fr1=load_image("ri//SSB.png");break;
    case 4:cfr[1]=4;fr1=load_image("ri//SSY.png");break;
    case 5:cfr[1]=5;fr1=load_image("ri//SSV.png");break;
    case 6:cfr[1]=6;fr1=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[4])
{

    case 1:cfr[4]=1;fr4=load_image("ri//SSR.png");break;
    case 2:cfr[4]=2;fr4=load_image("ri//SSG.png");break;
    case 3:cfr[4]=3;fr4=load_image("ri//SSB.png");break;
    case 4:cfr[4]=4;fr4=load_image("ri//SSY.png");break;
    case 5:cfr[4]=5;fr4=load_image("ri//SSV.png");break;
    case 6:cfr[4]=6;fr4=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[1])
{

    case 1:cfr[7]=1;fr7=load_image("ri//SSR.png");break;
    case 2:cfr[7]=2;fr7=load_image("ri//SSG.png");break;
    case 3:cfr[7]=3;fr7=load_image("ri//SSB.png");break;
    case 4:cfr[7]=4;fr7=load_image("ri//SSY.png");break;
    case 5:cfr[7]=5;fr7=load_image("ri//SSV.png");break;
    case 6:cfr[7]=6;fr7=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cbk[7])
{

    case 1:cb[1]=1;b1=load_image("ri//R.png");break;
    case 2:cb[1]=2;b1=load_image("ri//G.png");break;
    case 3:cb[1]=3;b1=load_image("ri//B.png");break;
    case 4:cb[1]=4;b1=load_image("ri//Y.png");break;
    case 5:cb[1]=5;b1=load_image("ri//V.png");break;
    case 6:cb[1]=6;b1=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[4])
{

    case 1:cb[4]=1;b4=load_image("ri//R.png");break;
    case 2:cb[4]=2;b4=load_image("ri//G.png");break;
    case 3:cb[4]=3;b4=load_image("ri//B.png");break;
    case 4:cb[4]=4;b4=load_image("ri//Y.png");break;
    case 5:cb[4]=5;b4=load_image("ri//V.png");break;
    case 6:cb[4]=6;b4=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[1])
{

    case 1:cb[7]=1;b7=load_image("ri//R.png");break;
    case 2:cb[7]=2;b7=load_image("ri//G.png");break;
    case 3:cb[7]=3;b7=load_image("ri//B.png");break;
    case 4:cb[7]=4;b7=load_image("ri//Y.png");break;
    case 5:cb[7]=5;b7=load_image("ri//V.png");break;
    case 6:cb[7]=6;b7=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cbk[1]=1;bk1=load_image("ri//SSR.png");break;
    case 2:cbk[1]=2;bk1=load_image("ri//SSG.png");break;
    case 3:cbk[1]=3;bk1=load_image("ri//SSB.png");break;
    case 4:cbk[1]=4;bk1=load_image("ri//SSY.png");break;
    case 5:cbk[1]=5;bk1=load_image("ri//SSV.png");break;
    case 6:cbk[1]=6;bk1=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cbk[4]=1;bk4=load_image("ri//SSR.png");break;
    case 2:cbk[4]=2;bk4=load_image("ri//SSG.png");break;
    case 3:cbk[4]=3;bk4=load_image("ri//SSB.png");break;
    case 4:cbk[4]=4;bk4=load_image("ri//SSY.png");break;
    case 5:cbk[4]=5;bk4=load_image("ri//SSV.png");break;
    case 6:cbk[4]=6;bk4=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cbk[7]=1;bk7=load_image("ri//SSR.png");break;
    case 2:cbk[7]=2;bk7=load_image("ri//SSG.png");break;
    case 3:cbk[7]=3;bk7=load_image("ri//SSB.png");break;
    case 4:cbk[7]=4;bk7=load_image("ri//SSY.png");break;
    case 5:cbk[7]=5;bk7=load_image("ri//SSV.png");break;
    case 6:cbk[7]=6;bk7=load_image("ri//SSP.png");break;
}

SDL_FreeSurface( l1 );
SDL_FreeSurface( l2 );
SDL_FreeSurface( l3 );
SDL_FreeSurface( l4 );
SDL_FreeSurface( l6 );
SDL_FreeSurface( l7 );
SDL_FreeSurface( l8 );
SDL_FreeSurface( l9 );
a=cl[2];
b=cl[3];
c=cl[6];
switch(cl[1])
{
    case 1:cl[3]=1;l3=load_image("ri//SR.png");break;
    case 2:cl[3]=2;l3=load_image("ri//SG.png");break;
    case 3:cl[3]=3;l3=load_image("ri//SB.png");break;
    case 4:cl[3]=4;l3=load_image("ri//SY.png");break;
    case 5:cl[3]=5;l3=load_image("ri//SV.png");break;
    case 6:cl[3]=6;l3=load_image("ri//SP.png");break;

}
switch(cl[4])
{
    case 1:cl[2]=1;l2=load_image("ri//SR.png");break;
    case 2:cl[2]=2;l2=load_image("ri//SG.png");break;
    case 3:cl[2]=3;l2=load_image("ri//SB.png");break;
    case 4:cl[2]=4;l2=load_image("ri//SY.png");break;
    case 5:cl[2]=5;l2=load_image("ri//SV.png");break;
    case 6:cl[2]=6;l2=load_image("ri//SP.png");break;

}
switch(cl[7])
{
    case 1:cl[1]=1;l1=load_image("ri//SR.png");break;
    case 2:cl[1]=2;l1=load_image("ri//SG.png");break;
    case 3:cl[1]=3;l1=load_image("ri//SB.png");break;
    case 4:cl[1]=4;l1=load_image("ri//SY.png");break;
    case 5:cl[1]=5;l1=load_image("ri//SV.png");break;
    case 6:cl[1]=6;l1=load_image("ri//SP.png");break;

}
switch(a)
{
    case 1:cl[6]=1;l6=load_image("ri//SR.png");break;
    case 2:cl[6]=2;l6=load_image("ri//SG.png");break;
    case 3:cl[6]=3;l6=load_image("ri//SB.png");break;
    case 4:cl[6]=4;l6=load_image("ri//SY.png");break;
    case 5:cl[6]=5;l6=load_image("ri//SV.png");break;
    case 6:cl[6]=6;l6=load_image("ri//SP.png");break;

}
switch(cl[8])
{
    case 1:cl[4]=1;l4=load_image("ri//SR.png");break;
    case 2:cl[4]=2;l4=load_image("ri//SG.png");break;
    case 3:cl[4]=3;l4=load_image("ri//SB.png");break;
    case 4:cl[4]=4;l4=load_image("ri//SY.png");break;
    case 5:cl[4]=5;l4=load_image("ri//SV.png");break;
    case 6:cl[4]=6;l4=load_image("ri//SP.png");break;

}
switch(cl[9])
{
    case 1:cl[7]=1;l7=load_image("ri//SR.png");break;
    case 2:cl[7]=2;l7=load_image("ri//SG.png");break;
    case 3:cl[7]=3;l7=load_image("ri//SB.png");break;
    case 4:cl[7]=4;l7=load_image("ri//SY.png");break;
    case 5:cl[7]=5;l7=load_image("ri//SV.png");break;
    case 6:cl[7]=6;l7=load_image("ri//SP.png");break;

}
switch(c)
{
    case 1:cl[8]=1;l8=load_image("ri//SR.png");break;
    case 2:cl[8]=2;l8=load_image("ri//SG.png");break;
    case 3:cl[8]=3;l8=load_image("ri//SB.png");break;
    case 4:cl[8]=4;l8=load_image("ri//SY.png");break;
    case 5:cl[8]=5;l8=load_image("ri//SV.png");break;
    case 6:cl[8]=6;l8=load_image("ri//SP.png");break;

}
switch(b)
{
    case 1:cl[9]=1;l9=load_image("ri//SR.png");break;
    case 2:cl[9]=2;l9=load_image("ri//SG.png");break;
    case 3:cl[9]=3;l9=load_image("ri//SB.png");break;
    case 4:cl[9]=4;l9=load_image("ri//SY.png");break;
    case 5:cl[9]=5;l9=load_image("ri//SV.png");break;
    case 6:cl[9]=6;l9=load_image("ri//SP.png");break;

}


       }
       else if(vl==2)
       {

SDL_FreeSurface( f2 );
SDL_FreeSurface( f5 );
SDL_FreeSurface( f8 );
SDL_FreeSurface( b2 );
SDL_FreeSurface( b5 );
SDL_FreeSurface( b8 );
SDL_FreeSurface( fr2 );
SDL_FreeSurface( fr5 );
SDL_FreeSurface( fr8 );
SDL_FreeSurface( bk2 );
SDL_FreeSurface( bk5 );
SDL_FreeSurface( bk8 );
a=cf[2];
b=cf[5];
c=cf[8];
fflush(stdin);
switch(cfr[5])
{

    case 1:cf[5]=1;f5=load_image("ri//R.png");break;
    case 2:cf[5]=2;f5=load_image("ri//G.png");break;
    case 3:cf[5]=3;f5=load_image("ri//B.png");break;
    case 4:cf[5]=4;f5=load_image("ri//Y.png");break;
    case 5:cf[5]=5;f5=load_image("ri//V.png");break;
    case 6:cf[5]=6;f5=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[2])
{

    case 1:cf[2]=1;f2=load_image("ri//R.png");break;
    case 2:cf[2]=2;f2=load_image("ri//G.png");break;
    case 3:cf[2]=3;f2=load_image("ri//B.png");break;
    case 4:cf[2]=4;f2=load_image("ri//Y.png");break;
    case 5:cf[2]=5;f2=load_image("ri//V.png");break;
    case 6:cf[2]=6;f2=load_image("ri//P.png");break;
}

switch(cfr[8])
{

    case 1:cf[8]=1;f8=load_image("ri//R.png");break;
    case 2:cf[8]=2;f8=load_image("ri//G.png");break;
    case 3:cf[8]=3;f8=load_image("ri//B.png");break;
    case 4:cf[8]=4;f8=load_image("ri//Y.png");break;
    case 5:cf[8]=5;f8=load_image("ri//V.png");break;
    case 6:cf[8]=6;f8=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[8])
{

    case 1:cfr[2]=1;fr2=load_image("ri//SSR.png");break;
    case 2:cfr[2]=2;fr2=load_image("ri//SSG.png");break;
    case 3:cfr[2]=3;fr2=load_image("ri//SSB.png");break;
    case 4:cfr[2]=4;fr2=load_image("ri//SSY.png");break;
    case 5:cfr[2]=5;fr2=load_image("ri//SSV.png");break;
    case 6:cfr[2]=6;fr2=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[5])
{

    case 1:cfr[5]=1;fr5=load_image("ri//SSR.png");break;
    case 2:cfr[5]=2;fr5=load_image("ri//SSG.png");break;
    case 3:cfr[5]=3;fr5=load_image("ri//SSB.png");break;
    case 4:cfr[5]=4;fr5=load_image("ri//SSY.png");break;
    case 5:cfr[5]=5;fr5=load_image("ri//SSV.png");break;
    case 6:cfr[5]=6;fr5=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[2])
{
    case 1:cfr[8]=1;fr8=load_image("ri//SSR.png");break;
    case 2:cfr[8]=2;fr8=load_image("ri//SSG.png");break;
    case 3:cfr[8]=3;fr8=load_image("ri//SSB.png");break;
    case 4:cfr[8]=4;fr8=load_image("ri//SSY.png");break;
    case 5:cfr[8]=5;fr8=load_image("ri//SSV.png");break;
    case 6:cfr[8]=6;fr8=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cbk[8])
{

    case 1:cb[2]=1;b2=load_image("ri//R.png");break;
    case 2:cb[2]=2;b2=load_image("ri//G.png");break;
    case 3:cb[2]=3;b2=load_image("ri//B.png");break;
    case 4:cb[2]=4;b2=load_image("ri//Y.png");break;
    case 5:cb[2]=5;b2=load_image("ri//V.png");break;
    case 6:cb[2]=6;b2=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[5])
{

    case 1:cb[5]=1;b5=load_image("ri//R.png");break;
    case 2:cb[5]=2;b5=load_image("ri//G.png");break;
    case 3:cb[5]=3;b5=load_image("ri//B.png");break;
    case 4:cb[5]=4;b5=load_image("ri//Y.png");break;
    case 5:cb[5]=5;b5=load_image("ri//V.png");break;
    case 6:cb[5]=6;b5=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[2])
{

    case 1:cb[8]=1;b8=load_image("ri//R.png");break;
    case 2:cb[8]=2;b8=load_image("ri//G.png");break;
    case 3:cb[8]=3;b8=load_image("ri//B.png");break;
    case 4:cb[8]=4;b8=load_image("ri//Y.png");break;
    case 5:cb[8]=5;b8=load_image("ri//V.png");break;
    case 6:cb[8]=6;b8=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cbk[2]=1;bk2=load_image("ri//SSR.png");break;
    case 2:cbk[2]=2;bk2=load_image("ri//SSG.png");break;
    case 3:cbk[2]=3;bk2=load_image("ri//SSB.png");break;
    case 4:cbk[2]=4;bk2=load_image("ri//SSY.png");break;
    case 5:cbk[2]=5;bk2=load_image("ri//SSV.png");break;
    case 6:cbk[2]=6;bk2=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cbk[5]=1;bk5=load_image("ri//SSR.png");break;
    case 2:cbk[5]=2;bk5=load_image("ri//SSG.png");break;
    case 3:cbk[5]=3;bk5=load_image("ri//SSB.png");break;
    case 4:cbk[5]=4;bk5=load_image("ri//SSY.png");break;
    case 5:cbk[5]=5;bk5=load_image("ri//SSV.png");break;
    case 6:cbk[5]=6;bk5=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cbk[8]=1;bk8=load_image("ri//SSR.png");break;
    case 2:cbk[8]=2;bk8=load_image("ri//SSG.png");break;
    case 3:cbk[8]=3;bk8=load_image("ri//SSB.png");break;
    case 4:cbk[8]=4;bk8=load_image("ri//SSY.png");break;
    case 5:cbk[8]=5;bk8=load_image("ri//SSV.png");break;
    case 6:cbk[8]=6;bk8=load_image("ri//SSP.png");break;
}

       }
       else if(vl==3)
       {
SDL_FreeSurface( f3 );
SDL_FreeSurface( f6 );
SDL_FreeSurface( f9 );
SDL_FreeSurface( b3 );
SDL_FreeSurface( b6 );
SDL_FreeSurface( b9 );
SDL_FreeSurface( fr3 );
SDL_FreeSurface( fr6 );
SDL_FreeSurface( fr9 );
SDL_FreeSurface( bk3 );
SDL_FreeSurface( bk6 );
SDL_FreeSurface( bk9 );

a=cf[3];
b=cf[6];
c=cf[9];
fflush(stdin);
switch(cfr[3])
{

    case 1:cf[3]=1;f3=load_image("ri//R.png");break;
    case 2:cf[3]=2;f3=load_image("ri//G.png");break;
    case 3:cf[3]=3;f3=load_image("ri//B.png");break;
    case 4:cf[3]=4;f3=load_image("ri//Y.png");break;
    case 5:cf[3]=5;f3=load_image("ri//V.png");break;
    case 6:cf[3]=6;f3=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[6])
{

    case 1:cf[6]=1;f6=load_image("ri//R.png");break;
    case 2:cf[6]=2;f6=load_image("ri//G.png");break;
    case 3:cf[6]=3;f6=load_image("ri//B.png");break;
    case 4:cf[6]=4;f6=load_image("ri//Y.png");break;
    case 5:cf[6]=5;f6=load_image("ri//V.png");break;
    case 6:cf[6]=6;f6=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cfr[9])
{

    case 1:cf[9]=1;f9=load_image("ri//R.png");break;
    case 2:cf[9]=2;f9=load_image("ri//G.png");break;
    case 3:cf[9]=3;f9=load_image("ri//B.png");break;
    case 4:cf[9]=4;f9=load_image("ri//Y.png");break;
    case 5:cf[9]=5;f9=load_image("ri//V.png");break;
    case 6:cf[9]=6;f9=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cb[9])
{

    case 1:cfr[3]=1;fr3=load_image("ri//SSR.png");break;
    case 2:cfr[3]=2;fr3=load_image("ri//SSG.png");break;
    case 3:cfr[3]=3;fr3=load_image("ri//SSB.png");break;
    case 4:cfr[3]=4;fr3=load_image("ri//SSY.png");break;
    case 5:cfr[3]=5;fr3=load_image("ri//SSV.png");break;
    case 6:cfr[3]=6;fr3=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[6])
{

    case 1:cfr[6]=1;fr6=load_image("ri//SSR.png");break;
    case 2:cfr[6]=2;fr6=load_image("ri//SSG.png");break;
    case 3:cfr[6]=3;fr6=load_image("ri//SSB.png");break;
    case 4:cfr[6]=4;fr6=load_image("ri//SSY.png");break;
    case 5:cfr[6]=5;fr6=load_image("ri//SSV.png");break;
    case 6:cfr[6]=6;fr6=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cb[3])
{

    case 1:cfr[9]=1;fr9=load_image("ri//SSR.png");break;
    case 2:cfr[9]=2;fr9=load_image("ri//SSG.png");break;
    case 3:cfr[9]=3;fr9=load_image("ri//SSB.png");break;
    case 4:cfr[9]=4;fr9=load_image("ri//SSY.png");break;
    case 5:cfr[9]=5;fr9=load_image("ri//SSV.png");break;
    case 6:cfr[9]=6;fr9=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(cbk[9])
{

    case 1:cb[3]=1;b3=load_image("ri//R.png");break;
    case 2:cb[3]=2;b3=load_image("ri//G.png");break;
    case 3:cb[3]=3;b3=load_image("ri//B.png");break;
    case 4:cb[3]=4;b3=load_image("ri//Y.png");break;
    case 5:cb[3]=5;b3=load_image("ri//V.png");break;
    case 6:cb[3]=6;b3=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[6])
{

    case 1:cb[6]=1;b6=load_image("ri//R.png");break;
    case 2:cb[6]=2;b6=load_image("ri//G.png");break;
    case 3:cb[6]=3;b6=load_image("ri//B.png");break;
    case 4:cb[6]=4;b6=load_image("ri//Y.png");break;
    case 5:cb[6]=5;b6=load_image("ri//V.png");break;
    case 6:cb[6]=6;b6=load_image("ri//P.png");break;
}
fflush(stdin);
switch(cbk[3])
{

    case 1:cb[9]=1;b9=load_image("ri//R.png");break;
    case 2:cb[9]=2;b9=load_image("ri//G.png");break;
    case 3:cb[9]=3;b9=load_image("ri//B.png");break;
    case 4:cb[9]=4;b9=load_image("ri//Y.png");break;
    case 5:cb[9]=5;b9=load_image("ri//V.png");break;
    case 6:cb[9]=6;b9=load_image("ri//P.png");break;
}
fflush(stdin);
switch(a)
{

    case 1:cbk[3]=1;bk3=load_image("ri//SSR.png");break;
    case 2:cbk[3]=2;bk3=load_image("ri//SSG.png");break;
    case 3:cbk[3]=3;bk3=load_image("ri//SSB.png");break;
    case 4:cbk[3]=4;bk3=load_image("ri//SSY.png");break;
    case 5:cbk[3]=5;bk3=load_image("ri//SSV.png");break;
    case 6:cbk[3]=6;bk3=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(b)
{

    case 1:cbk[6]=1;bk6=load_image("ri//SSR.png");break;
    case 2:cbk[6]=2;bk6=load_image("ri//SSG.png");break;
    case 3:cbk[6]=3;bk6=load_image("ri//SSB.png");break;
    case 4:cbk[6]=4;bk6=load_image("ri//SSY.png");break;
    case 5:cbk[6]=5;bk6=load_image("ri//SSV.png");break;
    case 6:cbk[6]=6;bk6=load_image("ri//SSP.png");break;
}
fflush(stdin);
switch(c)
{

    case 1:cbk[9]=1;bk9=load_image("ri//SSR.png");break;
    case 2:cbk[9]=2;bk9=load_image("ri//SSG.png");break;
    case 3:cbk[9]=3;bk9=load_image("ri//SSB.png");break;
    case 4:cbk[9]=4;bk9=load_image("ri//SSY.png");break;
    case 5:cbk[9]=5;bk9=load_image("ri//SSV.png");break;
    case 6:cbk[9]=6;bk9=load_image("ri//SSP.png");break;
}

SDL_FreeSurface( r1 );
SDL_FreeSurface( r2 );
SDL_FreeSurface( r3 );
SDL_FreeSurface( r4 );
SDL_FreeSurface( r6 );
SDL_FreeSurface( r7 );
SDL_FreeSurface( r8 );
SDL_FreeSurface( r9 );
a=cr[7];
b=cr[8];
c=cr[4];
switch(cr[1])
{
    case 1:cr[7]=1;r7=load_image("ri//SR.png");break;
    case 2:cr[7]=2;r7=load_image("ri//SG.png");break;
    case 3:cr[7]=3;r7=load_image("ri//SB.png");break;
    case 4:cr[7]=4;r7=load_image("ri//SY.png");break;
    case 5:cr[7]=5;r7=load_image("ri//SV.png");break;
    case 6:cr[7]=6;r7=load_image("ri//SP.png");break;

}
switch(cr[2])
{
    case 1:cr[4]=1;r4=load_image("ri//SR.png");break;
    case 2:cr[4]=2;r4=load_image("ri//SG.png");break;
    case 3:cr[4]=3;r4=load_image("ri//SB.png");break;
    case 4:cr[4]=4;r4=load_image("ri//SY.png");break;
    case 5:cr[4]=5;r4=load_image("ri//SV.png");break;
    case 6:cr[4]=6;r4=load_image("ri//SP.png");break;

}
switch(cr[3])
{
    case 1:cr[1]=1;r1=load_image("ri//SR.png");break;
    case 2:cr[1]=2;r1=load_image("ri//SG.png");break;
    case 3:cr[1]=3;r1=load_image("ri//SB.png");break;
    case 4:cr[1]=4;r1=load_image("ri//SY.png");break;
    case 5:cr[1]=5;r1=load_image("ri//SV.png");break;
    case 6:cr[1]=6;r1=load_image("ri//SP.png");break;

}
switch(c)
{
    case 1:cr[8]=1;r8=load_image("ri//SR.png");break;
    case 2:cr[8]=2;r8=load_image("ri//SG.png");break;
    case 3:cr[8]=3;r8=load_image("ri//SB.png");break;
    case 4:cr[8]=4;r8=load_image("ri//SY.png");break;
    case 5:cr[8]=5;r8=load_image("ri//SV.png");break;
    case 6:cr[8]=6;r8=load_image("ri//SP.png");break;

}
switch(cr[6])
{
    case 1:cr[2]=1;r2=load_image("ri//SR.png");break;
    case 2:cr[2]=2;r2=load_image("ri//SG.png");break;
    case 3:cr[2]=3;r2=load_image("ri//SB.png");break;
    case 4:cr[2]=4;r2=load_image("ri//SY.png");break;
    case 5:cr[2]=5;r2=load_image("ri//SV.png");break;
    case 6:cr[2]=6;r2=load_image("ri//SP.png");break;

}
switch(cr[9])
{
    case 1:cr[3]=1;r3=load_image("ri//SR.png");break;
    case 2:cr[3]=2;r3=load_image("ri//SG.png");break;
    case 3:cr[3]=3;r3=load_image("ri//SB.png");break;
    case 4:cr[3]=4;r3=load_image("ri//SY.png");break;
    case 5:cr[3]=5;r3=load_image("ri//SV.png");break;
    case 6:cr[3]=6;r3=load_image("ri//SP.png");break;

}
switch(a)
{
    case 1:cr[9]=1;r9=load_image("ri//SR.png");break;
    case 2:cr[9]=2;r9=load_image("ri//SG.png");break;
    case 3:cr[9]=3;r9=load_image("ri//SB.png");break;
    case 4:cr[9]=4;r9=load_image("ri//SY.png");break;
    case 5:cr[9]=5;r9=load_image("ri//SV.png");break;
    case 6:cr[9]=6;r9=load_image("ri//SP.png");break;

}
switch(b)
{
    case 1:cr[6]=1;r6=load_image("ri//SR.png");break;
    case 2:cr[6]=2;r6=load_image("ri//SG.png");break;
    case 3:cr[6]=3;r6=load_image("ri//SB.png");break;
    case 4:cr[6]=4;r6=load_image("ri//SY.png");break;
    case 5:cr[6]=5;r6=load_image("ri//SV.png");break;
    case 6:cr[6]=6;r6=load_image("ri//SP.png");break;

}

       }
   }


}





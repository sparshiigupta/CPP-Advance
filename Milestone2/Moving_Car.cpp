#include<graphics.h>
#include<conio.h>
#include<stdio.h>

main()
{
	int gdriver=DETECT;
	int gmode;
	
	initgraph(&gdriver,&gmode,(char*)"");
	

	for (int i = 0; i <= 580; i = i + 8)
   	{
   		// car upper part
		line(50+i,350,100+i,310);
		line(100+i,310,150+i,310);
		line(150+i,310,250+i,350);
		
		// car lower part
        line(50+i,350,250+i,350);
        
     	line(50+i,350,50+i,400);
       	line(250+i,350,250+i,400);
        
       	line(50+i,400,75+i,400);
        line(125+i,400,175+i,400);
        line(225+i,400,250+i,400);
      
        //car wheels
        arc(100+i,400,0,180,25);
        circle(100+i,405,15);
        arc(200+i,400,0,180,25);
        circle(200+i,405,15);
        delay(100);
        clearviewport();
    }

	getch();
	closegraph();
}

void soundstart()
{

int _delay=250;
  /*
sound(500);
delay(_delay);
sound(400);
delay(_delay);
sound(500);
delay(_delay);
sound(600);
delay(_delay);
sound(500);
delay(_delay);
sound(600);
delay(_delay);
sound(800);
delay(_delay);
*/


			  //Game music
 while(!kbhit())
 {



sound(800);
delay(_delay);
nosound();
delay(_delay);
sound(800);
delay(_delay);
nosound();
delay(_delay+400);

sound(800);
delay(_delay-100);
nosound();
delay(_delay-200);
sound(800);
delay(_delay-100);
nosound();
delay(_delay+100);

sound(800);
delay(_delay);
nosound();
delay(_delay);
sound(800);
delay(_delay);
nosound();
delay(_delay);

sound(700);
delay(_delay-120);
nosound();
delay(_delay-220);
sound(700);
delay(_delay-120);
nosound();
delay(_delay-220);
sound(700);
delay(_delay-120);
nosound();
delay(_delay-220);
sound(700);
delay(_delay-120);
nosound();
delay(_delay-220);
sound(700);
delay(_delay-120);
nosound();
delay(_delay-220);
sound(750);
delay(_delay-120);
nosound();
delay(_delay-200);





sound(400);
delay(_delay+500);
sound(500);
delay(_delay);
sound(600);
delay(_delay+1500);

sound(700);
delay(_delay+500);
nosound();
delay(_delay-200);
sound(700);
delay(_delay-120);
nosound();
delay(_delay-200);
sound(630);
delay(_delay-120);
nosound();
delay(_delay-200);
sound(600);
delay(_delay+2500);
nosound();

sound(630);
delay(_delay-100);
nosound();
delay(_delay-100);
sound(630);
delay(_delay-100);
nosound();
delay(_delay-100);
sound(700);
delay(_delay-100);
nosound();
delay(_delay-200);



    if(kbhit())
    {nosound();
    exit(0);
    }
sound(400);
delay(_delay+500);
sound(500);
delay(_delay);
sound(600);
delay(_delay+1500);


sound(700);
delay(_delay+200);
sound(750);
delay(_delay+200);
sound(800);
delay(_delay+500);
nosound();


sound(950);
delay(_delay);
sound(800);
delay(_delay+1500);
sound(900);
delay(_delay+700);
sound(950);
delay(_delay+500);
sound(700);
delay(_delay-120);
nosound();
delay(_delay-120);
sound(700);
delay(_delay+1500);

sound(950);
delay(_delay+200);
sound(1000);
delay(_delay+200);
sound(1050);
delay(_delay+500);
sound(800);
delay(_delay-120);
nosound();
delay(_delay-120);
sound(800);
delay(_delay+1500);

sound(720);
delay(_delay);
nosound();
delay(_delay-120);
sound(720);
delay(_delay);
nosound();
delay(_delay-120);
sound(750);
delay(_delay);
}

  /*
	//victory music
while(!kbhit())
{
sound(500);
delay(_delay+500);
sound(400);
delay(_delay-150);
sound(500);
delay(_delay-150);
sound(600);
delay(_delay+500);
sound(500);
delay(_delay-150);
sound(600);
delay(_delay-150);
sound(800);
delay(_delay+1000);

}



*/



getch();
nosound();
}
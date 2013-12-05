/*
  Name: Main.cpp
  Copyright: 
  Author: Oliver D. Najera
  Date: 18-11-2013 17:26
  Description: version 2 of TreasureGlacier!
*/
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
//function prototypes
int elfgets(int&,int&,int,int);//nets,money,levelcounter,nsnowballs
int elfgetm(int&,int&,int,int);//nets,money,levelcounter,nsnowballs
int clkshop(int&,int&,int);//money,fuel,levelcounter
int sclshop(int&,int&,int);//money,fuel,levelcounter
int rokshop(int&,int&,int);//money,fuel,levelcounter
int storeget(int&,int&,int&);//money,nets,fuel
int tresrget(int&,int&,int,int&);//money,treasures found,nsnowballs,treasures remaining

int main(int argc, char *argv[]){//execution begins here
    char instruc,;
    //int statz[6]
    //(statz[0])------------------nets
    //(statz[1])-----------------money
    //(statz[2])-------treasures found
    //(statz[3])-treasures depositited
    //(statz[4])--------liters of fuel
    //(statz[5])---------level counter
    int gohtoo,nnetz=3,floor,money=100,tresfnd=0,tresdep=0,nsnblws,nliterz=2,treserz; //declare variables
    //statz[5]=3;
    unsigned int levelct=3;
    ifstream in;
    ofstream out;
    in.open("do_not_open.dat");
    out.open("do_not_open.dat");
    out<<"hey what are you doing here?, I am going to stab you\n";
    //out<<statz[];
    out<<nnetz<<endl
    <<floor<<endl
    <<money<<endl
    <<tresfnd<<endl
    <<tresdep<<endl
    <<nsnblws<<endl
    <<nliterz<<endl
    <<treserz<<endl;
    cout<<"TREASURE GLACIER!*//copyright 2013\n"
    <<"*a non-profit fan based sequel to Treasure Mathstorm!\n";
    cout<<"Now entering Tresure Mountian\n"
    <<"once upon a time there was a mountian called 'Treasure Mounitan' \n"
    <<"It was named that because the treasures that were stored at the Mountiantop\n"
    <<"Palace ensured that the surrounding countryside was prosperous, peaceful\n"
    <<"and soverign. However there was this jerk, Morty Maxwell, who wanted\n"
    <<"control of the contryside for himself. One day he came in to the palace and\n"
    <<"stole all the treasures and scattered them all over Treasure Mountian\n"
    <<"to make sure that the treasures were not returned to the Mountiantop Palace\n"
    <<"he froze the mountian solid, and he put a spell on the inhabiting elves.\n"
    <<"this spell gave them no desire to find or return the treasures, and it\n"
    <<"made them speak in math problems so that they wouldn't help anyone\n"
    <<"since the humans and wizards in the surrpunding contryside, were not good\n"
    <<"at mountian climbing or math problems, it would take a hero from outside to\n"
    <<"find the treasures, and bring them back to the Mountiantop Palace. That hero\n"
    <<"will be you, the user, The fate of Treasure Mountian, Shady Glenn(the name\n"
    <<"of the countryside), and all of the inhabitants rest in your hands. The\n"
    <<"because the presence of a frozen mountian has introduced a perpetual winter\n"
    <<"that only you have the skills to fix...\n"
    <<"is this your first time playing? if so, then type a 'y' to show instructions\n"
    <<"If you know how to play then type 'n' to begin\n";    
    cin>>instruc;
    if (instruc=='y'){
                      cout<<"Alright, Well Trasure Glacier is separated into three levels\n"
                      <<"in each level there are five treasures to collect\n"
                      <<"to find the treasures you need to find an elf with a scroll\n"
                      <<"elfs will ask you a math question when you catch them\n"
                      <<"asnwer the question wrong and they will leave you nothing\n"
                      <<"get the question right and that elf will pay you in cash\n"
                      <<"elfs with the scroll will pay you and give the clue for that level\n"
                      <<"the clue is a number btween 0 and 9 refers to how many snowballs you\n"
                      <<"need to stack on the treasure terminal to find the treasures\n"
                      <<"However stacking the right number of snowballs is not enough\n"
                      <<"you must also throw down a coin, so treasures will cost money.\n"
                      <<"To catch elfs you need nets. Because elfs rip out of nets,\n"
                      <<"nets can only be used once. you can purcase more at a store\n"
                      <<"there is a store on each level; they sell nets and jetpack fuel\n"
                      <<"Jetpack fuel is how you advance to the next level\n"
                      <<"fuel sells in increments of 1 liter\n"
                      <<"you will need 4 liters of fuel to move up one level\n"
                      <<"however stores are not the only place to get fuel, nor are elves\n"
                      <<"the only way to get moeny.\n"
                      <<"shops will give you jetpack fuel for solving their problems\n"
                      <<"you get one liter for one right answer\n"
                      <<"if you asnswer more than 4 questions, the shops will give you money\n"
                      <<"don't confuse shops with stores\n";
                      system("PAUSE");
                      cout<<"there are three different shops, one for each level\n"
                      <<"the clockshop will ask you to sycronize clocks\n"
                      <<"the scaleshop will ask you to balance scales\n"
                      <<"the rockshop will ask you to match numbers in different bases\n"
                      <<"elves will ask mutliplication division\n"
                      <<"addition and subtraction\n"
                      <<"there are a lot of treasures to collect, and you can only carry\n"
                      <<"so many, so you will have to make the acent many times,\n"
                      <<"acending to the next level on the third level will deposit the treasures\n"
                      <<"that you have collected in the caslte and put you back on the first level\n"
                      <<"how many treasures can you collect before you finally snap or get bored?\n";
                      }
    if (instruc=='n'){
                      cout<<"off we go then!\n";}//if instruct==n, close
                      in>>nnetz>>floor>>money>>tresfnd>>tresdep>>nsnblws>>nliterz>>treserz;
                      do{//do while loop for the entire game, stops when player wins
                      //floor=statz[5]%3+1;
                      floor=levelct%3+1;
                      switch(floor){
                                    case 1:{// for level one
                                           nsnblws=(rand()%10+1);
                                           treserz=5;
                                           //autosave players data at the beggining of each floor
                                           //out<<statz[];
                                           out<<nnetz<<endl
                                           <<floor<<endl
                                           <<money<<endl
                                           <<tresfnd<<endl
                                           <<tresdep<<endl
                                           <<nsnblws<<endl
                                           <<nliterz<<endl
                                           <<treserz<<endl;
                                           //start looping for level one
                                           do{
                                           cout<<"you are on level 1, where do you wish to go?\n"
                                           <<"type 1 to go catch an elf with a scroll\n"
                                           <<"type 2 to go catch an elf\n"
                                           <<"type 3 to go to the Clockshop\n"
                                           <<"type 4 to go to the store\n"
                                           <<"type 5 to look for treasures\n"
                                           <<"type 6 to ascend to the next level\n";
                                           cin>>gohtoo;
                                           switch(gohtoo){
                                                         case 1:
                                                                 //elfgets(statz[0],statz[1],statz[5],nsnblws);
                                                                 elfgets(nnetz,money,levelct,nsnblws);//player wants to catch an elf with a scroll
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                  
                                                                break;
                                                         case 2:{
                                                                 elfgetm(nnetz,money,levelct,nsnblws);
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         case 3:{
                                                                 clkshop(money,nliterz,levelct);//player goes to clockshop
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;                                                                 
                                                         case 4:{//player goes to the store
                                                                 storeget(money,nnetz,nliterz);//player goes to store
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         case 5:{//player goes to find treasures
                                                                 tresrget(money,tresfnd,nsnblws,treserz);
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         case 6:{//player moves to next level
                                                                 if(nliterz>=4){
                                                                                cout<<"at last, the 20kg on your back finds its niche, as you quickly make your acent\n"
                                                                                <<"to the next level\n";
                                                                                nliterz-=4;
                                                                                levelct+=1;
                                                                                }
                                                                 else{
                                                                      cout<<"you do not have enough fuel, go to a shop or buy some at the store\n";
                                                                      }
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         default:{//player cannot follow intructions
                                                                  cout<<"that is not an option\n";
                                                                  cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                 }
                                                                 break;
                                                         
                                                         }//switch for level 1 options
                                           
                                            }while((levelct%3+1)==1);
                                            break;
                                            }//end of level one case information
                                    case 2:{
                                            nsnblws=(rand()%10+1);
                                            treserz=5;
                                            out<<nnetz<<endl
                                           <<floor<<endl
                                           <<money<<endl
                                           <<tresfnd<<endl
                                           <<tresdep<<endl
                                           <<nsnblws<<endl
                                           <<nliterz<<endl
                                           <<treserz<<endl;
                                           do{
                                           cout<<"you are on level 2, where do you wish to go?\n"
                                           <<"type 1 to go catch an elf with a scroll\n"
                                           <<"type 2 to go catch an elf\n"
                                           <<"type 3 to go to the Scaleshop\n"
                                           <<"type 4 to go to the store\n"
                                           <<"type 5 to look for treasures\n"
                                           <<"type 6 to ascend to the next level\n";
                                           cin>>gohtoo;
                                           switch(gohtoo){
                                                          case 1:
                                                                 elfgets(nnetz,money,levelct,nsnblws);//player wants to catch an elf with a scroll
                                                                 cout<<nsnblws;
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                  
                                                                break;
                                                         case 2:{
                                                                 elfgetm(nnetz,money,levelct,nsnblws);
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         case 3:{
                                                                 sclshop(nliterz,money,levelct);//player goes to scaleshop
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;                                                                 
                                                         case 4:{//player goes to the store
                                                                 storeget(money,nnetz,nliterz);//player goes to store
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         case 5:{//player goes to find treasures
                                                                 tresrget(money,tresfnd,nsnblws,treserz);
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         case 6:{//player moves to next level
                                                                 if(nliterz>=4){
                                                                                cout<<"at last, the 20kg on your back finds its niche, as you quickly make your acent\n"
                                                                                <<"to the next level\n";
                                                                                nliterz-=4;
                                                                                levelct+=1;
                                                                                }
                                                                 else{
                                                                      cout<<"you do not have enough fuel, go to a shop or buy some at the store\n";
                                                                      }
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         default:{//player cannot follow intructions
                                                                  cout<<"that is not an option\n";
                                                                  cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                 }
                                                                 break;
                                                         
                                                         }//switch for level 2 options
                                           
                                            }while((levelct%3+1)==2);
                                            break;
                                            }//case2
                                           break;
                                    case 3:{
                                            nsnblws=(rand()%10+1);
                                            treserz=5;
                                            out<<nnetz<<endl
                                           <<floor<<endl
                                           <<money<<endl
                                           <<tresfnd<<endl
                                           <<tresdep<<endl
                                           <<nsnblws<<endl
                                           <<nliterz<<endl
                                           <<treserz<<endl;
                                           do{
                                           cout<<"you are on level 3, where do you wish to go?\n"
                                           <<"type 1 to go catch an elf with a scroll\n"
                                           <<"type 2 to go catch an elf\n"
                                           <<"type 3 to go to the Rockshop\n"
                                           <<"type 4 to go to the store\n"
                                           <<"type 5 to look for treasures\n"
                                           <<"type 6 to ascend to the next level\n";
                                           cin>>gohtoo;
                                           switch(gohtoo){
                                                          case 1:
                                                                 elfgets(nnetz,money,levelct,nsnblws);//player wants to catch an elf with a scroll
                                                                 cout<<nsnblws;
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                  
                                                                break;
                                                         case 2:{
                                                                 elfgetm(nnetz,money,levelct,nsnblws);
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         case 3:{
                                                                 rokshop(nliterz,money,levelct);//player goes to scaleshop
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;                                                                 
                                                         case 4:{//player goes to the store
                                                                 storeget(money,nnetz,nliterz);//player goes to store
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         case 5:{//player goes to find treasures
                                                                 tresrget(money,tresfnd,nsnblws,treserz);
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         case 6:{//player moves to next level
                                                                 if(nliterz>=4){
                                                                                cout<<"at last, the 20kg on your back finds another niche, as you quickly make your decent\n"
                                                                                <<"back down to the first level, without dying on impact\n";
                                                                                nliterz-=4;
                                                                                levelct+=1;
                                                                                tresdep+=tresfnd;
                                                                                cout<<"you have returned "<<tresdep<<" treasures back to the mountiantop castle\n";
                                                                                
                                                                                }
                                                                 else{
                                                                      cout<<"you do not have enough fuel, go to a shop or buy some at the store\n";
                                                                      }
                                                                 cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                }
                                                                break;
                                                         default:{//player cannot follow intructions
                                                                  cout<<"that is not an option\n";
                                                                  cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<"|treasures: "<<tresfnd<<endl;//display player stats
                                                                 }
                                                                 break;
                                                         
                                                         }//switch for level 3 options
                                           
                                            }while((levelct%3+1)==3);
                                            }//case 3
                                           break;
                                    
                                    
                         }//levelfloor switch
                      }while(tresdep<=150);//end of the do while loop for the entire game
                      cout<<"congradulations, you reached the end of a game which is really all about\n"
                      <<"getting as many treasures as possible before you got bored and left!\n"
                      <<"Watch out for TREASURE GLACIER0.1! for updates and paches\n";
                      cout<<"you, are truely patient or have an excellent feel for mathematics\n"
                      <<"if you have not realized yet, the 'treasure' was increased skill in mathematics\n"
                      <<"'And because in all the galaxy they had found nothing more precious than the mind,\n"
                      <<"they encouraged its dawning elsewhere' -(prologue; 3001 The Final Odyssey)\n"
                      <<"now go out and use your mathematic skill to solve some real problems\n";
                     
    system("PAUSE");
    return EXIT_SUCCESS;

}//end main

int elfgets(int &nnetz,int &money,int levelct,int nsnblws){//when an elf with scroll is caught//nnetz,money,levelct,nsnblws
     cout<<"you caught an elf\n";
     int rspns,answer,operand;
     int numb1=((rand()*levelct)%333);
     int numb2=(rand()%333);
     operand=(rand()+levelct)%4+1;
     if (nnetz>0){//see if player has nets
                  nnetz-=1;
                  
                  switch(operand){
                                  case 1:
                                         answer=numb1+numb2;
                                         cout<<"what is "<<numb1<<"+"<<numb2<<" ?\n";
                                         cin>>rspns;
                                         break;
                                  case 2:
                                         answer=numb1-numb2;
                                         cout<<"what is "<<numb1<<"-"<<numb2<<" ?\n";
                                         cin>>rspns;
                                         break;
                                  case 3:
                                         answer=numb1*numb2;
                                         cout<<"what is "<<numb1<<"*"<<numb2<<" ?\n";
                                         cin>>rspns;
                                         break;
                                  case 4:
                                         answer=numb1/numb2;
                                         cout<<"what is "<<numb1<<"/"<<numb2<<" ?(you can drop the remainder)\n";
                                         cin>>rspns;
                                         break;                                                                         
                                         }
                  
                  if (answer==rspns){//see if player was right
                                     cout<<"great you got it, here's thirty cents\n"
                                     <<"the number of snowbols you need to stack is "<<nsnblws<<" snowbols\n";
                                     money+=30;
                                     if ((operand==4)||(operand==3)){//bonus for multiplication problems
                                                                     money+=20;
                                                                     }
                                     }
                  else//player was wrong
                      cout<<"that's not the answer stuipid. sorry I can't help yah\n";
                  
                  }//operand switch
     else{//if player does not have nets
          nnetz-=0;
          cout<<"you'll need more nets than that to catch me!\n";
          }
     cout<<"|money: "<<money<<"|nets: "<<nnetz<<endl;
     }//end elfgets

int elfgetm(int &nnetz,int &money,int levelct,int nsnblws){// for catching al elf without the scroll
int rspns,answer;
                                                                 
                                                                 int numb1=(rand()*levelct)%333;
                                                                 int numb2=rand()%333;
                                                                 int operand=rand()%5;
                                                                 if (nnetz>0){
                                                                 nnetz-=1;
                                                                 switch(operand){
                                                                                 case 1:
                                                                                 answer=numb1+numb2;
                                                                                 cout<<"what is "<<numb1<<"+"<<numb2<<" ?\n";
                                                                                 cin>>rspns;
                                                                                 break;
                                                                                 case 2:
                                                                                 answer=numb1-numb2;
                                                                                 cout<<"what is "<<numb1<<"-"<<numb2<<" ?\n";
                                                                                 cin>>rspns;
                                                                                 break;
                                                                                 case 3:
                                                                                 answer=numb1*numb2;
                                                                                 cout<<"what is "<<numb1<<"*"<<numb2<<" ?\n";
                                                                                 cin>>rspns;
                                                                                 break;
                                                                                 case 4:
                                                                                 answer=numb1/numb2;
                                                                                 cout<<"what is "<<numb1<<"/"<<numb2<<" ?(you can drop the remainder)\n";
                                                                                 cin>>rspns;
                                                                                 break;                                                                         
                                                                                 }
                                                                 if (answer==rspns){
                                                                                    cout<<"great you got it, here's thirty cents\n";
                                                                                    money+=30;
                                                                                    }
                                                                 else
                                                                     cout<<"that's not the answer stuipid. sorry I can't help yah\n";
                                                                 }
                                                                 else
                                                                     cout<<"you'll need more nets than that to catch me!\n";
                                                                 cout<<" you now have "<<money<<" cents and "<<nnetz<<" nets\n";
                                                                 
}

int clkshop(int &money,int &nliterz,int levelct){//clockshop function
    int hr1,min1,m1ntime,hr2,min2,m2ntime,rspmint,ansmint,resphr,respmin;
    char exit;
    do{
    if(levelct<=6){//to avoid redundancy with game instructions
    cout<<"welcome to the clockshop, due to the freezing of treasure mountian\n";
    }
    cout<<"my clocks have fallen out of time I need you to reset them\n";
    if(levelct<=6){
    cout<<"be aware that if the second time is less than the  first, then your answer\n"
    <<"will be negative, and you can input more than 60 minutes if you mess up the\n"
    <<"hour response, \n";
    }
    hr1=rand()%24;
    hr2=rand()%24;
    min1=rand()%60;
    min2=rand()%60;
    m1ntime=hr1*60+min1;
    m2ntime=hr2*60+min2;
    if(min1<10)
    cout<<"1st clock says... "<<hr1<<":0"<<min1<<endl;
    else
    cout<<"1st clock says... "<<hr1<<":"<<min1<<endl;
    if(min2<10)
    cout<<"2nd clock says... "<<hr2<<":0"<<min2<<endl;
    else
    cout<<"2nd clock says... "<<hr2<<":"<<min2<<endl;
    ansmint=m2ntime-m1ntime;
    cout<<"what's the difference in...\n";
    cout<<"hours?---> ";cin>>resphr;
    cout<<"minutes?-> ";cin>>respmin;
    rspmint=resphr*60+respmin;
    if(ansmint==rspmint){
                         cout<<"thanks, I think you got it, here's something for yah\n";
                         if (nliterz<4)
                         nliterz+=1;
                         else
                         money+=25;
                         }
    else
    cout<<"nope, don't think so\n";
    cout<<"money: "<<money<<",fuel: "<<nliterz<<endl;
    cout<<"you want to reset some more? type 'y' to stay, anything else to leave\n";
    cin>>exit;
    }while (exit=='y');
    }
int sclshop(int &nliterz,int &money,int levelct){//scaleshop function
    int rokmass,guess,gestotl=0;
    
    char exit;
    if(levelct<=6){//to avoid redundancy with game instructions
    cout<<"welcome to the Scaleshop!\n"
    <<"since Treasure Mountian has become frozen\n"
    <<"all my scales have become unblanced\n"
    <<"since I balance random rocks I find with known masses\n"
    <<"I cannot tell you what the mass of the object is\n"
    <<"the scale will tell you greater than or less than\n"
    <<"but don't worry all of the objects will be between 1kg and 30kg\n"
    <<"to add wights just type the number of kgs you want to add\n"
    <<"if you go over, then type a negative number to subtract masses\n"
    <<"if your under, well then just type a normal number without a negative\n"
    <<"yeah it's a guessing game, but you need money and I need balance, now go,\n";
    }
    do{
    rokmass=rand()%30;
    
    do{
    cout<<"so what is your guess?\n";
    cin>>guess;
    exit=guess;
    gestotl+=guess;
    if(gestotl==rokmass){
                         cout<<"balance\n"
                         <<"the mass of rock="<<gestotl<<"kg\n";
                         if(nliterz<4){
                                       nliterz+=1;
                                       }
                         else
                         money+=25;
                         }
    if(gestotl>rokmass){
                        cout<<"mass of rock<"<<gestotl<<"kg\n";
                        }
    if(gestotl<rokmass){
                        cout<<"mass of rock>"<<gestotl<<"kg\n";
                        }
    
    }while(gestotl!=rokmass);
    cout<<"money: "<<money<<"fuel: "<<nliterz<<endl;
    cout<<"do you want to balance another scale?\n"
    <<"press 'y' to balance, anything else to leave\n";
    cin>>exit;
    }while(exit=='y');
}

int rokshop(int &nliterz,int &money,int levelct){
    int hoctex,decide,answer;
    char exit;
    if(levelct<=6){//to avoid redundancy with game instructions
    cout<<"welcome to the Rockshop, this is the logic cave\n"
    <<"this is where the numbers for different bases are stored for reference\n"
    <<"unfortunately the freezing loosened the hex and octal reference\n"
    <<"so what I need to do is imput the decimal form of the hex or octal number\n"
    <<"that appears, these values will generally range from 1 to 1000 in decimal\n";
    }
    do{
       hoctex=rand()%1000;
       decide=rand()%2;
       if(decide==1){
                     cout<<"what is this hex number?\n"
                     <<hex<<hoctex<<endl;
                     }
                     if(decide==0){
                     cout<<"what is this octal number?\n"
                     <<oct<<hoctex<<endl;
                     }
       do{
       cin>>answer;
       if(answer==hoctex){
                          cout<<"yeah that's it\n";
                          if(nliterz<4)
                                       nliterz+=1;
                          else
                              money+=25;
                          }
       else{
            cout<<"I don't think that is right, try again\n";
            }
       }while(answer!=hoctex);
    cout<<"|money: "<<dec<<money<<"|fuel: "<<dec<<nliterz<<endl;
    cout<<"you want to do another? type 'y' to go again, anthing else to leave\n";
      cin>>exit;
      }while(exit=='y');
}

int storeget(int &money,int &nnetz,int &nliterz){//store function
    char choice,done;
    cout<<"jetpack fuel,clif bars,nets; you want it we got it\n"
    <<"as long as you have enough money\n";
    do{
          cout<<"what would you like to buy?\n"
          <<"press 1 for liter of rocket fuel: 200 cents\n"
          <<"press 2 for 1 elf sized net     : 5 cents\n"
          <<"press 3 for 5 elf sized nets    : 25 cents\n";
          cin>>choice;
          switch(choice){
                         case '1':
                                  if(money>=200){
                                                 if(nliterz<4){
                                                               cout<<"purchased 1 liter of rocket fuel\n";
                                                               money-=200;
                                                               nliterz+=1;
                                                               cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<endl;
                                                               }
                                                 else{
                                                      cout<<"your fuel tank is full\n";
                                                      cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<endl;
                                                      }
                                                 }
                                  else{
                                       cout<<"nice try, but you do not have enough money\n";}
                                  break;
                         case '2':
                                  if(money>=5){
                                               cout<<"purchased 1 elf sized net\n";
                                               money-=5;
                                               nnetz+=1;
                                               cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<endl;
                                               }
                                  else{
                                       cout<<"nice try, but you do not have enough money\n";}
                                  break;
                         case '3':
                                  if(money>=25){
                                                cout<<"purchased 5 elf sized nets\n";
                                                money-=25;
                                                nnetz+=5;
                                                cout<<"|money: "<<money<<"|nets: "<<nnetz<<"|fuel: "<<nliterz<<endl;
                                                }
                         
                                  else{
                                       cout<<"nice try, but you do not have enough money\n";}
                                  break;
                         default:
                                 cout<<"sorry we are out of those\n";
                                 break;
                         }
          cout<<"is that all? type 'y' or any key to leave and 'n' to make another purchase\n";
          cin>>done;
          }while((done=='N')||(done=='n'));
    cout<<"thanks for shopping at T.M. Sporting Goods come back if you need anything!\n";
}

int tresrget(int &money,int &tresfnd,int nsnblws,int &treserz){
    int stack;
    char check;
    cout<<"you are at the treasure terminal, there is a small stone grotto in \n"
    <<"the rockface of this side of Treasure Mountian. It is half buried in snow\n"
    <<" and there is eveidence of a spring nearby which has now frozen.\n";

    
       cout<<"how many snowbols do you wish to stack?\n";
          cin>>stack;
          do{
          cout<<"search for a treasure? Type 'y' to search, 's' to change stack number\n"
          <<"and anything else to exit\n";
          
             cin>>check;
             switch(check){
                          case 'Y':
                          case 'y'://player wants to check for a treasure
                                   if(treserz>0){// test to see if all treasures have been collected, 
                                                 if(stack==nsnblws){//test to see if the player stacked the right number of snowbols
                                                                    if(money>10){//check to see if player can spare a dime
                                                                                 cout<<"you find a treasure\n";
                                                                                 tresfnd+=1;
                                                                                 treserz-=1;
                                                                                 money-=10;
                                                                                 cout<<"|money = "<<money<<"|treasures = "<<tresfnd<<endl;
                                                                                 }
                                                                    else{//player cannot spare a dime
                                                                         cout<<"you need more money\n";
                                                                         cout<<"|money = "<<money<<"|treasures = "<<tresfnd<<endl;
                                                                         }
                                                                    }
                                                 else{//player did not stack the right number of snowbols
                                                      cout<<"you did not stack the correct number of snowbols\n";
                                                      money-=10;
                                                      }
                                                 }
                                   else//player has extracted the maximun of treasures for this round             
                                   cout<<"you have found all the currently avalible treasures\n";
                                   break;
                          case 'S':
                          case 's'://player wants to revise the stack
                                   cout<<"how many do you wish to stack?\n";
                                   cin>>stack;
                                   break;
                          default://player wants to exit,
                                   cout<<"you leave the grotto, still confused as to why you need to throw down a coin.\n";
                                   break;
                          }
       }while(((check=='S')||(check=='s'))||((check=='Y')||(check=='y')));//repeat until player askes to exit
    cout<<"you are now back on the trail\n";
}

/*thingsto do
//fix clockshop,
/ make playerstats a saveable file,
//remove redundant instructins,
  make player stats an array,
  fix exits,
//increase reward for multiplication or devision,
  add boss castle entrance array,
  add theifs?
  theif boss?
  hunger bar?
*/
//just to even it out to a nice...

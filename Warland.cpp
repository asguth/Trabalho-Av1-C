#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
using namespace std;

//Variaveis fora do int main para ter uso universal:
int jog,vid,ata,cur,def,esc;
int ini,inivid,iniata;

//funcoes para repeticoes:

void playerstats (){
 cout << "\nStatus           Vida:" << vid   << "   Ataque:" << ata    << "   Cura:" << cur;
}
void inistats (){
    cout << "\nInimigo          Vida:" << inivid << "   Ataque:" << iniata << "\n";
}

int main()         
{
   //Acesso a lingua portuguesa:
   setlocale(LC_ALL, "Portuguese");
   
   //Apresentacao:
   printf("\n");
   printf(" ?????   ???   ?????                    ?????                           ????\n");
   printf(" ????   ????   ????                     ??????                          ??? \n");
   printf(" ????   ????   ????  ??????   ???????   ????   ??????   ???????        ???? \n");
   printf(" ????   ????   ????     ???? ?????????? ????      ???? ??????????  ???????? \n");
   printf(" ?????  ?????  ???   ???????  ????  ??  ????    ??????  ???? ???? ???  ???? \n");
   printf("  ???????????????   ????????  ????      ????  ????????  ???? ???? ???  ???? \n");
   printf("    ????? ?????    ???   ???? ????      ???? ???   ???? ???? ???? ???  ?????\n");
   printf("     ???   ???      ???????? ?????     ?????  ???????? ???? ?????  ???????? \n\n");
   printf("                            Press ENTER to Start");
   cin.ignore();
   system("CLS");

   //Escolha de Personagem:
   printf("\n1 - Cavaleiro\n");
   printf("2 - Arqueiro\n");
   printf("3 - Mago\n");
   printf("4 - Assasino\n");
   printf("5 - Clérigo\n");
   printf("6 - Paladino\n");
   printf("7 - Bárbaro\n");
   printf("8 - Necromante\n");
   printf("9 - Druida\n");
   printf("10 - Monge\n");
   cout << "\nEscolha sua classe: ";
  
   //captura da tecla:
   scanf("%d", &jog);
   
   //Declaracao de Herois:
   system("CLS");
   switch(jog)
   {
       case 1:
       vid=150;
       ata=15;
       cur=10;
       printf("\nVocê escolheu Cavaleiro\n");
       break;
       
       case 2:
       vid=90;
       ata=20;
       cur=5;
       printf("\nVocê escolheu Arqueiro\n");
       break;
       
       case 3:
       vid=90;
       ata=15;
       cur=10;
       printf("\nVocê escolheu Mago\n");
       break;
       
       case 4:
       vid=100;
       ata=20;
       cur=5;
       printf("\nVocê escolheu Assassino\n");
       break;
       
       case 5:
       vid=150;
       ata=15;
       cur=10;
       printf("\nVocê escolheu Clérigo\n");
       break;
       
       case 6:
       vid=150;
       ata=15;
       cur=10;
       printf("\nVocê escolheu Paladino\n");
       break;
       
       case 7:
       vid=120;
       ata=20;
       cur=5;
       printf("\nVocê escolheu Bárbaro\n") << vid;
       break;
       
       case 8:
       vid=100;
       ata=15;
       cur=10;
       printf("\nVocê escolheu Necromante\n");
       break;
       
       case 9:
       vid=100;
       ata=10;
       cur=15;
       printf("\nVocê escolheu Druida\n");
       break;
       
       case 10:
       vid=120;
       ata=5;
       cur=20;
       printf("\nVocê escolheu Monge\n");
       break;
       
    }
    sleep(3);
    system("CLS");
    
    printf("\nVocê enfrentará um inimigo aleatório, prepare-se!\n");
    sleep(3);
    system("CLS");
    
   //Escolha aleatoria baseada no horario do computador:
   srand (time(0));
   ini = 1+rand()%10;
   
   //Declaracao de inimigos:
   switch(ini)
   {
       case 1:
       inivid=90;
       iniata=5;
       printf("\nSeu inimigo é um Goblin\n");
       break;
       
       case 2:
       inivid=90;
       iniata=5;
       printf("\nSeu inimigo é um Zumbi\n");
       break;
       
       case 3:
       inivid=100;
       iniata=5;
       printf("\nSeu inimigo é um Esqueleto\n");
       break;
       
       case 4:
       inivid=100;
       iniata=10;
       printf("\nSeu inimigo é uma Harpia\n");
       break;
       
       case 5:
       inivid=100;
       iniata=10;
       printf("\nSeu inimigo é uma Bruxa\n");
       break;
       
       case 6:
       inivid=120;
       iniata=10;
       printf("\nSeu inimigo é uma Múmia\n");
       break;
       
       case 7:
       inivid=130;
       iniata=15;
       printf("\nSeu inimigo é um Minotauro\n");
       break;
       
       case 8:
       inivid=140;
       iniata=15;
       printf("\nSeu inimigo é um Ciclope\n");
       break;
       
       case 9:
       inivid=150;
       iniata=15;
       printf("\nSeu inimigo é um Retalhador\n");
       break;
       
       case 10:
       inivid=200;
       iniata=20;
       printf("\nSeu inimigo é um Ceifero\n");
       break;
       
    }
    sleep(3);
    system("CLS");
    
    //interface
    playerstats ();
    inistats ();

    while(vid > 0 && inivid > 0)
    {
        printf ("\nSua Vez:\n");
        printf ("\n1 - Atacar");
        printf ("\n2 - Curar\n");
        printf ("\nEscolha: ");
        scanf("%d", &esc);
        system("CLS");
        
        switch(esc)
        {
            case 1:
            inivid -= ata;
            break;
            
            case 2:
            vid += cur;
            break;
        }

    system("CLS");
    printf ("\nVez do inimigo\n");
    vid -= iniata;
    sleep (3);
    system("CLS");
    cout << "\nInimigo ataca com " << iniata << " de ataque!\n";
    
    playerstats ();
    inistats ();
    
    if (inivid <=0 ){
        system("CLS");
        printf("\nVocê Ganhou!\n");
    }
    if (vid <=0 ){
        system("CLS");
        printf("\nVocê Perdeu!\n");
        }
    }
    sleep (5);
    return 0;
}

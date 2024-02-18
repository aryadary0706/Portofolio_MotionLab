#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <conio.h>

using namespace std;

int gameturn = 1;
int HP_monster = 100;
int HP_player = 1000;

int base_monster = 40;
int base_player = 25;

//int DEF_monster = 25;
//int DEF_player = 15;

string monster_do[4] = {"basic attack", "heavy attack", "Ultimate", "do nothing"};
string player_move[4] = {"1. basic attack (-25)", "2. Heal (+60)", "3. Ultimate (+60/-15 HP)", "4. sacrifice (+125 ATK / -300 HP)"};

void monster_action(){
//Dengan bantuan chatgpt, saya nggak tahu rumusnya
        srand(static_cast<unsigned>(time(NULL)));

        int move = rand() % 4;
        if (monster_do[move] == "basic attack") {
            HP_player -= base_monster;
            cout << "Previous Move :\n Monster melakukan basic attack '-40'\n";
            cout<<"HP mu menjadi "<<HP_player;
        } else if (monster_do[move] == "heavy attack") {
            HP_player -= (base_monster + 15);
            cout << "Previous Move :\n Monster melakukan Heavy Attack! '-65'\n";
            cout<<"HP mu menjadi "<<HP_player;
        } else if (monster_do[move] == "Ultimate") {
            HP_player -= (base_monster + 25);
            HP_monster -= 30;
            cout << "Previous Move :\n Monster Melakukan Ultimate dan mengurangi HP-nya 30, '-75'\n";
            cout<<"HP mu menjadi "<<HP_player;
        }else{
        	cout<<"Previous Move :\n Monster tidak melakukan apa-apa\n";
        	HP_player -= 0;
		}
    
}

void player_action(){
    int choice2;
    cout << "\n Pilih Aksimu sekarang! (1/2/3/4)\n";
    cout << player_move[0] << endl;
    cout << player_move[1] << endl;
    cout << player_move[2] << endl;
    cout << player_move[3] << endl;
    cin >> choice2;

    switch(choice2){
        case 1:
            HP_monster -= base_player;
            break;
        case 2:
            HP_player += 60;
            break;
        case 3:
            HP_monster -= (base_player + 35);;
            HP_player -= 15;
            break;
        case 4:
            HP_player -= 300;
            base_player += 125;
            break;
    }
    
    
    if (HP_player > 1000)  {
    	HP_player = 1000;
	}
}

void combat(){
    cout << "---turn : " << gameturn << "-------------------------------\n";
    cout << "\t RAJA IBLIS \n";
    cout << "HP MONSTER : " << HP_monster << "\n";
    cout<< "HP HERO : " << HP_player << "\n";

    player_action();
    monster_action();
	getch();
	system("cls");
    
    if (HP_player < 0 || HP_monster < 0) {
    	cout<<"game sudah berakhir\n";
    	if (HP_player < 0){
    		cout<<"kamu kalah, sayang sekali";
		}else if (HP_monster < 0){
			cout<<"kamu mengalahkan raja iblis";
		}
	}

}

int main(){
    int choice1;
    cout << "==========SIMPL3 TURN B4SE==========\n";
    cout << "Kamu adalah pahlawan, dipanggil untuk mengalahkan raja iblis\n";
    cout << "======================================\n";
    cout << "Apakah kamu mau mengalahkan raja iblis sekarang juga! :3 'fufufu'\n";
    cout << "(1) AYO AJA GUA MAH!\n\n\n";
    cout << "'KLIK SELAIN '1' UNTUK MENGHENTIKAN PROGRAM \n";
    cin >> choice1;

    system("cls");
    switch(choice1){
        case 1:
        	while (HP_player > 0 && HP_monster > 0){
        		combat();
        		gameturn++;
			}
		
            break;
        default:
        	cout<<"Kamu keluar dari game";
            return 0;
    }
}

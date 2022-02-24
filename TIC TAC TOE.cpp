#include <iostream>
#include <time.h>
#include <string>

using namespace std;

string number [9] = {"1","2","3","4","5","6","7","8","9"};

void tampilan(){
	system ("cls");
	cout << " TIC TAC TOE \n ";
	cout << " 	 __________ __________ __________  										\n";
	cout << "	|          |          |          | 										\n";
	cout << "	|    " <<number[0] << " |  " <<number[1] << " | " <<number[2] << " |  	\n";
	cout << "	|__________|__________|__________| 										\n";
	cout << "	|          |          |          |									 	\n";
	cout << "	|    " <<number[3] << " |  " <<number[4] << " | " <<number[5] << " |  	\n";
	cout << "	|__________|__________|__________| 										\n";
	cout << "	|          |          |          | 										\n";
	cout << "	|    " <<number[6] << " |  " <<number[7] << " | " <<number[8] << " |  	\n";
	cout << "	|__________|__________|__________| 										\n\n";
	
}
	
	int hasil()
	{
		if(number[0]==number[1] && number[1]== number[2]){
			return 1;
		}else if(number[3]==number[4] && number[4]== number[5]){
			return 1;
		}else if(number[6]==number[7] && number[7]== number[8]){
			return 1;
		}else if(number[0]==number[3] && number[3]== number[6]){
			return 1;
		}else if(number[1]==number[4] && number[4]== number[7]){
			return 1;
		}else if(number[2]==number[5] && number[5]== number[8]){
			return 1;
		}else if(number[3]==number[4] && number[4]== number[5]){
			return 1;
		}else if(number[0]==number[4] && number[4]== number[8]){
			return 1;
		}else if(number[2]==number[4] && number[4]== number[6]){
			return 1;
		}else if(number[0]!="1" && number[1] != "2" && number[2] != "3" && number[3] != "4" && number[4] != "5" && number[5] != "6" && number[6] != "7"&& number[7] != "8" && number[8] != "9"){
			return -1;
		}else{
			return 0;
		}
	}
		
		
	
	
	int main (){
		int play = 1, nilaiHasil, pilihan;
		string pemain[2] = {"Anda", "Komputer"};
		string karakter;
		
		do {
			Mulai:
			tampilan();
			
			play=(play%2)?1:2;
			
			if (play == 1 && pemain [0] == "Anda"){
				cout << "  " << " Masukkan angka 1-9 untuk memilih kotak yang masih kosong \n"; 
				cin >> pilihan;
				
				karakter = "\x1B[34mX\033[0m";
				
				if (pilihan == 1 && number [0] == "1"){
					number [0] = karakter;
				}else if(pilihan == 2 && number [1] == "2"){
					number [1] = karakter;
				}else if(pilihan == 3 && number [2] == "3"){
					number [2] = karakter;
				}else if(pilihan == 4 && number [3] == "4"){
					number [3] = karakter;
				}else if(pilihan == 5 && number [4] == "5"){
					number [4] = karakter;
				}else if(pilihan == 6 && number [5] == "6"){
					number [5] = karakter;
				}else if(pilihan == 7 && number [6] == "7"){
					number [6] = karakter;
				}else if(pilihan == 8 && number [7] == "8"){
					number [7] = karakter;
				}else if(pilihan == 9 && number [8] == "9"){
					number [8] = karakter;
				}else {
					play--;
				}
			}else if (play == 2 && pemain [1] == "Komputer"){
				srand (time(0));
				int nilaiRandom = rand ()%9;
				
				karakter = "\x1B[31mO\033[0m";
				
				if(nilaiRandom == 0 && number [0] == "1"){
					number[0] = karakter;					
				}else if(nilaiRandom == 1 && number [1] == "2"){
					number[1] = karakter;
				}else if(nilaiRandom == 2 && number [2] == "3"){
					number[2] = karakter;
				}else if(nilaiRandom == 3 && number [3] == "4"){
					number[3] = karakter;
				}else if(nilaiRandom == 4 && number [4] == "5"){
					number[4] = karakter;
				}else if(nilaiRandom == 5 && number [5] == "6"){
					number[5] = karakter;
				}else if(nilaiRandom == 6 && number [6] == "7"){
					number[6] = karakter;
				}else if(nilaiRandom == 7 && number [7] == "8"){
					number[7] = karakter;
				}else if(nilaiRandom == 8 && number [8] == "9"){
					number[8] = karakter;
				}else {
					play--;
				}
			}
			
			nilaiHasil = hasil();
			play++;
					
		}while (nilaiHasil == 0);
		tampilan();
		if(nilaiHasil == 1){
			play--;
			if(play == 1){
				cout << " " << " ANDA MENANG \n\n";
				}else {
				cout << " " << " KOMPUTER MENANG! \n\n";
				}
		}else if (nilaiHasil==-1){
			cout << " " << " Permainan selesai dengan hasil SERI \n\n";
		}
		
		char Mulai;
		cout << " " << " MULAI? (Y/N) ";
		cin >> Mulai;
		
		if (Mulai == 'Y' || Mulai == 'y'){
			nilaiHasil = 0;
			for(int i=0;i<9;i++){
				number[i] = to_string (i+1);
			}
			goto Mulai;
		}else{
			cout << "\n " <<"Terima Kasih sudah bermain! \n";
		}
		return 0;
	}
		
		
	
	
	
	


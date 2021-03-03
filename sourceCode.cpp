#include <iostream>
#include <fstream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main(){
	int sifre;
	int deneme;
	
	cout << "Sifrenizi giriniz: "; cin >> sifre;
	system("cls");
	cout << "Sifreniz Cozumleniyor..."<<endl <<endl;
	sleep(5);
	for(int i=0;i<10;i++){
		if(deneme==sifre)
			break;
			
		else{
		for(int j=0;j<10;j++){
			if(deneme==sifre)
				break;
				
			else{
			for(int k=0;k<10;k++){
				if(deneme==sifre)
					break;
				
				else{
					for(int m=0;m<10;m++){
						deneme=i*1000+j*100+k*10+m;
						//cout << deneme << endl;
						if(deneme==sifre){
							cout << "sifre kirildi!\n'sifre =" << deneme << "'" << endl;
							break;
						}
					}
				}
			}
			}
		}
		}
	}
	
	return 0;
}


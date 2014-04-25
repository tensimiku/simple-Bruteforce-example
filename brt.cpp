#include<iostream>
#include<string>

using namespace std;

int bruteforce(char *brt,int index, int maxloop){
	for (char i = -128; i < 127; i++){
		brt[index] = i;
		if (index == maxloop - 1){
			if (strcmp(brt, "533") == 0){ // anything to chk
				cout << "password is " << brt;
				return 1;
				break;
			}

		}
		else{
			bruteforce(brt, index + 1, maxloop);

		}
	}
}
void brtready(){
	for (int i = 1; i < 4; i++)
	{
		char *brt = new char[i];
		memset(brt, 0, i+1);
		if (bruteforce(brt, 0, i) == 1)
			break;
	}
}
int main(){
	char passwd[] = "passwrd";
	brtready();
	
	return 0;
}

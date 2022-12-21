#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a;
	string array [45] = {"A","B","C","D","E"," ","F","G","H","I","J","K","L"," ","M","N","O","P","Q","R","S","T","U"," ","V","W","X","Y","Z","0","1","2","3","4","5","6","7","8","9"," "," ","?","!","#","*"};
	system("TITLE The Matrix");
	system("color A");
	while(1)
	{
		Sleep(35);
		for(int i=0; i<27; i++)
		{
			a = rand()%45;
			cout << " " << array[a];
			cout << " ";
		}
		cout << endl;
	}
	getch();
	return 0;
}

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	srand(time(0));
 	int u = rand()%100000;
 	int i;
 	int t = 1;
 	int s = 0;
 	int z = 20;
 	int f = z;
 	int w = 335;
 	int p;
 	int a = rand()%20;
    
 	do{ 
 		cout  << "У вас "<< f << " попыток!"<<" Введите число которое я загадал (от 0 до 100000):"<<endl;
 		cin >> i;
 		if (i == u + w + p ){
 			cout <<"ХА! ХА! ХА! ХА! ХА! ХА! ХА! Я обдурил тебя!"<< endl;
 			w = w - a;
 			p = 1;
 			};
 		if (i == u + w){
 			cout <<"ХА! ХА! ХА! ХА! ХА! ХА! ХА! Ты снова купился!"<< endl;
 			w = w - a;
 			};
 		if (i > u )cout<<"Ваше число больше" << endl;
 		if (i < u )cout<<"Ваше число меньше" << "(Загаданное число " << u + w << ")"<<endl;
 		t = t + 1;
 		s = s + 1;
 		f = f - 1;
 		if (s == z) i = u;
	}while (i != u);
    if(s == z) cout << "Ты проиграл!Загаданное число:" << u <<endl;
 	else cout << "Верно! Загаданное число:" << u <<endl;
 	return 0;
}	
 	

 
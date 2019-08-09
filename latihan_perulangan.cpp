#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int a=0,sum=0;
////////////////////////////////////////////////
	for(a=0;a<10;a++){
		sum+=a;
		if(sum>=20){
			break;
		}
	cout<<a;
	cout<<sum;
	}
////////////////////////////////////////////////
	while(a<10){
		a++;
		sum+=a;
		if(sum>=20){
			break;
		}
	cout<<"bilangan= "<<a<<endl;
	cout<<"jumlah= "<<sum<<endl;	
	}
////////////////////////////////////////////////
	do{
		a++;
		sum+=a;
		cout<<a<<endl;
		cout<<sum<<endl;
		if(sum>=20){break;}
	}while(a<10);	

getch();
}

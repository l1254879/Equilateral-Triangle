#include<iostream>
#include<iomanip>
#include"triangle.h"

using namespace std;

int main(){
	triangle t1(5),t2(7,'^'),t3(12,'X','O'),t4(50,'$','O');
	cout<<"t1 has size = "<<t1.GetSize()<<"units.\n";
	cout<<"\nt2 has size = "<<t2.GetSize()<<"units.\n";
	cout<<"\nt3 has size = "<<t3.GetSize()<<"units.\n";
	cout<<"\nt4 has size = "<<t4.GetSize()<<"units.\n";
	t1.Draw();



	return 0;
}

#include<string>
#include<iostream>
#include<iomanip>
#include<cmath>
#include"triangle.h"

using namespace std;

//Judge the size
int triangle::JudgeSize(int call_size){
	if(call_size > 39)
		size = 39;
	else if(call_size < 1)
		size = 1;
	else 
		size = call_size;
}
//Judge the border
char triangle::JudgeBorder(char call_border){
	int trns_ascii;
	trns_ascii = call_border;
	if(trns_ascii >= 33 && trns_ascii <= 126)
		border = call_border;
	else
		border = '#';
}
//Judge the fill
char triangle::JudgeFill(char call_fill){
	int trns_ascii;
	trns_ascii = call_fill;
	if(trns_ascii >= 33 && trns_ascii <= 126)
		fill = call_fill;
	else
		fill = '*';
}
//one parameter in function
triangle::triangle(int call_size){
	JudgeSize(call_size);
	border = '#';
	fill = '*';
}
//two parameter in function
triangle::triangle(int call_size,const char call_border){
	JudgeSize(call_size);
	JudgeBorder(call_border);
	fill = '*';
}
//three parameter in function
triangle::triangle(int call_size,const char call_border,const char call_fill){
	JudgeSize(call_size);
	JudgeBorder(call_border);
	JudgeFill(call_fill);
}
//return the size
const int triangle::GetSize(){
	return size;
}
//return the perimeter
const int triangle::Perimeter(){	
	return 3*size;//triangle have three side 
}
//return the area
const double triangle::Area(){
	return size*(size*0.5*sqrt(3))*0.5;//triangle formula is side*high/2
}
//size add 1
const int triangle::Grow(){
	if(size+1 <= 39){// size add 1 cannot over the 39
		size = size + 1;
		return size;
	}
	else
		return 39;
}
//size minus 1
const int triangle::Shrink(){
	if(size-1 >= 1){// size minus one cannot less than 1 
		size = size - 1;
		return size;
	}
	else
		return 1;
}
//renew the border
void triangle::SetBorder(char set_border){
	
	JudgeBorder(set_border);
}
//renew the fill
void triangle::SetFill(char set_fill){
	JudgeFill(set_fill);
}
//show all the info
const void triangle::Summary(){
	cout<<"Size of triangle's side = "<<size<<" units.\n";
	cout<<"Perimeter of triangle = "<<Perimeter()<<" units.\n";
	cout<<"Area of triangle = "<<setprecision(4)<<Area()<<" units.\n";
	cout<<"triangle looks like : "<<endl;
	Draw();
	cout<<endl;
}
//draw the triangle
const void triangle::Draw(){
	int char_sum = 0;
	for(int i=0;i<=size;i++){
		for(int k=size;k>=i;k--)
			cout<<" ";
		for(int j=0;j<i;j++){
			if(j==0||j==i-1||i==size){
				cout<<border<<" ";
				char_sum = char_sum + 1;
			}
			else{
				cout<<fill<<" ";
				char_sum = char_sum + 1;
			}
		}
		cout<<"\n";
	}
	cout<<"\n"<<"Spend "<<char_sum<<" char"<<endl;
}

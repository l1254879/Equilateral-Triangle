#include<string>
#include<iostream>
#include<cmath>
#include"triangle.h"

using namespace std;

int triangle::JudgeSize(int call_size){
	if(call_size > 39)
		size = 39;
	else if(call_size < 1)
		size = 1;
	else 
		size = call_size;
}
char triangle::JudgeBorder(char call_border){
	int trns_ascii;
	trns_ascii = call_border;
	if(trns_ascii >= 33 && trns_ascii <= 126)
		border = call_border;
	else
		border = '#';
}
char triangle::JudgeFill(char call_fill){
	int trns_ascii;
	trns_ascii = call_fill;
	if(trns_ascii >= 33 && trns_ascii <= 126)
		fill = call_fill;
	else
		fill = '*';
}
triangle::triangle(int call_size){
	JudgeSize(call_size);
	border = '#';
	fill = '*';
}
triangle::triangle(int call_size,const char call_border){
	JudgeSize(call_size);
	JudgeBorder(call_border);
	fill = '*';
}
triangle::triangle(int call_size,const char call_border,const char call_fill){
	JudgeSize(call_size);
	JudgeBorder(call_border);
	JudgeFill(call_fill);
}
int triangle::GetSize(){
	return size;
}
int triangle::Perimeter(){	
	return 3*size;
}
double triangle::Area(){
	return size*(size*0.5*sqrt(3))*0.5;
}
int triangle::Grow(){
	if(size+1 <= 39){
		size = size + 1;
		return size;
	}
	else
		return 39;
}
int triangle::Shrink(){
	if(size-1 >= 1){
		size = size - 1;
		return size;
	}
	else
		return 1;
}
void triangle::SetBorder(char set_border){
	/*int trns_ascii;
	trns_ascii = set_border;
	if(trns_ascii >= 33 || trns_ascii <= 126)
		border = set_border;
	else
		cout<<"Border cannot set"<<endl;
		*/
	JudgeBorder(set_border);
}
void triangle::SetFill(char set_fill){
	/*int trns_ascii;
	trns_ascii = set_fill;
	if(trns_ascii >= 33 || trns_ascii <= 126)
		fill = set_fill;
	else
		cout<<"Border cannot set"<<endl;
		*/
	JudgeFill(set_fill);
}
void triangle::Summary(){
	cout<<"Size of triangle's side = "<<size<<" units.\n";
	cout<<"Perimeter of triangle = "<<Perimeter()<<" units.\n";
	cout<<"Area of triangle = "<<Area()<<" units.\n";
	cout<<"triangle looks like : "<<endl;
	Draw();
}
void triangle::Draw(){
	for(int i=0;i<=size;i++){
		for(int k=size;k>=i;k--)
			cout<<" ";
		for(int j=0;j<i;j++){
	
			if(j==0||j==i-1||i==size)
				cout<<border<<" ";
			else
				cout<<fill<<" ";
		}
		cout<<"\n";
	}
}

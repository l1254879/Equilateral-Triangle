#include<string>
#include<iostream>
#include<cmath>
#include"triangle.h"

using namespace std;

triangle::triangle(int call_size){
	size = call_size;
	border = '#';
	fill = '*';
}
triangle::triangle(int call_size,const char call_border){
	size = call_size;
	border = call_border;
	fill = '*';
}
triangle::triangle(int call_size,const char call_border,const char call_fill){
	size = call_size;
	border = call_border;
	fill = call_fill;
}
int triangle::GetSize(){
	if(size > 39)
		return 39;
	else if(size < 1)
		return 1;
	else 
		return size;
}
int triangle::Perimeter(){	
	return 3*size;
}
double triangle::Area(){
	return size*(size*0.5*sqrt(3));
}
int triangle::Grow(){
	if(size > 39){
		cout<<"size cannot be more than 39"<<endl;
		return 39;
	}
	else
		return size + 1;
}
int triangle::Shrink(){
	if(size < 1){
		cout<<"size cannot be less than 1"<<endl;
		return 1;
	}
	else
		return size - 1;
}
void triangle::Summary(){
	cout<<"Size of triangle's side = "<<size<<" units.\n";
	cout<<"Perimeter of triangle = "<<Perimeter()<<" units.\n";
	cout<<"Area of triangle = "<<Area()<<" units.\n";
	cout<<"triangle looks like : "<<endl;
}
void triangle::Draw(){
	for(int i=0;i<=size;i++){
		for(int k=size-1;k>=i;k--)
			cout<<" ";
		for(int j=0;j<i;j++){
	
			if(j==0||j==i-1||i==size)
				cout<<border<<' ';
			else
				cout<<fill<<' ';
			
		}
		cout<<"\n";
	}
}

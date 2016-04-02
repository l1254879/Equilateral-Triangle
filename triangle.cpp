#include<string>
#include<iostream>
#include<cmath>
#include"triangle.h"

using namespace std;

triangle::triangle(int call_size){
	size = call_size;
}
triangle::triangle(int call_size,const char call_border){
	size = call_size;
	border = call_border;
}
triangle::triangle(int call_size,const char call_border,const char call_fill){
	size = call_size;
	border = call_border;
	fill = call_fill;
}
int triangle::GetSize(){
	return size;
}
int triangle::Perimeter(){	
	return 3*size;
}
double triangle::Area(){
	return size*(size*0.5*sqrt(3));
}
int triangle::Grow(){
	return size + 1;
}
int triangle::Shrink(){
	return size - 1;
}
void triangle::Summary(){
	cout<<"Size of triangle's side = "<<size<<" units.\n";
	cout<<"Perimeter of triangle = "<<Perimeter()<<" units.\n";
	cout<<"Area of triangle = "<<Area()<<" units.\n";
	cout<<"triangle looks like : "<<endl;
}

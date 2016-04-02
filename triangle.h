#include<string>

using namespace std;

class triangle{

	private:
		int size;
		char border;
		char fill;
	public:
		triangle(int);
		triangle(int,char);
		triangle(int,char,char);
		int GetSize();
		int Perimeter();
		double Area();
		int Grow();
		int Shrink();
		int SetBorder(char);
		int SetFill(char);
		void Draw();
		void Summary();
};

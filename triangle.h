#include<string>

using namespace std;

class triangle{

	private:
		int size;
		char border;
		char fill;
		int JudgeSize(int);
		char JudgeBorder(char);
		char JudgeFill(char);
	public:
		triangle(int);
		triangle(int,char);
		triangle(int,char,char);
		int GetSize();
		int Perimeter();
		double Area();
		int Grow();
		int Shrink();
		void SetBorder(char);
		void SetFill(char);
		void Draw();
		void Summary();
};

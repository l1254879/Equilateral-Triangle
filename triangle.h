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
		const int GetSize();
		const int Perimeter();
		const double Area();
		const int Grow();
		const int Shrink();
		void SetBorder(char);
		void SetFill(char);
		const void Draw();
		const void Summary();
		
	
};

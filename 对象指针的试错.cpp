#include <iostream>
using namespace std;
class test
{
	private:
		int a;
		int b;
		int c;
	public:
		void show()
		{
			cout<<"Hello!"<<endl;
		}
};
int main()
{
	test * p1=new test;
	p1->show();
//	p1.show();  此法会出错，因p1实际指的是对象，类似于结构体中，用箭头来使用内部成员 
	test * p2=new test[5];
	p2[0].show();
//	p2[1]->show();  此法会出错，因p2实际指向的是数组的首地址？ 
	
}

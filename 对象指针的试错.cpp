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
//	p1.show();  �˷��������p1ʵ��ָ���Ƕ��������ڽṹ���У��ü�ͷ��ʹ���ڲ���Ա 
	test * p2=new test[5];
	p2[0].show();
//	p2[1]->show();  �˷��������p2ʵ��ָ�����������׵�ַ�� 
	
}

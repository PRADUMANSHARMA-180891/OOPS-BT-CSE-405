/*program to demonstrate the concept of:-
*default constractor
*parameterized constractor
*constractor overloading*/

#include <iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		complex(int x,int y)
		{
			a=x;
			b=y;
		}
		complex(int p)
		{
			a=p;
		}
		complex()
		{ 
			a=0;
			b=0;
		}
		void display(void)
		{
			cout<<"a ="<<a<<endl;
			cout<<"b ="<<b<<endl;
		}
	
		
};
int main()
{
	complex c1(1,3),c2(4),c3;
	c1.display();
	c2.display();
	c3.display();
	return 0;

}


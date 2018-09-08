#include <iostream> 

using namespace std; 

class A 
{ 
public: 
    virtual void fun1(void) ;

    virtual void fun2(void) ;
    void set(int z_input); 

    int  z; 

    void config(int x, int y, int z=4, int n=5);
    void config(int a, int b, int c=6);  

private:
   int i;
   int j; 
}; 

void A::config(int x, int y, int z, int n)
{
	cout << "x=" << x << endl; 
	cout << "z=" << z << endl; 
	cout << "n=" << n << endl; 
}


void A::fun1(void)
{
	cout << "A's fun1()" << endl; 
    i = 5;
	cout << "i = " << i << endl; 
}

void A::fun2(void)
{
	cout << "A's fun2()" << endl; 	
	cout << "call internal function fun1" << endl; 
	this->fun1();
}

void A::set(int z_input)
{	
	z = z_input;
	cout << "z  = " <<  z << endl; 
}



int main (int argc, char **argv)
{
	A *a;
	char b = 2;
    unsigned char c = 5;

	a = new A; 
	cout << "test stage1: " << endl;
    a->config(1,2);

	cout << "test stage2: " << endl;
    a->config(1,2,3);

    cout << "test stage3: " << endl;
    a->config(1,2,3,4);

	return 0;
}
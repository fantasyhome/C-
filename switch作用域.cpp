#include<iostream>
using namespace std;
int main()
{
    switch(0)
    {
    	case 1:int javl;break;
    	case 0:javl=1;
    	cout<<javl;	
    }
    /*有趣的是,看似跳过了javl的定义，却仍然可用，switch与所有case构成一个块，只定义不初始化，而在别处初始化合法，但这样其实费解，要在case标签内定义并初始化变量最好加块作用域，另外，在case中不加括号的定义并且初始化是非法的，因为c++规定不许跨过初始化语句跳转到该变量作用域内另一个位置*/
	return 0;
}
///*注释对/**/不能嵌套*/
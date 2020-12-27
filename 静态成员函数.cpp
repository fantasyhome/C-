#include<iostream>
using namespace std;
class student
{
	public:
	student(int n,int a,float s):num(n),age(a),score(s){}//构造函数
	void total()//成员函数
	{
		sum+=score;
		count++;
		}
	static float average();//声明静态成员函数
	private:
	int num;
	int age;
	float score;
	static float sum;//静态数据成员sum
	static int count;//静态数据成员count
	/*静态数据成员属于类，每一个成员对象都可以引用它，静态成员函数也属于类，默认访问静态数据成员，因不属于特定对象，要访问本类的非静态成员，应该加对象名和成员运算符“.”*/
	};
	float student::average()
	{
		return(sum/count);
		}
	float student::sum=0;//初始化
	int student::count=0;//初始化
	int main()
	{
		student stud[3]={
			student(1001,18,70),
			student(1002,19,78),
			student(1005,20,98)
			};
			int n;
			cout<<"please input the number of students:";
			cin>>n;
			for(int i=0;i<n;i++)
			stud[i].total();
			cout<<"the average score of"<<n<<"student is"<<student::average()<<endl;
			return 0;
		}
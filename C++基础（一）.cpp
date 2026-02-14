#include<iostream>//作用类似于#include<stdio.h> 
using namespace std;//是使用std这个名字空间，防止使用错误 
int main()
{
	int a;
	cin >> a;//等价于scanf("%d",&a);
	cout << a;//printf("%d",a);
	cout <<"a的值是："<< a<<endl;
	//等价于printf("a的值是：%d\n",a);
	//endl可以大致理解为换行的意思 
	return 0;
}

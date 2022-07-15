#include<stdio.h>
#include<string.h>
struct Book//结构体 
//.    结构体变量.成员
//->   结构体指针->成员
//*    解引用操作符
//&    取地址符 
{
	char name[20];
	short price;
};//注意分号，结束语句 

int main()
{
	struct Book b1={"c语言程序设计",55};
	strcpy(b1.name,"c++");  //strcpy--string copy(字符串拷贝）--库函数--string.h 
	printf("%s\n",b1.name); 
//	b1.name="c++";  //name 是数组的数组名，本质上是一个地址。 
//	b1.price=30;    //price 是变量可修改 
//	struct Book*p=&b1; //指针取b1的地址 
//	printf("%s\n",p->name);
//	printf("%d\n",p->price);
//	printf("%s\n",(*p).name);
//	 printf("%d\n",(*p).price);
//	printf("书名：%s\n",b1.name);
//	printf("价格：%d\n",b1.price) ;
	return 0;
}

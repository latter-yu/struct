#define _CRT_SECURE_NO_WARNINGS

//结构体类型声明


typedef struct Stu  //结构标签
{
	char name[20];
	int age;
	double score;  //成员列表
}Stu;  //Stu为类型名
struct Point
{
	int x;
	int y;
};

struct S
{
	char name[20];
	int age;
	double score;
	struct Point p;
}; //s1;为变量名

void Print1(struct S s)
{
	printf("%s %d %lf %d %d\n", s.name, s.age, s.score, s.p.x, s.p.y);
}
void Print2(struct S* ps)
{
	printf("%s %d %lf %d %d\n", ps->name, ps->age, ps->score, ps->p.x, ps->p.y);
}
int main()
{
	struct S s = { "zhang", 20, 65.5, { 3, 5 } };
	//printf("%s %d %lf %d %d\n", s.name, s.age, s.score, s.p.x, s.p.y);
	Print1(s); //传值调用
	Print2(&s);  //传址调用
	return 0;
}
int Add(int x, int y)
{
	return x + y;
}                     //压栈（函数传参）

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
//结构体应尽量小
int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}
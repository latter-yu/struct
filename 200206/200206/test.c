#define _CRT_SECURE_NO_WARNINGS

//�ṹ����������


typedef struct Stu  //�ṹ��ǩ
{
	char name[20];
	int age;
	double score;  //��Ա�б�
}Stu;  //StuΪ������
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
}; //s1;Ϊ������

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
	Print1(s); //��ֵ����
	Print2(&s);  //��ַ����
	return 0;
}
int Add(int x, int y)
{
	return x + y;
}                     //ѹջ���������Σ�

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
//�ṹ��Ӧ����С
int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}
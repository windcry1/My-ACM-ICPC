#include <iostream>
using namespace std;
#define X 3.1416
class container{
protected:
	double radius;
public:
	container(double ra)
	{
	    radius=ra;
	}
	virtual double surface_area()=0;      //���麯�����������
	virtual double volume()=0;            //���麯�����������
};

/*
	  ���·������д�����壬Բ���壬�����ಢʵ����������ܺ�����,�������
*/
class cube:public container
{
public:
	cube(int ra):container(ra)
	{
	}
	virtual double surface_area()
	{
		return 6*radius*radius;
	}
	virtual double volume()
	{
		return radius*radius*radius;
	}
};
class sphere:public container
{
public:
	sphere(int ra):container(ra)
	{
	}
	virtual double surface_area()
	{
		return 4*X*radius*radius;
	}
	virtual double volume()
	{
		return X*radius*radius*radius*4/3;
	}
};
class cylinder:public container
{
public:
	cylinder(double ra,double ha):container(ra)
	{
		radius=ra;
		h=ha;
	}
	virtual double surface_area()
	{
		return 2*X*radius*h+2*X*radius*radius;
	}
	virtual double volume()
	{
		return X*radius*radius*h;
	}
protected:
	double h;
};

int main()
{
	container *p;             //���������ָ��p
	cube obj1(10);            //�������������obj1
	sphere obj2(6);            //�����������obj2
	cylinder obj3(4,5);        //����Բ�������obj3
	p=&obj1;                  //ָ��pָ�����������obj1
	cout<<"������������"<<endl;
	cout<<"   ������������"<<p->surface_area()<<endl;
	cout<<"   �����������  "<<p->volume()<<endl;
	p=&obj2;                   //ָ��pָ���������obj2
	cout<<"   ����ı������"<<p->surface_area()<<endl;
	cout<<"   ����������  "<<p->volume()<<endl;
	p=&obj3;                    //ָ��pָ��Բ�������obj3
	cout<<"   Բ��ı������"<<p->surface_area()<<endl;
	cout<<"   Բ��������  "<<p->volume()<<endl;
	return 0;
}

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
	virtual double surface_area()=0;      //纯虚函数，求面积。
	virtual double volume()=0;            //纯虚函数，求体积。
};

/*
	  在下方构造编写正方体，圆柱体，球体类并实现其基本功能和属性,输出程序
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
	container *p;             //定义抽象类指针p
	cube obj1(10);            //创建正方体对象obj1
	sphere obj2(6);            //创建球体对象obj2
	cylinder obj3(4,5);        //创建圆柱体对象obj3
	p=&obj1;                  //指针p指向正方体对象obj1
	cout<<"程序输出结果："<<endl;
	cout<<"   正方体表面积："<<p->surface_area()<<endl;
	cout<<"   正方体体积：  "<<p->volume()<<endl;
	p=&obj2;                   //指针p指向球体对象obj2
	cout<<"   球体的表面积："<<p->surface_area()<<endl;
	cout<<"   球体的体积：  "<<p->volume()<<endl;
	p=&obj3;                    //指针p指向圆柱体对象obj3
	cout<<"   圆体的表面积："<<p->surface_area()<<endl;
	cout<<"   圆体的体积：  "<<p->volume()<<endl;
	return 0;
}

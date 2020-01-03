#include <iostream>
using namespace std;
int data[1005];     //��¼ÿ����Ʒ���������±꼰����Ʒ�ı��
int beibao(int weight,int n)      //ȡ��Ʒ�ű����ĳ���,��ʵ�Ǽ��豳���������Ѿ���weight��ô�࣬һ��һ�������ã���n�ţ��õ�1��
{
    if (weight==0) 
	{              //�������ñ�ȡ���ˡ�����1
        return 1;
    }
    if (n==0&&weight!=0) 
	{         //���е���Ʒ��ȡ�����ˣ����Ǳ�����������Ȼ��Ϊ0��˵����Щ��Ʒ�ͱ���һ�㶼��ƥ�䣬����
        return 0;
    }
    if (beibao(weight, n-1)==1) 
	{  //�����n����Ʒ��û�б�ȡ����������ֱ�����½��У�ȡ��n��1����Ʒ������ɹ��˾ͷ���1
        return 1;
    }
    return beibao(weight-data[n], n-1);  //�����n��1����Ʒȡ�����ˣ�������Ȼ����ȡ��ȡ��n��1����Ʒ
}
int main() 
{
    int weight,num;
    while (cin>>weight>>num) {
        int i;
        for (i=1; i<=num; i++) {
            cin>>data[i];
        }
        if(beibao(weight,num)==1)   //�ɹ�����1
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

#include<set>
#include<iterator>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,num;
	set<int>temp1;
	set<int>temp2;
	cin>>n;
	for(int i=0;i<n;i++)   //temp1
	{
		cin>>num;
		temp1.insert(num);
	}
	cin>>m;
	for(int j=0;j<m;j++)//temp2
	{
		cin>>num;
		temp2.insert(num);
	}
	set<int>::iterator iter;
	cout<<"A={";
	for(iter=temp1.begin();iter!=temp1.end();iter++)
	{
		if(iter==--temp1.end())
		{
			cout<<*iter;
		}
		else
			cout<<*iter<<", ";
	}
	cout<<"}"<<endl;
	cout<<"B={";
	for(iter=temp2.begin();iter!=temp2.end();iter++)
	{
		if(iter==--temp2.end())
		{
			cout<<*iter;
		}
		else
			cout<<*iter<<", ";
	}
	cout<<"}"<<endl;
	set<int>temp;//temp
	set_union(temp1.begin(),temp1.end(),temp2.begin(),temp2.end(),insert_iterator<set<int> >(temp,temp.begin()));
	cout<<"AuB={";
	for(iter=temp.begin();iter!=temp.end();iter++)
	{
		if(iter==--temp.end())
		{
			cout<<*iter;
		}
		else
			cout<<*iter<<", ";
	}
	cout<<"}"<<endl;
	set<int>temp3;//temp3
	set_intersection(temp1.begin(),temp1.end(),temp2.begin(),temp2.end(),insert_iterator<set<int> >(temp3,temp3.begin()));
	cout<<"AnB={";
	for(iter=temp3.begin();iter!=temp3.end();iter++)
	{
		if(iter==--temp3.end())
		{
			cout<<*iter;
		}
		else
			cout<<*iter<<", ";
	}
	cout<<"}"<<endl;
	set<int>temp4; //temp4
	set_difference(temp1.begin(),temp1.end(),temp2.begin(),temp2.end(),insert_iterator<set<int> >(temp4,temp4.begin()));
	cout<<"A-B={";
	for(iter=temp4.begin();iter!=temp4.end();iter++)
	{
		if(iter==--temp4.end())
		{
			cout<<*iter;

		}
		else
			cout<<*iter<<", ";
	}
	cout<<"}"<<endl;
	set<int>temp5;//SA
	set_difference(temp.begin(),temp.end(),temp1.begin(),temp1.end(),insert_iterator<set<int> >(temp5,temp5.begin()));
	cout<<"SA={";
	for(iter=temp5.begin();iter!=temp5.end();iter++)
	{
		if(iter==--temp5.end())
		{
			cout<<*iter;

		}
		else
			cout<<*iter<<", ";
	}
	cout<<"}"<<endl;
	set<int>temp6;//SB
	set_difference(temp.begin(),temp.end(),temp2.begin(),temp2.end(),insert_iterator<set<int> >(temp6,temp6.begin()));
	cout<<"SB={";
	for(iter=temp6.begin();iter!=temp6.end();iter++)
	{
		if(iter==--temp6.end())
		{
			cout<<*iter;
		}
		else
			cout<<*iter<<", ";
	}
	cout<<"}"<<endl;
	return 0;
}

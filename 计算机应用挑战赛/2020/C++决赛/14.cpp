void insert_Linklist(Linklist &L,int n)
{
	if(n>L->length+1)
		cout<<"插入位置不合理"<<endl;
	else 
		if(n>=max-1)
		cout<<"超过空间不能插入"<<endl;
		else
		{
		   			Linklist p,x;
			x= new dlnode;
			   cout<<"----请输入加入元素的信息-----"<<endl;
			cin>>x->number>>x->name>>x->counter;
			p=L->next;
			for(int i=0;i<n;i++){
				  			       p=p->next;//找到需要插入的节点
	   }
			      x->next=p->next;//指针指向问题
	  			p->next->prior=x;
			x->prior=p;
			p->next=x;//结束后指针指向问题
 		
		}
		cout<<"----插入新元素成功-----"<<endl;

}
  
#include<iostream> 
using namespace std; 
typedef struct 
{ 
	int n; 
	int e; 
	char data[500]; 
	int edge[500][500]; 
}	Graph; 

typedef struct 
{ 
	int index; 
	int cost; 
}mincost; 

typedef struct 
{ 
	int x; 
	int y; 
	int weight;    
}EDGE; 


typedef struct 
{ 
	int index; 
	int flag; 
}F; 

void create(Graph &G,int n ,int e) 
{ 
	int i,j,k,w; 
	char a,b; 
	for(i=0;i<n;i++) 
		cin>>G.data[i]; 
	for(i=0;i< n;i++) 
		for(j=0;j< n;j++) 
		{ 
			if(i==j) 
				G.edge[i][j]=0; 
			else 
				G.edge[i][j]=100; 
		} 

		for(k=0;k< e;k++) 
		{ 
			cin>>a; 
			cin>>b; 
			cin>>w; 
			for(i=0;i< n;i++) 
			if(G.data[i]==a) break;
			//定位 
			for(j=0;j< n;j++) 
			if(G.data[j]==b) break; 
			//定位 
			G.edge[i][j]=w; 
			G.edge[j][i]=w; 
		} 
	G.n=n; 
	G.e=e;
	//点数和边数 
} 

void Prim(Graph &G,int k)
{
	int i,j,mindata,loc;
	mincost lowcost[500];
	for(i=0;i<G.n;i++)
	{
		if(i!=k)
		{
			lowcost[i].index=k;
			lowcost[i].cost=G.edge[k][i];
		}
		lowcost[k].cost=0;
		lowcost[k].index=k;
	}
	for(i=0;i<G.n-1;i++)
	{
		mindata=100;
		for(j=0;j<G.n;j++)
			if(lowcost[j].cost<mindata&&lowcost[j].cost!=0)
			{
				mindata=lowcost[j].cost;
				loc=j;
			}
			cout<<"("<<G.data[lowcost[loc].index]<<","<<G.data[loc]<<")";
			
			for(j=0;j<G.n;j++)
			{
				if(G.edge[loc][j]<lowcost[j].cost)
				{
					lowcost[j].cost=G.edge[loc][j];
					lowcost[j].index=loc;
				}
			}
	} 
	
}

int main() 
{ 
	Graph my; 
	int n,e; 
	cin>>n>>e; 
	create(my,n,e); 
	Prim(my,0);    
	return 0; 
} 

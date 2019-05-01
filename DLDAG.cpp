#include<iostream>
#include<map>
#include<algorithm>
#include<utility>
#include<vector>
#include<stdio.h>
using namespace std;

typedef struct node  
{
 int data;           
 struct node *next;
}node;

typedef struct Graph  
{
 int nv;          
 int *par,*vis, *arr;
 node **ll;     
}Graph;

Graph *graph;

node* createNode(int ver) 
{
 node *newNode=(node*)malloc(sizeof(node)); 
 newNode->next=NULL; 
 newNode->data=ver;
 return newNode;    
}

Graph* createGraph(int h) 
{
 Graph* temp = (Graph*)malloc(sizeof(Graph)); 
 temp->ll=(node**)malloc(h*sizeof(node*)); 
 temp->vis= (int*)malloc(h*sizeof(int));  
 temp->par= (int*)malloc(h*sizeof(int));  
 temp->arr = (int *)malloc(h*sizeof(int));
 
 for(int i=0;i<h;i++) 
 {
  temp->ll[i]=createNode(i); 
  temp->vis[i]=0; 
  temp->par[i]=0; 
  temp->arr[i] = -1;
 }
 return temp; 
}

void addEdge(Graph* graph,int u,int v) 
{
 node* t =createNode(v); 
 node* temp = graph->ll[u]; 
 while(temp->next!=NULL && temp->next->data<v)
 {
  temp=temp->next;
 }
 if(temp->next!=NULL)
 {t->next=temp->next;}

 temp->next=t; 
}

int explore(Graph* graph,int u) 
{
 graph->vis[u]=1; 
 node *temp=graph->ll[u]; 
 while(temp->next!=NULL) 
 {
 	temp=temp->next;
  if(graph->vis[temp->data]==0) 
  {
   graph->arr[temp->data] = u; 
   graph->par[u]=max(1+explore(graph,temp->data),graph->par[u]); 
  }
  else 
  {
   graph->par[u]=max(1+graph->par[temp->data],graph->par[u]);
  }
 } 
 return graph->par[u];
}

int comp(pair<int, int > a, pair<int, int> b)
{
 if(a.second < b.second)return 1;
 else return 0;
}

int check(int a,int b)
{
 node* t=graph->ll[b];
 while(t->next!=NULL)
 {
  t=t->next;
  if(t->data==a)return 0;
 }
 return 1;
}

int main()
{
int n,m,a,b,count=0;
cin>>n>>m;
vector<pair<int,int>>pa;
int src[n];
vector<pair<int, int> >array(n);
//array.resize(n);
for(int i=0;i<n;i++){src[i]=0;}
graph=createGraph(n);
for(int i=0;i<m;i++)
{
 cin>>a>>b;
 src[b-1]++;
 addEdge(graph,a-1,b-1);
}
for(int i=0;i<n;i++)
{
 if(src[i]==0)
 {
  graph->par[i]=explore(graph,i);
 }
}

for(int i = 0;i < n;i++)
{
	array[i].first = i;
	array[i].second = graph->par[i];
	//cout<<i+1<<" "<<graph->par[i]<<"\n";
}

sort(array.begin(), array.end(), comp);

//for(int i=0;i<n;i++){ cout<<array[i].first+1<<" "<<array[i].second<<"\n";}

for(int i=0;i<n;i++)
{
 if(i+1<n && graph->par[array[i].first]==graph->par[array[i+1].first])
 {
  pa.push_back(make_pair(array[i].first,array[i+1].first));
  i++;
 }
 else if(i+1<n && check(array[i].first,array[i+1].first)==1)
 {
  pa.push_back(make_pair(array[i].first,array[i+1].first));
  i++;
 }
 else
 {
  pa.push_back(make_pair(array[i].first,-1));
 }
}
count = pa.size();
cout<<count<<"\n";
for(int j=0;j<count;j++)
{
 if(pa[j].second!=-1) { cout<<"2 "<<pa[j].first+1<<" "<<pa[j].second+1<<"\n";}
 else {cout<<"1 "<<pa[j].first+1<<"\n";}
}
return 0;
}

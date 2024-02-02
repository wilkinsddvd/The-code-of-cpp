#include  <iostream>
#include  <string.h>
using  namespace  std;

const  int  MAXSIZE=100;
int  visited[MAXSIZE];

template  <class  WeightType>
struct  EdgeNode{  //定义边表结点
        int  adjvex;      //邻接点域
        WeightType  weight;
        EdgeNode<WeightType>*  next;
};
template  <class  DataType,class  WeightType>
struct  VertexNode{
        DataType  vertex;
        EdgeNode<WeightType>*  firstEdge;
};

template  <class  DataType,class  WeightType>
class  ALGraph{
public:
        ALGraph(DataType  a[],int  n,int  e);
        ~ALGraph();
        void  BFT(int  v);
        int  findVertex(DataType  ver);    //查找某个顶点在顶点数组中的编号
        int  getVertexNum(){return  vertexNum;};
        void  show();
private:
        int  vertexNum;
        int  edgeNum;
        VertexNode<DataType,WeightType>  adjlist[MAXSIZE];//存放顶点表的数组
};
template  <class  DataType,class  WeightType>
ALGraph<DataType,WeightType>::~ALGraph()
{
        EdgeNode<WeightType>*  p  =  NULL,*  q  =  NULL;
        for(int  i=0;i<vertexNum;++i){
                q  =  p  =  adjlist[i].firstEdge;
                while(p  !=  NULL){
                        p  =  p->next;
                        delete  q;
                        q  =  p;
                }
        }
        q  =  NULL;
}
template  <class  DataType,class  WeightType>
ALGraph<DataType,WeightType>::ALGraph(DataType  a[],int  n,int  e)
{
        vertexNum  =  n;
        edgeNum  =  e;
        for(int  i=0;i<n;++i){        //初始化顶点表
                adjlist[i].vertex  =  a[i];
                adjlist[i].firstEdge  =  NULL;
        }
        for(int  k=0;k<e;++k){
                

        }
}

template  <class  DataType,class  WeightType>
int  ALGraph<DataType,WeightType>::findVertex(DataType  ver)
{
        for(int  i=0;i<vertexNum;++i)
                if(adjlist[i].vertex  ==  ver)  return  i;
        return  -1;
}
template  <class  DataType,class  WeightType>
void  ALGraph<DataType,WeightType>::BFT(int  v)
{
        

}
template  <class  DataType,class  WeightType>
void  ALGraph<DataType,WeightType>::show()
{
        for(int  i=0;i<vertexNum;++i){
                EdgeNode<WeightType>*  p  =  adjlist[i].firstEdge;
                cout<<adjlist[i].vertex<<":  ";
                while(p  !=  NULL){
                        cout<<adjlist[p->adjvex].vertex<<"  "<<p->weight<<";  ";
                        p  =  p->next;
                }
                cout<<endl;
        }
}
int  main()
{
        int  n,e;
        cin>>n>>e;
        char  a[n];
        for(int  i=0;i<n;i++)
                cin>>a[i];
        ALGraph<char,int>  ALG(a,n,e);
        memset(visited,0,n);
        char  startVer;
        cin>>startVer;
        int  start  =  ALG.findVertex(startVer);
        ALG.BFT(start);
        for(int  i=0;i<ALG.getVertexNum();++i){
                if(visited[i]  ==  0)
                        ALG.BFT(i);
        }
        ALG.~ALGraph();
        return  0;
}

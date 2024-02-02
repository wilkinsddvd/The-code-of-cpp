#include<bits/stdc++.h>
using namespace std;

#define ROWS 10

#define COlS 10

//直线代价 
#define ZXDJ 10
//斜线代价 
#define XXDJ 14

//方向枚举
enum direct{p_up,p_down,p_left,p_right,p_lup,p_ldown,p_rup,p_rdown}; 

struct MyPoint{
	int row,col;
	int f,g,h;
};

//树的的节点类型 
struct treeNode{
	MyPoint pos;				//当前节点数据 
	vector<treeNode*> childs; //存放孩子节点指针的 容器(数组) 
	treeNode* pParent; 		//指向父节点 
};

//创建树节点的函数
treeNode* createTreeNode(Mypoint.pos);

//判断一个点能不能走
bool canWalk(int map[ROWS][COLS],bool pathMap[ROWS][COLS]),Mypoint pos); 

//计算H值
int getH(MyPoint pos,MyPoint endPos);


int main(){
	int map[ROWS][COLS]={
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},	
	};
	
	//起点
	int begRow=1;
	int begCol=1;
	MyPoint begPos = {1,1};//begPos.row begPos.col
	//重点 
	MyPoint endPos = {6,7};
	
	bool pathMap[ROWS][COLS]={0};//0 false 没有走过 1 走过
	
	//起点标记为走过 
	pathMap[begPos.row[begPos.col] = true;
	
	//树结构
	treeNode* pRoot = NULL;
	
	//起点成为树的根节点 
	pRoot = createTreeNode(begpos);
	
	//数组
	vector<treeNode*> buff; 
	vector<treeNode*>::iterator it;
	vector<treeNode*>::iterator itMin;	
	//当前点
	treeNode* pCurrent = pRoot;
	
	treeNode* pChild = NULL; 
	
	bool isFindEnd = false;
	
	while(1){
		for(itn i=0;i<8;i++){
			pChild = createTreeNode(pCurrent->pos);
			switch(i){
				case p_up:
					 pChild->pos.row--;
					 pChild->pos.g += ZXDJ;
					 break;
				case p_down:
					 pChild->pos.row++;
					 pChild->pos.g += ZXDJ;
					 break;
				case p_left:
					 pChild->pos.col--;
					 pChild->pos.g += ZXDJ;
					 break;				
				case p_right:
					 pChild->pos.col++;
					 pChild->pos.g += ZXDJ;
					 break;
				case p_lup:
					 pChild->pos.row--;
					 pChild->pos.col--;
					 pChild->pos.g += ZXDJ;
					 break;
				case p_ldown:
					 pChild->pos.row++;
					 pChild->pos.cow--;
					 pChild->pos.g += ZXDJ;
					 break;
				case p_rup:
					 pChild->pos.row--;
					 pChild->pos.col++;
					 pChild->pos.g += ZXDJ;
					 break;
				case p_rdown:
					 pChild->pos.row++;
					 pChild->pos.col++;
					 pChild->pos.g += ZXDJ;
					 break;				
			}//end of switch(i) 
			
			if(canwalk(map.pathMap,pChild->pos)){
				 pChild->pos.h = getH(pChild->pos,endPos);
				 pChild->pos.f = pChild->pos.g + pChild->pos.h;
				 pCurrent->childs.push_back(pChild);
				 pCurrent->pParent = pCurrent;
				 
				 buff.push_back(pChild);
			}
			else{//不能走
				//释放 
				delete pChild;
			}
		}//end of for(int i=0;i<8;i++)
		itMin = buff.begin();//假设第一个最小 
		for(it=buff.begin();it!=buff.end();it++){
			itMin = ((*itMin)->pos.f <(*it)->pos.f)?itMin:it; 
		}
		pCurrent = *itMin;
		buff,erase(itMin);
		if(pCurrent->pos.row == endPos.row && pCurrent->pos.col==endPos.col){
			isFindEnd = true;
			break;
		}
		
		//地图找遍了还没找到重点
		if(buff.size()==0) break; 
		
	}//end of while(1)
	if(isFindEnd){
		printf("找到终点了!\n");
		printf("path:");
		while(pCurrent){
			print("(%d,%d)",pCurrent->pos.row,pCurrent->pos.col);
			pCurrent = pCurrent->pParent; 
		}
		printf("\n");
	}
	return 0;	
	
}

int getH(MyPoint pos,MyPoint endPos){
	int x = (endPos.col > pos.col) ? (endPos.col - pos.col):
		(pos.col - endPos.col);
	int y = (endPos.row > pos.col) ? (endPos.col - pos.col):
		(pos.row - endPos.row);
		
	return (x+y)*ZXDJ; 
}

bool canWalk(int map[ROWS][COLS],bool pathMap[ROWS][COLS]),Mypoint pos){
	//1.是否在地图范围内 
	if(pos.row<0||pos.row>=ROWS||
		pos.col<0||pos.col>=COLS) return false;
	//2.是否走过 
	if(pathMap[pos.row][pos.col])	return false;
	//3.是否障碍 
	if(map[pos.row][pos.col]) return false;
	
	return true; 
}

//创建树节点的函数 
treeNode* createTreeNode(Mypoint pos){
	treeNode* pNew = new TreeNode;
	memset(pNew,0,sizeof(treeNode));
	
	pNew->pos= pos ;
	return pNew;
}


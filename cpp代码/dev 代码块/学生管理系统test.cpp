#include<stdio.h> 
#include<string.h>

typedef struct{
	char num[20];
	char name[20];
	char stuclass[20];
	float math;
	float english;
	float cyuyan;
}student;

student stu[1000];
int stu_number = 0;

void inputdata(student dat[]){
	printf("输入学生学号:");
	scanf("%s",&dat[stu_number].num);
	printf("输入学生姓名:");
	scanf("%s",&dat[stu_number].name);
	printf("输入学生班级:");
	scanf("%s",&dat[stu_number].stuclass);
	printf("输入学生数学成绩:");
	scanf("%f",&dat[stu_number].math);
	printf("输入学生英语成绩:");
	scanf("%f",&dat[stu_number].english);
	printf("输入学生C语言成绩:");
	scanf("%f",&dat[stu_number].cyuyan);	  
	stu_number++;
	printf("录入成功!\n\n"); 
}

void show_student(student dat[]){
	for(int i=0;i<stu_number;i++){
		printf("\n");
		printf("学号: %s\n",dat[i].num);
		printf("姓名: %s\n",dat[i].name);
		printf("班级: %s\n",dat[i].stuclass);
		printf("数学: %.2f\n",dat[i].math);
		printf("英语: %.2f\n",dat[i].english);
		printf("C语言: %.2f\n\n",dat[i].cyuyan);
	}
}

void research(student dat[]){
	char stud[20] = {0};
	printf("输入学生姓名:");
	scanf("%s",&stud);
	for(int i=0;i<stu_number;i++){
		if(strcmp(dat[i].name,stud)== 0){
			printf("\n");
			printf("学号: %s\n",dat[i].num);
			printf("姓名: %s\n",dat[i].name);
			printf("班级: %s\n",dat[i].stuclass);
			printf("数学: %.2f\n",dat[i].math);
			printf("英语: %.2f\n",dat[i].english);
			printf("C语言: %.2f\n\n",dat[i].cyuyan);
			return ;	
		}

	}
	printf("未找到学生\n");
}

void delete_stu(student dat[]){
	char stud[20] = {0};
	printf("输入要删除的学生学号");
	scanf("%s",&stud);
	for(int i=0;i<stu_number;i++){
		if(strcmp(dat[i].num,stud)== 0){
			for(int t=i;i<stu_number-1;t++){
				dat[t] = dat[t+1];
			}
			stu_number--;
			return ;	
		}

	}
	printf("删除成功\n");
}

	
void xiugai(student dat[]){
	char stud[20] = {0};
	printf("输入要修改的学生学号:");
	scanf("%s",&stud);
	for(int i=0;i<stu_number;i++){
		if(strcmp(dat[i].num,stud)== 0){
		printf("输入学生学号:");
		scanf("%s",&dat[i].num);
		printf("输入学生姓名:");
		scanf("%s",&dat[i].name);
		printf("输入学生班级:");
		scanf("%s",&dat[i].stuclass);
		printf("输入学生数学成绩:");
		scanf("%f",&dat[i].math);
		printf("输入学生英语成绩:");
		scanf("%f",&dat[i].english);
		printf("输入学生C语言成绩:");
		scanf("%f",&dat[i].cyuyan);	  
		stu_number++;
		printf("录入成功!\n\n"); 
			return ;	
		}

	}
	printf("修改成功\n");
}


int main(){
	int chose = 0;
	printf("          学生管理系统\n");
	while(1){
		printf("1.录入学生信息\n");
		printf("2.显示所有学生信息\n");	
		printf("3.查找学生信息\n");
		printf("4.删除学生信息\n");
		printf("5.修改学生信息\n");
		printf("6.退出系统\n");
		printf("请输入指令:\n");
		scanf("%d",&chose);
		switch(chose){
			case 1: inputdata(stu);	break;
			case 2: show_student(stu);break;
			case 3: research(stu);break;
			case 4: delete_stu(stu);break;
			case 5: xiugai(stu);break;
			case 6: printf("结束指令"); return 0; break;
		}		
	} 

}

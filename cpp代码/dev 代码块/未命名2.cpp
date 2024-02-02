#include  <iostream>
using  namespace  std;
const  int  MaxSize = 100;
/*三元组结构体*/
template  <class  DataType>
struct  element {
    int  row, col;  //非零元素的行、列
    DataType  item;  //非零元素值
};
 
template  <class  DataType>
class  SparseMatrix {
public:
    SparseMatrix();
    void  printMatrix();
    void  printSparseMatrix();
    void  trans2(SparseMatrix<DataType>& B);
private:
    element<DataType>  data[MaxSize];  //存储三元组表
    int  mu, nu, tu;  //分别表示稀疏矩阵的行数、列数、非零元素的个数
};
/*三元组顺序表的构造*/
template  <class  DataType>
SparseMatrix<DataType>::SparseMatrix()
{
    int  row, col, num;
    cin >> row >> col >> num;  //稀疏矩阵的行数、列数
    mu = row;
    nu = col;
    tu = num;  //存储时从0开始
    for (int k = 0; k < num; ++k) {
        int  i, j, temp;
        cin >> i >> j >> temp;
        data[k].row = i;
        data[k].col = j;
        data[k].item = temp;
    }
}
 
/*稀疏矩阵的打印*/
template  <class  DataType>
void  SparseMatrix<DataType>::printMatrix()
{
    int a[100][100];
    int i, j;
    for (i = 0; i < mu; i++) {
        for (j = 0; j < nu; j++) {
            a[i][j] = 0;
        }
    }
    for (int k = 0; k <tu; k++) {
        a[data[k].row-1][data[k].col-1] = data[k].item;
    }
    for (i = 0; i < mu; i++) {
        for (j = 0; j < nu; j++) {
            cout<<a[i][j]<<"     ";
        }
        cout << endl;
    }
 
}
 
 
int  main()
{
    SparseMatrix<int>  A;
    A.printMatrix();
    return  0;
}

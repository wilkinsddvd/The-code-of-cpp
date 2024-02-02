#include  <iostream>
using  namespace  std;
void  saddlePoint(int** A, int  n, int  m)
{
    int i, j;
    int max[10] = { 0 }, min[10] = { 0 };//存放每行最小值，每列最大值
    int MIN, MAX;
    for (i = 1; i <=n; i++) {//每行遍历
        MIN = A[i][1];//每行第一个
        for (j = 1; j <=m; j++) {//每列遍历
            if (MIN > A[i][j]) {
                MIN = A[i][j];
            }
        }
        min[i] = MIN;//求每行最小值，并存入数组
    }
    for (j = 1; j <=m; j++) {//每行遍历
        MAX = A[1][j];//每列第一个
        for (i = 1; i <=n; i++) {//遍历每一行
            if (MAX < A[i][j]) {
                MAX = A[i][j];
            }
        }
        max[j] = MAX;//求每列最大值，并存入数组
    }
    int flag = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (A[i][j] == min[i] && A[i][j] == max[j]) {//遍历寻找同时满足的值
                flag = 1;
                cout << A[i][j] << " " << i << " " << j << endl;
            }
        }
        
    }
    if (flag == 0) cout << "No answer";
}
int  main()
{
    int  n, m;
    cin >> n >> m;
    int** arr = new  int* [n + 1];
    for (int i = 0; i <= n + 1; ++i)
        arr[i] = new  int[m + 1];
 
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> arr[i][j];
 
    saddlePoint(arr, n, m);
    return  0;
}

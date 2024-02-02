#include<iostream>
using namespace std;

void saddlePoint(int**A,int n,int m)
{
    int saddleCount = 0;

    for (int i = 1; i <= n; i++)
    {
        
        int minVal = A[i][1];
        int minCol = 1;

        for (int j = 2; j <= m; j++)
        {
            if (A[i][j] < minVal)
            {
                minVal = A[i][j];
                minCol = j;
            }
        }

        bool isSaddlePoint = true;
        for (int k = 1; k <= n; k++)
        {
            if (A[k][minCol] > minVal)
            {
                isSaddlePoint = false;
                break;
            }
        }
        if (isSaddlePoint)
        {
            saddleCount++;
            cout << minVal << " " << i << " " << minCol << endl;
        }
    }
    
    if (saddleCount == 0)
    {
        cout << "No answer" << endl;
    }
}

int main()
{
	int n,m;
	cin>>n>>m;
	int** arr = new int*[n+1];
	for(int i = 0;i <= n + 1;++i)
		arr[i] = new int[m+1];
	
	for(int i = 1; i <= n ; ++i)
		for(int j = 1; j <= m; ++j )
			cin>>arr[i][j];		
	saddlePoint(arr,n,m);
	return 0;
}

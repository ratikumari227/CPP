#include<iostream>
#include<string>
using namespace std;
bool isSafeMove(int** arr,int x,int y,int n)
{
    if(x<n && y<n && arr[x][y] ==1)
        return true;
    return false;
}
bool  ratInMazePathExit(int** arr,int x,int y,int n,int** solArray)
{
    // base case
    if(x==n-1 && y==n-1)
    {   
        solArray[x][y]=1;
        return true;
    }
    // if(isSafeMove(arr,x,y,n))
    if(arr[x][y] ==1)
    {
        solArray[x][y]=1;
        if(ratInMazePathExit(arr, x+1, y, n, solArray))
            return true;
        if(ratInMazePathExit(arr, x, y+1, n, solArray))
            return true;
        solArray[x][y]=0;
        return false;
    }
    return false;
}

int main()
{
    // size of the square maze,start_i,start_j
    int n;
    cin>>n;
    int** arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];    
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int **solArr = new int*[n];
    for(int i=0;i<n;i++)
    {
        solArr[i]=new int[n];    
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            solArr[i][j]=0;
        }
    }

    if(ratInMazePathExit(arr,0,0,n,solArr))
    {
    cout<<"Path is"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
/*

5
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1

*/
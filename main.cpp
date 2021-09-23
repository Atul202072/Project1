#include <iostream>
#define ROW 3
#define COLUMN 3
using namespace std;

void linearSearch(int arr[ROW][COLUMN], int row, int column)
{
    int value = 0, i, j, num ;

    cout<<"Enter the element to search: ";
    cin>>num;

    for(i =0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            if(arr[i][j] == num)
            {
                value = 1;
                break;
            }
        }
        if(value == 1)
            break;
    }

    if(value == 1)
    {
        cout<<"Element "<<num<<" is placed at: ("<<i + 1<<","<<j + 1<<")"<<endl;
        cout<<"Indexing of the element: "<<num<<" is ("<<i <<","<<j <<")"<<endl;
    }
    else
    {
        cout<<"No element found, wrong entry!"<<endl;
    }

}


int main()
{
    int arr[ROW][COLUMN], num, i, j;

    for(i =0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {
            cout<<"Enter element "<<"["<< i <<"]"<<"["<< j <<"]"<<":";
            cin>>arr[i][j];
        }
    }

    for(i =0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    linearSearch(arr, ROW, COLUMN);
    

    return 0;
}
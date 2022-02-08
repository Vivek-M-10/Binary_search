#include<iostream>
using namespace std;

int binarysearch(int a[], int size, int key )
{
    int low = 0;
    int high = size-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(key==a[mid])
        {
            return mid;
        }

        else if (key>=a[mid])
        {
             low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,3,5,7,9,11,13,15,17,19};
    int length = sizeof(arr)/sizeof(int);
    int key;
    cout<<" enter key = ";
    cin>> key;
    int index = binarysearch(arr,length,key);
    if(index!=-1)
    {
        cout<<"key is present at index "<<index<<endl;
    } 
    else{
        cout<<key<< " is not found!";
    }
}
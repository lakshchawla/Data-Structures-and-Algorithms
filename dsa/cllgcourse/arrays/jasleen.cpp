#include <iostream>

using namespace std;

void printArr(int arr[])
{
    // int size = int(sizeof(arr));

    // cout<<"\nElements in the array are: "; 
    // for(int i=0; i<size/sizeof(arr[0]); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // cout<<size;
}

int main()
{
    int arr[100];    // Array initialized for larger size
    
    // cout<<"Enter the number of elements: "; 
    // int n;
    // cin>>n;
    
    // cout<<"\nEnter the elements: \n"; 
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }
    arr[0] = 15;
    arr[1] = 15;
    arr[2] = 15;

    int size = int(sizeof(arr));
    cout<<size;


    // cout<<sizeof(arr);
    
    // printArr(arr);
    
    
    // int ch;
    // cout<<"\n\nNow which operation you want to execute on this linear array:" ;
    // cout<<"\n\t1. Insert a new element at end as well as at a given position.";
    // cout<<"\n\t2. Delete an element from a given whose value is given or whose position is given.";
    // cout<<"\n\t3. To find the location of a given element.";
    // cout<<"\n\t4. To display the elements of the linear array.";
    // cout<<"\n\nEnter your choice:" ;
    // cin>>ch;
    
    
    // switch(ch)
    // {
    //     case 1:
    //         cout<<"\nInsertion will be done:";
    //         // Inserting at end
    //         cout<<"\nEnter element to be inserted at the end of the array: ";
    //         int num;
    //         cin>>num;
    //         size = sizeof(arr)/sizeof(arr[0]);
    //         arr[size]= num;
            
    //         // Inserting at position
    //         cout<<"\nEnter position where you want to insert the element: ";
    //         int pos;
    //         cin>>pos;
    //         cout<<"\nEnter element to be inserted at the given position of the array: ";
    //         int num2;
    //         cin>>num2;
    //         size = sizeof(arr)/sizeof(arr[0]);
        
    //         int j;
    //         for(j=size; j>pos-1; j--)
    //         {
    //             arr[j]= arr[j-1]; 
    //         }
    //         arr[j]=num2;
            
    //         printArr(arr);
    //     break;
        
    //     case 2:
    //     break;
        
    //     case 3:
    //     break;
        
    //     case 4:
    //     break;
        
    //     default:
    //         cout<<"\nWrong choice";
    // }

    return 0;
}
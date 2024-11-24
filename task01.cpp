#include<iostream>
using namespace std;
bool check(int numbers[], int);
int main()
{
    int count;
    cout<<"Enter the number of entries you want to add in the array: ";
    cin>>count;
    cin.ignore();
    int numbers[count];
    for(int i=0; i<count; i++)
    {
        cout<<"Enter the number: ";
        cin>>numbers[i];
    }
    bool result=check(numbers, count);
    cout<<result;
}
bool check(int numbers[], int count)
{
    int temp;
    bool result=true;
    for(int j=0; j<count; j++)
    {
        temp=numbers[j];
        for(int k=j+1; k<count; k++)
        {
            if(numbers[j]==numbers[k])
            {
                result=false;
                return result;
            }
        }
    }
    return result;    
}


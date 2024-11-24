#include<iostream>
using namespace std;
int main()
{
    int count;
    cout<<"Enter the number of directios you want to give: ";
    cin>>count;
    string directions[count];
    int right=0, left=0;
    for(int i=0; i<count; i++)
    {
        cout<<"Enter the direction (left or right): ";
        cin>>directions[i];
        if(directions[i]=="right" || directions[i]=="Right")
        {
            right++;
        }
        else if(directions[i]=="left" || directions[i]=="Left")
        {
            left++;
        }
    }
    int result=(right*90)-(left*90);
    result=result/360;
    cout<<"Total Number of Spins: "<<result;
}
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number of integers"<<endl;
	cin>>num;
	int arr[num];
	cout<<"Enter "<<num<<" Integers"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"Elements "<<i+1<<endl;
		cin>>arr[i];
	}
	cout<<"Array in reverse order"<<endl;
	for(int i=num-1; i>=0; i--)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
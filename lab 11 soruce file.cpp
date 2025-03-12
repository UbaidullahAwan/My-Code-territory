//--------------------------------------------------------------------Program # 01-------------------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
int main(){
	int array[]={5,10,15,20,25};
	int size=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<=size;i++)
	{
		cout<<i<<endl;
	}
	return 0;
}
*/
//--------------------------------------------------------------------Program # 02-------------------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of an array"<<endl;
	cin>>n;
	if(n<=0){
		cout<<"Please enter a positive integer"<<endl;
		return 0;
	}
	int arr[n];
	cout<<"Enter "<< n<< "Integers"<<endl;
	for(int i=0;i<n;++i){
		cout<<"Element "<<i+1<<endl;
		cin>>arr[i];
	}
	cout<<"Array elements in reverse order: "<<endl;
	for(int i=n-1; i>=0; --i){
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	return 0;
}
*/
//--------------------------------------------------------------------Program 03-------------------------------------------------------------------//
/*#include<iostream>
using namespace std;
int main(){
	int arr[]={20,30,35,40,50,55,60};
	int size=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	for(int i=0; i<size; ++i){
		sum+=arr[i];
		
	}
	double average=static_cast<double>(sum)/size;
	cout<<"Array elements"<<endl;
	for(int i=0; i<size; ++i){
		cout<<arr[i]<<endl;
	}
	cout<<"Sum="<<sum<<endl;
	cout<<"Average="<<average<<endl;
	return 0;
}
*/
//------------------------------------------------------------------Program 04--------------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
int main(){
	int arr[]={20,30,40,50,60,70,80,90,100};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<size<<endl;
	return 0;
}
*/
//------------------------------------------------------------------Program 05-------------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number of integers you want to add"<<endl;
	cin>>num;
	int arr[num];
	cout<<"Enter "<<num<<endl;
	for(int i=0;i<num;i++){
		cout<<"Element"<<i+1<<endl;
		cin>>arr[i];
	}
	int largest=arr[0];
	for(int i=1; i<num;++i){
		if(arr[i]>largest){
			largest = arr[i];
		}
	}
	cout<<"The largest number in the array is: "<< largest<<endl;
	return 0;
}
/*
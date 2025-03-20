//-----------------------------------------------------------Program 01-------------------------------------------------------------------//
/*#include<iostream>
using namespace std;
int main()
{
	int star=50;
	int *ptr;
	ptr=&star;
	cout<<*ptr<<endl;
}
*/
//-----------------------------------------------------------Program 02-----------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
int main(){
	int star=50;
	int *ptr;
	ptr=&star;
	*ptr=75;
	cout<<*ptr<<endl;
}
*/
//----------------------------------------------------------Program 03-------------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
int main()
{
	int ages[5]={20,40,50,60,70};
	int *ptr;
	ptr=ages;
	for(int i=0;i<5;i++){
		cout<<ptr<<endl;
		cout<<*ptr<<endl;
		++ptr;
	}
	return 0;
}
*/
//-------------------------------------------------------Program 04--------------------------------------------------------------------//

#include<iostream>
using namespace std;

void swap(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
	
}
int main(){
	int a,b;
	cout<<"Enter two integers one by one:"<<endl;
	cin>>a>>b;
	cout<<"Before Swapping:"<<a << b<<endl;
	swap(&a,&b);
	cout<<"After Swapping:"<<a << b<<endl;
	return 0;
}

//---------------------------------------------------------Program 05--------------------------------------------------------------//
/*
#include<iostream>
using namespacce std;
int main(){
	int *ptr;
	ptr=nullptr;
	if(ptr=null)
	{
		cout<<"This pointer is null as it doesn't points to any valid memory address"<<endl;
	}
	return 0;
}
*/
//--------------------------------------------------------Program 6---------------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
int main(){
	void *ptr;
	int star=550;
	ptr=&star;
	cout<<*(int*)ptr<<endl;
	return 0;
}
*/
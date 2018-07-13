#include <iostream>

using namespace std;
const int arr_size=15;

void average(int arr[])
{	
	int sum=0;
	for (int o=0;o<arr_size;o++)
		sum+=arr[o];

	cout<<"The average is :"<<sum/arr_size<<endl<<endl;
}
void max(int arr[])
{	
	int max=arr[0];
	for (int o=1;o<arr_size;o++)
		if (max<arr[o])
			max=arr[o];

	cout<<"The maximum mark is :"<<max<<endl<<endl;
}
void print(int arr[])
{	
	for (int o=0;o<arr_size;o++)
	{if(o%3==0)
			cout<<endl;
		cout<<arr[o]<<"	";
	
	}
	cout<<endl;
}
void failed_number(int arr[])
{	
	int number_of_failed_students=0;
	for (int o=0;o<arr_size;o++)
		if (arr[o]<50)
			number_of_failed_students++;

	cout<<"The number of failed students is :"<<number_of_failed_students<<endl<<endl;
}
void print_inverted_order(int arr[])
{	
	int temp;
	for (int p=0;p<arr_size;p++)
		for (int q=0;q<arr_size-(p+1);q++)
		{
		temp = arr[q];
		arr[q] = arr[q+1];
		arr[q+1] = temp;
		}
	cout<<"Inverterd print :"<<endl<<endl;

	for (int o=0;o<arr_size;o++)
		cout<<arr[o]<<" ";
	cout<<endl<<endl;
}

void main()
{
	int selector;
	int arr[arr_size];
	cout<<"Please insert the "<<arr_size<<" marks (must be between 35 and 100):"<<endl<<endl;
	for (int p=0;p<arr_size;p++)
	{
		bool mark=false;
		do
		{
			cin>>arr[p];
			if (arr[p]<35 || arr[p]>100)
				{
					cout<<"You have inserted a wrong mark, re-enter the mark."<<endl;
					mark=true;
				}
			else mark=false;
		}while(mark);
	}

	cout<<endl;

	do
	{
		cout<<"To calculate the average of the marks enter 1"<<endl;
		cout<<"To find the maximum mark enter 2"<<endl;
		cout<<"To print the 15 marks every 3 on a line enter 3"<<endl;
		cout<<"To find the number of failed students (mark<50) enter 4"<<endl;
		cout<<"To print the 15 marks in inverted order enter 5"<<endl;
		cout<<"To end the program enter 6"<<endl<<endl;

		cin>>selector;
		cout<<endl;

		switch(selector)
		{
		case 1: average(arr);
			break;
		case 2: max(arr);
			break;
		case 3: print(arr);
			break;
		case 4: failed_number(arr);
			break;
		case 5: print_inverted_order(arr);
			break;
		case 6:
			break;
		default:
			cout<<"You must decide between 1 and 6"<<endl<<endl;
		}
	}while(selector!=6);


}
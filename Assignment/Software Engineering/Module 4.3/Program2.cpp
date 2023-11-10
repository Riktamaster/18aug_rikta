//Write a program of to sort the array using templates.

#include<iostream>
using namespace std;
template <class T>//Template function to sort array
void sort(T arr[], int n){
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			if (arr[i]>arr[j]){
			//swap elements if they are out of order
			T temp;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;}
		}
	}
}

int main(){
	int arr[100],n,i,j;
	
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for (i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sort(arr,n);//calling template function to sort elements
	cout<<"Array after sorting:"<<endl;
	for (i=0;i<n;i++){
		cout<<arr[i]<<" ";//printing the sorted array
	}
	
	return 0;
}

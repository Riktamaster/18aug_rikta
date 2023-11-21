//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;
class matrix{
	public:
		int r,c,a[100][100],i,j;
		void get_data(){
			cout<<"Enter number of rows:";
			cin>>r;
			cout<<"Enter number of columns:";
			cin>>c;
	
			//Input for a matrix
			cout<<"Enter elements for the matrix:"<<endl;
			for (i=0;i<r;i++){
	        for (j=0;j<c;j++){
				cout<<"Enter element a("<<i+1<<","<<j+1<<"):";
				cin>>a[i][j];
			}
		}
		}
		
		matrix operator +(matrix &m){
			matrix sum_matrix;
			sum_matrix.r = r;
            sum_matrix.c = c;
            //perform matrix addition
			for (i=0;i<r;i++){
				for (j=0;j<c;j++){
					sum_matrix.a[i][j]=a[i][j]+m.a[i][j];
				}
			}
			
			return sum_matrix;
		}
		
		void display_data(){
			for (i=0;i<r;i++){
				for (j=0;j<c;j++){
					cout<<a[i][j]<<"   ";
				}
				cout<<endl;
			}
		}
};

int main(){
	matrix m1,m2,m3;
	cout<<"First matrix:"<<endl;
	m1.get_data();
	m1.display_data();
	cout<<"Second matrix:"<<endl;
	m2.get_data();
	m2.display_data();
	//Add two matrices using operator overloading
	m3=m1+m2;
	cout<<"The sum of two matrices:"<<endl;
	m3.display_data();
	return 0;
}

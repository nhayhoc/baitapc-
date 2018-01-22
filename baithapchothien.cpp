#include <iostream>
using namespace std;

void printArray(int n);

int n,k,v,m;
int a[200];

int main() 
{

	//nhap mang
    cout << "Nhap n: "; cin >> n;
    for(int i=1; i<=n; i++){
    	cout << "A[" << i << "]= " ; cin >> a[i];
	}
	printArray(n);
	
	
	//chen so k vao vi tri v
	cout << "Nhap lan luot k va v: " ; cin >> k >> v;
	for(int i=n+1; i>v; i--){
    	a[i] = a[i-1];
	}
	a[v] = k;
	printArray(n+1);
	
	//xoa 1 so tai vi tri m
	cout << "Nhap m: "; cin >> m;
	for(int i=m;i<=n; i++){
		a[i] = a[i+1];
	}
	printArray(n);
	
	
    return 0;
}

void printArray(int n){
	cout << "Print array ..." << endl;
	for(int i=1; i<=n; i++){
    	cout << "A[" << i << "]= " << a[i] << endl;
	}
}

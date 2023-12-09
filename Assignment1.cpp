#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

long long iterativeFact(long long n)
{
 	long long fact=1;
 	for(int i=2; i<=n; i++)
 	fact*=i;
 	return fact;
}

long long recursiveFact(long long n)
{
	 if(n==1)
	 return 1;
	 return n*recursiveFact(n-1);
}


int main()
{
 	int n;
 	cout<<"Enter the number to find its factorial:"<<endl;
 	cin>>n;
 	
	auto start1 = high_resolution_clock::now();
	
	cout<<"The iterative function value: "<<iterativeFact(n)<<endl;
 	//cout<<"The recursive function value: "<<recursiveFact(n)<<endl;
 	
 	auto stop1 = high_resolution_clock::now();
 	auto duration = duration_cast<microseconds>(stop1 - start1);
 	
	cerr << "Time taken in microseconds : "<< (double)(duration.count() / 1000.0) << endl;
 return 0;
}

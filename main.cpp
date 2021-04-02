#include<iostream>

using namespace std;

template <class T>

int search(T s[],int start,int stop,T &e)
{
	if(start >= stop)
	{
		return -1;
	}
	if(s[start] == e)
	{
		return start + 1; 
	}
	return search(s,start+1,stop,e);

}

int main()
{
	double s[6] = {1,56,23,58,90,5};
	int start = 0;
	int stop = 6;
	double e = 23;
	cout << search(s,start,stop,e) << endl;
	return 0;

}

#include <iostream>

using namespace std;

int main()
{
	char arr[15] = {'H','G','F','E','D','C','B','A','B','C','D','E','F','G','H'};
	
	
	int a = 15;
	int n = 1;
	int j = 0;
	for(int i = 0; i < 7; i++)
	{
		while(j<a)
		{
			cout<<arr[j];
			j++;
		}
		cout<<endl;
		for(int k = 0; k < n; k++)
			cout<<' ';
		a--;
		n++;
		j = i+1;
	}
	
	a = 1;
	n = 6;
	j = 0;
	int b = 7;
	int c = 8;
	int k = 0;
	for(int i = 0; i < 8; i++)
	{
		while(j<a)
		{
			cout<<arr[j + b];

			j++;
		}
		j = 0;
		while(k<a-1)
		{
			if(b != 7)
			{
			cout<<arr[k+c];
			}
			k++;
		}
		cout<<endl;
		for(int k = 0; k < n; k++){
			cout<<' ';
		}
		n--;
		a++;
		j = 0;
		k = 0;
		b--;
	}
	return 0;
}

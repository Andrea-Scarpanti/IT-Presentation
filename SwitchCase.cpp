#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"dimmi un numero"<<endl;
	cin>>num;


	switch (num)
	{
		case 1:
			cout<<"il tuo numero e' uno"<<endl;
			break;

		case 2:
			cout<<"il tuo numero e' due"<<endl;
			break;

		case 3:
			cout<<"il tuo numero e' tre"<<endl;
			break;
		
		default:
			cout<<"il tuo numero non e' ne uno ne due ne tre"<<endl;
	}

	return 0;
}

#include <iostream>

using namespace std;

void apa()
{
	cout<<"Mabar";
}

int jml(int w, int h)
{
	int t;
	t = w * h;
	return t;
}

int main()
{
	int pil;
	int a, b, t;
	cout<<"Pilih:\n";
	cout<<"1. A\n";
	cout<<"2. B\n";
	cout<<">>"; cin>>pil;

	switch(pil)
	{
		case 1:
			apa();
			break;
		case 2:
			cout<<" "; cin>>a;
			cout<<" "; cin>>b;
			cout<<"Total: "<<jml(a, b);
	}
}


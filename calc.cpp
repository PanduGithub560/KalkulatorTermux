#include <iostream>
using namespace std;

int main()
{
	int a,b,hasil;
	char aritmatika;
                                               
	cout<<"-_-_-_-_-_KALKULATOR-_-_-_-_-_\n";
	cout<<"Masukkan Angka Pertama: ";
	cin>>a;
	cout<<"Pilih Operator\n(+,-,*,/): ";
	cin>>aritmatika;
	cout<<"Masukkan Angka Kedua: ";
	cin>>b;

	if(aritmatika == '+'){                                         			            									
		hasil = a + b;
		cout<<"Hasil: "<<a<<" + "<<b<<" = "<<hasil;
	}else if(aritmatika == '-'){
		hasil = a - b;
		cout<<"Hasil: "<<a<<" - "<<b<<" = "<<hasil;       
	}else if(aritmatika == '*'){
		hasil = a * b;
		cout<<"Hasil: "<<a<<" * "<<b<<" = "<<hasil;       
	}else if(aritmatika == '/'){
		hasil = a / b;
		cout<<"Hasil: "<<a<<" / "<<b<<" = "<<hasil;
	}else{
	cout<<"Operator Salah"<<endl;
  	}

										
	cin.get();
	return 0;
}

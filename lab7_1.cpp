#include<iostream>
#include<string>

using namespace std;

string a;
string b;
string c;
string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    cout << "Input text: ";
    cin >> a;
    cout << "Reversed text: ";
    cout<<func1(a)<<"\n";
    b=a;
    c=func1(a);
    cout << "Palindrome: ";
    if(func3(b)==func3(c))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
#include <iostream>

using namespace std;

class Pill {
public:
	string name;
	int price;
	Pill() {}
	Pill(string a, int b) {
		name = a;
		price = b;
	}
};

struct Sheet {
	Pill p[30];
	int count=0;
};

ostream &operator<<(ostream &out, const Pill &pill) {
	out << pill.name;
	out << ",";
	out << pill.price;
	out << endl;
	return out;
}

istream &operator>>(istream &inp, Pill &pill) {
	inp >> pill.name;
	inp >> pill.price;
	return inp;
}

Sheet operator*(Pill P, int i) {
	Sheet sh;
	for(int j=0;j<i;j++) {
		sh.p[j].name = P.name;
		sh.p[j].price = P.price;
	}
	sh.count = i;
	return sh;
}		

ostream &operator<<(ostream &out, const Sheet &S) {
	int res = 0;
	for(int i=0;i<S.count;i++) {
		out << S.p[i];
		res += S.p[i].price;
	}
	out << "total = " << res;
	return out;
}

int main() {
	Pill P("Penicillin", 100);
	Sheet S;
	S = P *10;
	cout << S << endl;
}

#include <iostream>
#include <string>
using namespace std;

class pelajar;
class manusia {
public:
	void showNIlaiPelajar(pelajar&);
};

class pelajar {
private:
	int nilai;
public:
	pelajar() {
		nilai = 100;
	}
	friend void manusia::showNIlaiPelajar(pelajar& x);
};

void manusia::showNIlaiPelajar(pelajar& x) {
	cout << "Nilai Pelajar: " << x.nilai;
}

int main()
{
	manusia m;
	pelajar p;
	m.showNIlaiPelajar(p);
	cout << endl;
	system("\npause");
	return 0;
}
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
int main()
{
}
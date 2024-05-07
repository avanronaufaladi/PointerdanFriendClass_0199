#include <iostream>
using namespace std;

class siswa;
class orang
{
private:
	string nama;

public:
	void setnama(string pnama);
	friend class siswa;
};



int main()
{
	orang joko;
	joko.setnama("joko susilo");
	siswa joko_siswa;
	joko_siswa.setid(1);
	joko_siswa.displayall(joko);
	return 0;
}
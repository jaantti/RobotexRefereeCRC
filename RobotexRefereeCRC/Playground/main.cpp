#include "../RobotexRefereeCRC/include/CRC.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	CRC c = CRC();
	c.init();

	//ping
	char message[] = "aAXA";
	string mes = "aAXAü";
	string cmd = mes.substr(0, 4);
	uint8_t crc = c.calculateCRC(reinterpret_cast<uint8_t*>(const_cast<char*>(cmd.c_str())), 4);
	cout << "crc1: " << static_cast<int>(crc) << endl;
	cout << cmd << endl;

	unsigned int crc2 = c.calclulateCRC(mes.substr(0, 4));
	cout << "crc2: " << crc2 << endl;
	
	cin.get();
	return 0;
}

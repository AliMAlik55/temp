#include"LQueue.h"
#include<string.h>
#include<string>
#include<fstream>
int main()
{
	//LQueue<int> link1;
	//link1.enQueue(1);
	//link1.enQueue(2);
	//link1.enQueue(3);
	//link1.enQueue(4);
	//link1.enQueue(5);
	//link1.deQueue();
	//link1.print();
	//LQueue<int> link2(link1);
	//link2.print();
	//link2.enQueue(6);
	//link2.print();
	//int a = 10;
	//int& r = a;
	//r = 189;
	//cout << r<<" "<<a;
	//r = 140;
	//cout << endl << r << " " << a;
	//delete& r;
	//cout << "Hello";
	
	fstream file("F:\\DSA\\Text.txt");
	//char ch;
	//file.seekg(10, ios::beg);
	//file.get(ch);
	//cout << ch;

	//cout << "Hello";
	if (file.is_open())
	{
		file << "HELLO kia \n hal ha";
	}
	//file.close();
	/*file.open("F:\\DSA\\Text.txt");*/
	fstream copy("copy.txt",ios::out);
	file.seekg(0);
	copy << file.rdbuf();



	return 0;
}
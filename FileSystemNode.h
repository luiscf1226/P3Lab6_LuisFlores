#ifndef FILESYSTEMNODE_H
#define FILESYSTEMNODE_H
#include <string>
#include<vector>
using namespace std;
class FileSystemNode
{
	public:
		FileSystemNode(string,string,FileSystemNode*);
		virtual string toString()=0;
	protected:
		string nombre;
		string autor;
		FileSystemNode* madre;
};

#endif
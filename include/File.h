#ifndef FILE_H
#define FILE_H

#include "FileSystemObject.h"
using namespace std;

// File class, derived from FileSystemObject
class File : public FileSystemObject {
private:
    size_t size;    // Size of the file
    string content; // Content of the file

public:
    // Constructor
    File(const string& name);
    void deleteContent();
};

#endif // FILE_H

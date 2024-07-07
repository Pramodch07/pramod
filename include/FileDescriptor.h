#ifndef FILEDESCRIPTOR_H
#define FILEDESCRIPTOR_H

#include "File.h"
using namespace std;

// The FileDescriptor class represents a file descriptor that can be used to read and write data to a file.
class FileDescriptor {
private:
    File* file;         // Represents the file associated with the file descriptor
    size_t position;    // Represents the current position in the file

public:
    // Constructor
    FileDescriptor(File* file);
    // Current position getter
    void seek(size_t position);
    // Getter for the file
    File* getFile() const;
};

#endif // FILEDESCRIPTOR_H

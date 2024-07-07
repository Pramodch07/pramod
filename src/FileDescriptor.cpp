#include "../include/FileDescriptor.h"

// Constructor for FileDescriptor
FileDescriptor::FileDescriptor(File* file): file(file), position(0) {
    // Nothing
}

// Current position getter
void FileDescriptor::seek(size_t pos) {
    position = pos;
}


// Getter for the file
File* FileDescriptor::getFile() const {
    return file;
}

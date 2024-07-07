#include "../include/File.h"
using namespace chrono;

// Constructor for File
File::File(const string& name): FileSystemObject(name), size(0), content("") {
    // Nothing to do here
}
   

// Resets file by making the content of the file to null
void File::deleteContent() {
    content.clear();
    size = 0;
    setLastModified(system_clock::now());
}

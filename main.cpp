#include "filehandler.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    // Check command line arguments
    if (argc < 2 || argc > 3) {
        cout << "Usage: " << argv[0] << " <input_file> [key_type]" << endl;
        cout << "key_type: rollno (default) or cgpa" << endl;
        return 1;
    }

    // Initialize root pointer
    Node* root = nullptr;
    
    // Determine key type
    bool isRollNumberKey = true;
    if (argc == 3) {
        string keyType = argv[2];
        if (keyType == "cgpa") {
            isRollNumberKey = false;
        } else if (keyType != "rollno") {
            cout << "Invalid key type. Use 'rollno' or 'cgpa'." << endl;
            return 1;
        }
    }
    
    // Create file handler with root pointer and key type
    FileHandler fileHandler(root, isRollNumberKey);
    
    // Process input file
    if (!fileHandler.processFile(argv[1])) {
        cout << "Error processing file: " << argv[1] << endl;
        return 1;
    }
    
    cout << "File processed successfully." << endl;
    return 0;
}

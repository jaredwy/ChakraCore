#include <fstream>
#include <sstream>
#include <string>
#include "FileLoadHelpers.h"

LoadScriptResult FileLoadHelpers::LoadScriptFromFile(std::string filename, std::string& contents) {

    std::ifstream in(filename, std::ios::in | std::ios::binary);
    if(!in) {
        return LoadScriptResult::S_ERROR;
    }
    std::ostringstream fileContents;
    fileContents << in.rdbuf();
    in.close();
    contents.append(fileContents.str());
    return LoadScriptResult::S_OK;
}
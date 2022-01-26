#include <iostream>
#include <fstream>
#include <direct.h>

int main() {
    // Make Directory
    std::ofstream writing_file;
    std::string directoryName = "";
    std::cout << "Directory? > ";
    std::cin >> directoryName;
    _mkdir(("../" + directoryName).c_str());

    //Make main file of Cpp
    std::string fileName = "";
    std::cout << "FileName? (not required .cpp) > ";
    std::cin >> fileName;
    writing_file.open("../" + directoryName + "/" + fileName + ".cpp", std::ios::out);
    std::string fileText = "#include <iomanip>\n#include <iostream>\n#include <vector>\n#include <cmath>\nusing namespace std;\n\nint main(){\n\n}";
    writing_file << fileText << std::endl;
    writing_file.close();

    //Write CMakeLists file
    writing_file.open("../CMakeLists.txt", std::ios::app);
    std::string cmakeDetail = "\nadd_executable(" + directoryName + "_" + fileName + " " + directoryName + "/" + fileName + ".cpp)";
    writing_file << cmakeDetail;
    writing_file.close();

    std::cout << "Success creating new cpp file for AtCoder" << std::endl;

    return 0;
}

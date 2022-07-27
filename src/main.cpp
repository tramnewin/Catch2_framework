#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>

using namespace std;

bool testing(string str1, string str2){
    auto checksum1 = str1;
    auto checksum2 = str2;
    return str1 == str2;

};

void createFile() {
    std::string fakeText = "Fake file for configuration test";
    std::string fakeText2 = "Fake file for non-matching file test";
    std::filesystem::create_directory("Fake_file");
    std::string dirPath = (std::filesystem::current_path()).string() + "/Fake_file";
    std::filesystem:: path currPath("Fake_file");
    const std::string fileName1 = "configFile1.txt";
    const std::string fileName2 = "configFile2.txt";

    std::ofstream ofile(std::string(currPath).append("/").append(fileName1));
    std::ofstream ofile2(std::string(currPath).append("/").append(fileName2));
    ofile << fakeText;
    ofile.close();
    ofile2 << fakeText;
    ofile2.close();
    dirPath = dirPath + "/" + fileName1;
    ifstream file(dirPath, std::ios::in | std::ios::binary);
    if(!file.is_open()){
        cout<< "fail to open"<<fileName1<<"\n";

    }
    else{
        cout<<"its working\n";

    }
};

int main(){
    string a = "hellp";
    string b = "hello";
    cout<< testing(a,b);
    createFile();
    return 0; 
}

#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main(int argc, char* argv[])
{
    std::cout << "Path is " << fs::path(argv[0]).parent_path() << '\n';
}
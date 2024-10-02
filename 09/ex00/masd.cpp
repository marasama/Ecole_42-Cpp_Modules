#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

int main() {
    std::ifstream file("data.csv");

    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            std::stringstream ss(line);
            std::string value;

            // Split each line by commas and print each value
            while (getline(ss, value, ',')) {
                std::cout << value << " ";
            }
            std::cout << std::endl;
        }

        file.close();
    } else {
        std::cout << "Unable to open file.\n";
    }

    return 0;
}

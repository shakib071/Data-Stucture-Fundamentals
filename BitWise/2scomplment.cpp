#include <iostream>
#include <bitset>

int main() {
    int num = -1; // The number to represent in 2's complement
    const int bitSize = 32; // Number of bits

    // Calculate the 2's complement representation
    unsigned int twosComplement = (1 << bitSize) + num;

    // Print the result in binary
    std::cout << "2's complement of " << num << " (" << bitSize << "-bit) is: ";
    std::cout <<(twosComplement) << std::endl;

        int num = -1; // The number to represent in 2's complement
    const int bitSize = 32; // Number of bits for 32-bit system

    // Calculate the 2's complement representation
    unsigned int twosComplement = (1ULL << bitSize) + num;

    // Print the result in binary
    std::cout << "2's complement of " << num << " (" << bitSize << "-bit) is: ";
    std::cout << std::bitset<32>(twosComplement) << std::endl;

    return 0;
}

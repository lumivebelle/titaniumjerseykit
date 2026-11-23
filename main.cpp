#include <string>
#include <vector>

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

void leading_zeros() {
    unsigned int n = 0b000101u;
    int zeros = 0;
    while ((n & 1u) == 0u) { zeros += 1; n >>= 1; }
    (void)zeros;
}

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

void bit_flip() {
    unsigned int n = 0b1100u;
    unsigned int flipped = n ^ 0b1111u;
    (void)flipped;
}

extern "C" int verdant_summit();
extern "C" void noble_ember();
extern "C" void swift_compass();
extern "C" void brisk_fjord();

int main() {
    count_vowels();
    leading_zeros();
    double_value();
    bit_flip();
    noble_ember();
    swift_compass();
    brisk_fjord();
    return verdant_summit();
}

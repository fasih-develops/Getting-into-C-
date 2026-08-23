#include <iostream>
#include <string>
#include <thread>
#include <chrono>

// ANSI Color Constants
const std::string WARM_BROWN = "\033[38;5;137m";
const std::string SOFT_GOLD  = "\033[38;5;179m";
const std::string DEEP_ROSE  = "\033[38;5;168m";
const std::string BOLD       = "\033[1m";
const std::string RESET      = "\033[0m";

// Typewriter Function
void soft_typing(const std::string& text, const std::string& color, int delay_ms = 100) {
    for (char c : text) {
        std::cout << BOLD << color << c << RESET << std::flush;
        std::thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
    std::cout << std::endl;
}

int main() {
    soft_typing("✧ mere sajna ✧", WARM_BROWN, 80);
    soft_typing("Haaye ve mereya daadeya rabba...", SOFT_GOLD, 70);
    soft_typing("mere sajna de kol mainu rakhna haaye...", DEEP_ROSE, 60);

    return 0;
}
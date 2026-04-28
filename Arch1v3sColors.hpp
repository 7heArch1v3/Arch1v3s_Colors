# pragma once
# include <string>

namespace Arch1v3 {
    // Enum with all currently available color codes
    // 'B' means the color is bright
    // 'ON' means the color is a background
    enum Color {
        NONE=0,
        BOLD=1,
        BLACK=30,
        RED=31,
        GREEN=32,
        YELLOW=33,
        BLUE=34,
        MAGENTA=35,
        CYAN=36,
        WHITE=37,
        B_BLACK=90,
        B_RED=91,
        B_GREEN=92,
        B_YELLOW=93,
        B_BLUE=94,
        B_MAGENTA=95,
        B_CYAN=96,
        B_WHITE=97,
        ON_BLACK=40,
        ON_RED=41,
        ON_GREEN=42,
        ON_YELLOW=43,
        ON_BLUE=44,
        ON_MAGENTA=45,
        ON_CYAN=46,
        ON_WHITE=47,
        ON_B_BLACK=100,
        ON_B_RED=101,
        ON_B_GREEN=102,
        ON_B_YELLOW=103,
        ON_B_BLUE=104,
        ON_B_MAGENTA=105,
        ON_B_CYAN=106,
        ON_B_WHITE=107
    };

    // Adds the ANSI color escape sequence for the provided color to the provided string
    inline std::string paint(std::string string, Color color) {
        int colorVal = color;
        return "\e[" + std::to_string(colorVal) + "m" + string + "\e[0m";
    }

    // Adds the ANSI color escape sequence for bold text to the provided string
    inline std::string bold(std::string string) {
        return "\e[1m" + string + "\e[0m";
    }

    // Adds the ANSI color escape sequences for bold text and for the provided color to the provided string
    inline std::string paintBold(std::string string, Color color) {
        int colorVal = color;
        return "\e[1m\e[" + std::to_string(colorVal) + "m" + string + "\e[0m";
    }

    // Adds the ANSI color escape sequences for the two provided colors to the provided string
    inline std::string paintBackground(std::string string, Color text , Color background) {
        int bgVal = background , txtVal = text;
        return "\e[" + std::to_string(bgVal) + "m\e[" + std::to_string(txtVal) + "m" + string + "\e[0m";
    }
}
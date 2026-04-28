# Arch1v3s_Colors
A simple header file with functions used to color text in a terminal.  
Currently only supports the 8 basic colors and their bright versions (as forground and background), and bold.  
**All functions are in the `Arch1v3` namespace!**  
<br>
To use this, just include the `Arch1v3sColors.hpp` file in your project.  
<br> <br>

## Available functions
1. **paint**  
   ```c++
   std::string Arch1v3::paint(std::string string, Arch1v3::Color color)
   ```  
   Adds the color code corresponding to the color name provided to the beginning of the provided string, and the reset color code to the end.  
3. **bold**  
   ```c++
   std::string Arch1v3::bold(std::string string)
   ```  
   Adds the color code for bold text to the beginning of the provided string, and the reset color code to the end.  
5. **paintBold**.  
   ```c++
   std::string Arch1v3::paintBold(std::string string, Arch1v3::Color color)
   ```  
   Adds the color codes for bold text and the color corresponding to the color name provided to the beginning of the provided string, and the reset color code to the end.
7. **paintBackground**
   ```c++
   std::string Arch1v3::paintBackground(std::string string, Arch1v3::Color text , Arch1v3::Color background)
   ```
   Adds the two color codes corresponding to the provided color names to the beginning of the string, and the reset color code to the end. The order of the provided color codes does not matter, first `background` then `text` will also work. 

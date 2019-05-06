//!
//! @file       main.cpp
//! @author     Hasenfresser
//! @version    1.04
//! @date       2017-12-28
//!
//! @brief      Main file of the project. Just for testing purposes.
//!

#include "MenuTemplate/MenuTemplate.hpp"
#include <iostream>

using std::cout;
using std::endl;

//!
//! @brief  Main function of MenuTemplate.
//!
//! @return int
//!
int main() {
    // Example menu for a game:
    MenuTemplate::MenuTemplate MenuA;

	MenuA.Title = "\t\tNeverwinter Nights Simple Menu";
    MenuA.Description = "Escolha com UP e DOWN, selecione com RETURN!";
    MenuA.setCursor ("> ");
    MenuA.setCursorLength(MenuA.getCursor().length());
    
    
	MenuA.addEntry("GAME_NEW", "New game");
    MenuA.addEntry("GAME_LOAD", "Load save state");
    MenuA.addEntry("GAME_EXIT", "Exit game");
    MenuA.addEntry("VIDEO_OPTIONS", "Video Options");
    MenuA.addEntry("SOUND_OPTIONS", "Sound Options");
    MenuA.addEntry("CONTROLS", "Controls");
    MenuA.addEntry("GAME_OPTIONS", "Game options");
    
    MenuA.swapEntries(2, "GAME_OPTIONS");

    MenuA.setCursorStartPosition(0);

    cout << MenuA.displayGetName() << endl;
    cout << "Exibindo a funçao getCursor, com o cursor: " << MenuA.getCursor() << endl;
    cout << "Tamanho do cursor: " << MenuA.getCursorLength() << endl;
    system("pause");
}

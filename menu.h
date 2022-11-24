#ifndef CIFRARIODICESARE_MENU_H
#define CIFRARIODICESARE_MENU_H

/**
 * This method prints the different choices in the menu to choose by the user
 */
void menu_text(void);

/**
 * This method selects the case according to the choice.
 * @param choice - the choice given from user.
 */
void menu_switch(int choice);

/**
 * This method lets the user pick a choice from the ones given in menu_text()
 * @return
 */
int menu_choice(void);

#endif //CIFRARIODICESARE_MENU_H

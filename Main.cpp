/************************************************************************************************************************************/
/** @file		Main.cpp
 * 	@brief		x
 * 	@details	x
 *
 *  @author     Justin Reina, Firmware Engineer, Misc. Company
 *  @created    1/15/18
 *  @last rev   1/24/18
 *
 *
 * 	@notes		x
 *
 * 	@section	Opens
 * 			all tabs removed
 *          w/h->width/height
 *
 * 	@section	Legal Disclaimer
 * 			All contents of this source file and/or any other related source files are the explicit property of
 * 			Justin Reina. Do not distribute. Do not copy.
 */
/************************************************************************************************************************************/
#include "Globals.h"
using namespace std;

//Vars
Rectangle rect, rectb;                                                      /* declaration of vars, default constr called on boot   */


/************************************************************************************************************************************/
/**	@fcn		int main(void)
 *  @brief		x
 *  @details	x
 */
/************************************************************************************************************************************/
int main(void) {

    //Init
    sys_init();																/* initialize system and vars							*/

	//Calc
	rect.set_values (3,4);
	rectb.set_values (5,6);

	//Print
	cout << "main():\t\t\t rect area-ish:\t" << rect.area()  << endl;
	cout << "main():\t\t\t rectb area:\t"    << rectb.area() << endl;

	return EXIT_SUCCESS;
}


/************************************************************************************************************************************/
/**	@fcn		void sys_init(void)
 *  @brief		x
 *  @details	x
 */
/************************************************************************************************************************************/
void sys_init(void) {

    cout << "Rectangle.sys_init():\t system initialization begin." << endl;

	//Init system & vars
	rect  = Rectangle();                                                    /* generate with default constructor                    */
	rectb = Rectangle(1,2);                                                 /* generate with custom constructor                     */

	cout << "Rectangle.sys_init():\t system initialization complete.\n" << endl;
	return;
}

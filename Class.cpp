/************************************************************************************************************************************/
/** @file		Class.cpp
 * 	@brief		x
 * 	@details	x
 *
 * 	@notes		x
 *
 * 	@section	Opens
 * 			none current
 *
 * 	@section	Legal Disclaimer
 * 			All contents of this source file and/or any other related source files are the explicit property of
 * 			Justin Reina. Do not distribute. Do not copy.
 */
/************************************************************************************************************************************/
#include <iostream>
#include "Class.h"
using namespace std;


/************************************************************************************************************************************/
/**	@fcn		void Rectangle::set_values (int x, int y)
 *  @brief		x
 *  @details	x
 */
/************************************************************************************************************************************/
void Rectangle::set_values (int x, int y) {                                 /* member function definition (in file)                 */
  width  = x;
  height = y;
}


/************************************************************************************************************************************/
/**	@fcn		Rectangle::Rectangle()
 *  @brief		default constructor
 *  @details	x
 */
/************************************************************************************************************************************/
Rectangle::Rectangle() {														/* default constructor example						*/

    cout << "Rectangle():\t\t initialization begin." << endl;

    //Init state
    width  = 0;
    height = 0;

    cout << "Rectangle():\t\t initialization complete." << endl;

    return;
}

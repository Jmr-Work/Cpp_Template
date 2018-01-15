/************************************************************************************************************************************/
/** @file		Main.cpp
 * 	@brief		x
 * 	@details	x
 *
 *  @author     Justin Reina, Firmware Engineer, Misc. Company
 *  @created    1/15/18
 *  @last rev   1/15/18
 *
 *
 * 	@notes		x
 *
 * 	@section	Opens
 * 			none current
 *
 * 	@section	Legal Disclaimer
 * 			All contents of this source file and/or any otherrelated source files are the explicit property of
 * 			Justin Reina. Do not distribute. Do not copy.
 */
/************************************************************************************************************************************/
#include <iostream>
#include "Class.h"
using namespace std;


/************************************************************************************************************************************/
/**	@fcn		int main(void)
 *  @brief		x
 *  @details	x
 */
/************************************************************************************************************************************/
int main () {
  Rectangle rect, rectb;
  rect.set_values (3,4);
  rectb.set_values (5,6);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}

#ifndef _CLASS_H
#define _CLASS_H

#include <iostream>
using namespace std;


/************************************************************************************************************************************/
/**	@fcn		class Rectangle
 *  @brief		x
 *  @details	x
 */
/************************************************************************************************************************************/
class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area () {
    	return (width*height);
    }
};

#endif


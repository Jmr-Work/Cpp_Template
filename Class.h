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
public:
    void set_values(int,int);                                               /* member function declaration                          */
    int area(void) {                                                        /* member function definition (in declaration)          */
    	return (width*height);
    }

    Rectangle();															/* default constructor declaration						*/
    Rectangle(int w, int h) {												/* custom constructor definition (in declaration)		*/

    cout << "Rectangle():\t\t initialization begin." << endl;

    //Init state
    width  = w;
    height = h;

    cout << "Rectangle():\t\t initialization complete." << endl;

    return;
}

private:
    int width, height;                                                      /* private variable declaration                      	*/
};

#endif


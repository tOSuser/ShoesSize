
/*
 *
 * ============================================================================
 * Name        : shoestest.cpp
 * @Author     : Hossein (Github account name At he71 dot com)
 * @Git        : https://github.com/tOSuser/ShoesSize
 * @Website    : http://he71.com
 *
 * Version     : 0.1
 * Copyright   : Your copyright notice
 * Description : Hello World in C++, Ansi-style
 * ============================================================================
 *
 * This code is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License, version 3,
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include "SolutionA.h"
#include "SolutionB.h"
//#include <list>
using namespace std;

/*
 * ---------------------------------------------------
 * API simulator
 * ---------------------------------------------------
 */
int _total = 6;
char *_name[6] = {"Bob","Luuk","Mikaela","Fisnik","Raz","Mikaela"};
int _size[6] ={39,40,41,42,43,44};

int getListLength(void){ return _total;}
char *getName(int field) {return _name[field];}
int getSize(int field) {return _size[field];}
/*'
 * ---------------------------------------------------
 */


int main (int argc, char *argv[])
{
	// Solution A
	cout<< "\n" << "--->Method A" << "\n";
	{
		int start_s=clock();
		SolutionA mysola;
		cout << "Popular Size :" <<mysola.popularSize() << "\n";
		cout << "Popular Name :" << mysola.popularName() << "\n";
		int stop_s=clock();
		cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	}

	// Solution A
	cout<< "\n" << "--->Method B" << "\n";
	{
		int start_s=clock();
		SolutionA mysola;
		SolutionB mysolb;
		cout << "Popular Size :" << mysolb.popularSize() << "\n";
		cout << "Popular Name :" << mysolb.popularName() << "\n";
		int stop_s=clock();
		cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	}

	// Solution C
	//cout<< "\n" << "--->Method C" << "\n";
	{
	}


	// Solution D
	//cout<< "\n" << "--->Method D" << "\n";
	{
	}

	return 0;
}


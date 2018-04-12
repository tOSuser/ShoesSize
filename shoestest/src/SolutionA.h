/*
 * SolutionA.h
 *
 *  Created on: Apr 11, 2018
 **     @Author: Hossein (Github account name At he71 dot com)
 **     @Git : https://github.com/tOSuser
 **		@Website : http://he71.com
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

#ifndef SOLUTIONA_H_
#define SOLUTIONA_H_

#include <iostream>
#include <vector>
#include <algorithm>

class SolutionA {
private:

	typedef struct sshoesize{
		int size;
		int occurrence;
	} Shoessize;

	std::vector<Shoessize> vshoessize;

	typedef struct sshoename{
		std::string name;
		int occurrence;
	} Shoesname;

	std::vector<Shoesname> vshoesname;
public:
	SolutionA();
	bool updateElementbysize(int);
	bool static sortElementbysize(Shoessize, Shoessize);
	bool updateElementbyname(std::string);
	bool static sortElementbyname(Shoesname , Shoesname);
	int popularSize();
	std::string popularName();
};

#endif /* SOLUTIONA_H_ */

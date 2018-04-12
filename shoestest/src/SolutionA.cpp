/*
 * SolutionA.cpp
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

#include "SolutionA.h"
#include "api.h"

 SolutionA::SolutionA() {
	//------------------------------
	for (int i= 0 ; i< getListLength();i++){
		if(!updateElementbysize(getSize(i)))
			vshoessize.push_back({getSize(i),1});
	}
	sort (vshoessize.begin(), vshoessize.end(), sortElementbysize);

	//------------------------------
	for (int i= 0 ; i< getListLength();i++){
		if(!updateElementbyname(getName(i)))
			vshoesname.push_back({getName(i),1});
	}
	sort (vshoesname.begin(), vshoesname.end(), sortElementbyname);

  }


 bool SolutionA::updateElementbysize(int size){
	for (int i= 0 ; i < (int)vshoessize.size();i++)
		if (vshoessize.at(i).size == size){
			vshoessize.at(i).occurrence++;
			return true;
		}
	return false;
 }
 bool SolutionA::sortElementbysize(Shoessize i, Shoessize j){
	 return (i.occurrence > j.occurrence);

 }

 bool SolutionA::updateElementbyname(std::string name){
	for (int i= 0 ; i < (int)vshoesname.size();i++)
		if (vshoesname.at(i).name == name){
			vshoesname.at(i).occurrence++;
			return true;
		}
	return false;
 }

 bool SolutionA::sortElementbyname(Shoesname i, Shoesname j){
	 return (i.occurrence > j.occurrence);
  }

  /**
   * Return the most popular shoe size in the customer list.
   */
  //-----------------
  int SolutionA::popularSize() {


	if (vshoessize.size() > 1 && (vshoessize.at(0).occurrence != vshoessize.at(1).occurrence))
	  return vshoessize.at(0).size;
	return -1;

  }


  /**
   * Return the most popular name for the most popular shoe size in the given
   * list.
   */
  std::string SolutionA::popularName() {

	  if (vshoesname.size() > 1 && (vshoesname.at(0).occurrence != vshoesname.at(1).occurrence))
		  return vshoesname.at(0).name;
	  return "";
  }


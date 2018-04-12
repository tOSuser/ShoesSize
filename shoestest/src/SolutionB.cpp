/*
 * SolutionB.cpp
 *
 *  Created on: Apr 11, 2018
 *      Author: Hossein
 */

#include "SolutionB.h"
#include "api.h"

SolutionB::SolutionB() {
	// TODO Auto-generated constructor stub

}

SolutionB::~SolutionB() {
	// TODO Auto-generated destructor stub
}

/**
 * Return the most popular shoe size in the customer list.
 */
int SolutionB::getrepetedi(int size){
	int n =0;
	for (int i= 0 ; i< getListLength();i++)
		if (getSize(i) == size)
			n++;
	return n;
  }

int SolutionB::popularSize() {


	int currentpopular = -1, npupular = 0;
	int npupular_l2 = 0;
	int tempsize;

	// there is only one!!
	if (getListLength() == 1)
		return getSize(0);

	//level 1
	for (int i= 0 ; i< getListLength();i++){
		if ((tempsize  = getrepetedi(getSize(i))) > npupular ){
			npupular = tempsize;
			currentpopular = getSize(i);
		}
   }

	//level 2, is it unique?
	for (int i= 0 ; i< getListLength();i++){
		if (getSize(i) != currentpopular)
		{
			tempsize = getrepetedi(getSize(i));
			if (tempsize > npupular_l2){
				npupular_l2 = tempsize;
			}
		}
   }

	if (npupular > npupular_l2 &&  getListLength() > 0)
		return currentpopular;
	return -1;
}

/**
 * Return the most popular name for the most popular shoe size in the given
 * list.
 */
int SolutionB::getrepetedn(std::string name){
	int n =0;
	for (int i= 0 ; i< getListLength();i++)
		if (::getName(i) == name)
		n++;
	return n;
  }

std::string SolutionB::popularName() {

	std::string currentpopular, currentpopular_l2;
	int npupular = 0,npupular_l2 = 0;
	int tempsize;


	// there is only one!!
	if (getListLength() == 1)
		return getName(0);

	//level 1
	for (int i= 0 ; i< ::getListLength();i++){
		if ((tempsize = getrepetedn(getName(i))) > npupular){
			npupular = tempsize;
			currentpopular = getName(i);
		}
	}

	//level 2, is it unique?
	for (int i= 0 ; i< getListLength();i++){
		if (getName(i) != currentpopular)
		{
			tempsize = getrepetedn(getName(i));
			if (tempsize > npupular_l2){
				npupular_l2 = tempsize;
			}
		}
   }

	if (npupular > npupular_l2 &&  getListLength() > 0)
		return currentpopular;
	return "";
  }


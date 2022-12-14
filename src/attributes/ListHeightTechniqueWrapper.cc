
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file ListHeightTechniqueAttributes.h
    \\brief Definition of ListHeightTechnique Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "ListHeightTechniqueWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



ListHeightTechniqueWrapper::ListHeightTechniqueWrapper(): listheighttechnique_(new ListHeightTechnique())


{


	
	HeightTechniqueWrapper::object(listheighttechnique_);
	

}
ListHeightTechniqueWrapper::ListHeightTechniqueWrapper(ListHeightTechnique* listheighttechnique): listheighttechnique_(listheighttechnique)
{

	
	HeightTechniqueWrapper::object(listheighttechnique_);
	
}

ListHeightTechniqueWrapper::~ListHeightTechniqueWrapper()
{

}

void ListHeightTechniqueWrapper::set(const MagRequest& request)
{

	

	HeightTechniqueWrapper::set(request);
	

	
	
}

void ListHeightTechniqueWrapper::print(ostream& out)  const
{
	out << "ListHeightTechniqueWrapper[]";
}



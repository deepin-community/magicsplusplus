
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file NoPreviewVisitorAttributes.h
    \\brief Definition of NoPreviewVisitor Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "NoPreviewVisitorWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



NoPreviewVisitorWrapper::NoPreviewVisitorWrapper(): nopreviewvisitor_(new NoPreviewVisitor())


{


	

}
NoPreviewVisitorWrapper::NoPreviewVisitorWrapper(NoPreviewVisitor* nopreviewvisitor): nopreviewvisitor_(nopreviewvisitor)
{

	
}

NoPreviewVisitorWrapper::~NoPreviewVisitorWrapper()
{

}

void NoPreviewVisitorWrapper::set(const MagRequest& request)
{

	

	
	
}

void NoPreviewVisitorWrapper::print(ostream& out)  const
{
	out << "NoPreviewVisitorWrapper[]";
}



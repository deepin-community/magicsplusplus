
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file QtDriverAttributes.h
    \\brief Definition of QtDriver Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "QtDriverAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

QtDriverAttributes::QtDriverAttributes()
	
	
{
}


QtDriverAttributes::~QtDriverAttributes()
{

}


void QtDriverAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(2);
	int i = 0;
	prefix[i++] = "output";
	prefix[i++] = "output_qt";
	
	
	
}

void QtDriverAttributes::copy(const QtDriverAttributes& other)
{
	
}


bool QtDriverAttributes::accept(const string& node)
{

	if ( magCompare(node, "qt")  )
		return true;
	
	return false;
}

void QtDriverAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "qt")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void QtDriverAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	
	out << "]" << "\n";
}

void QtDriverAttributes::toxml(ostream& out)  const
{
	out <<  "\"qt\"";
	
}


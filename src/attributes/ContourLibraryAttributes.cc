
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file ContourLibraryAttributes.h
    \\brief Definition of ContourLibrary Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "ContourLibraryAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

ContourLibraryAttributes::ContourLibraryAttributes():
	predefined_(ParameterManager::getString("contour_predefined_setting")),
	library_path_(ParameterManager::getString("contour_automatic_library_path"))
	
	
{
}


ContourLibraryAttributes::~ContourLibraryAttributes()
{

}


void ContourLibraryAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "";
	
	setAttribute(prefix, "contour_predefined_setting", predefined_, params);
	setAttribute(prefix, "contour_automatic_library_path", library_path_, params);
	
	
}

void ContourLibraryAttributes::copy(const ContourLibraryAttributes& other)
{
	predefined_ = other.predefined_;
	library_path_ = other.library_path_;
	
}


bool ContourLibraryAttributes::accept(const string& node)
{

	if ( magCompare(node, "")  )
		return true;
	
	return false;
}

void ContourLibraryAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void ContourLibraryAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " predefined = " <<  predefined_;
	out << " library_path = " <<  library_path_;
	
	out << "]" << "\n";
}

void ContourLibraryAttributes::toxml(ostream& out)  const
{
	out <<  "\"\"";
	out << ", \"contour_predefined_setting\":";
	niceprint(out,predefined_);
	out << ", \"contour_automatic_library_path\":";
	niceprint(out,library_path_);
	
}

static MagicsParameter<string> contour_predefined_setting("contour_predefined_setting", "");
static MagicsParameter<string> contour_automatic_library_path("contour_automatic_library_path", "");


/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file NetcdfGeoVectorInterpretorAttributes.h
    \\brief Definition of NetcdfGeoVectorInterpretor Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "NetcdfGeoVectorInterpretorAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

NetcdfGeoVectorInterpretorAttributes::NetcdfGeoVectorInterpretorAttributes()
	
	
{
}


NetcdfGeoVectorInterpretorAttributes::~NetcdfGeoVectorInterpretorAttributes()
{

}


void NetcdfGeoVectorInterpretorAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "netcdf";
	
	
	
}

void NetcdfGeoVectorInterpretorAttributes::copy(const NetcdfGeoVectorInterpretorAttributes& other)
{
	
}


bool NetcdfGeoVectorInterpretorAttributes::accept(const string& node)
{

	if ( magCompare(node, "geopoints")  )
		return true;
	
	return false;
}

void NetcdfGeoVectorInterpretorAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "geopoints")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void NetcdfGeoVectorInterpretorAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	
	out << "]" << "\n";
}

void NetcdfGeoVectorInterpretorAttributes::toxml(ostream& out)  const
{
	out <<  "\"geopoints\"";
	
}


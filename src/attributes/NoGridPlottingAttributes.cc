
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file NoGridPlottingAttributes.h
    \\brief Definition of NoGridPlotting Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "NoGridPlottingAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

NoGridPlottingAttributes::NoGridPlottingAttributes():
	latReference_(ParameterManager::getDouble("map_grid_latitude_reference")),
	latIncrement_(ParameterManager::getDouble("map_grid_latitude_increment")),
	lonReference_(ParameterManager::getDouble("map_grid_longitude_reference")),
	lonIncrement_(ParameterManager::getDouble("map_grid_longitude_increment"))
	
	
{
}


NoGridPlottingAttributes::~NoGridPlottingAttributes()
{

}


void NoGridPlottingAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "";
	
	setAttribute(prefix, "map_grid_latitude_reference", latReference_, params);
	setAttribute(prefix, "map_grid_latitude_increment", latIncrement_, params);
	setAttribute(prefix, "map_grid_longitude_reference", lonReference_, params);
	setAttribute(prefix, "map_grid_longitude_increment", lonIncrement_, params);
	
	
}

void NoGridPlottingAttributes::copy(const NoGridPlottingAttributes& other)
{
	latReference_ = other.latReference_;
	latIncrement_ = other.latIncrement_;
	lonReference_ = other.lonReference_;
	lonIncrement_ = other.lonIncrement_;
	
}


bool NoGridPlottingAttributes::accept(const string& node)
{

	if ( magCompare(node, "nogrid")  )
		return true;
	
	return false;
}

void NoGridPlottingAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "nogrid")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void NoGridPlottingAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " latReference = " <<  latReference_;
	out << " latIncrement = " <<  latIncrement_;
	out << " lonReference = " <<  lonReference_;
	out << " lonIncrement = " <<  lonIncrement_;
	
	out << "]" << "\n";
}

void NoGridPlottingAttributes::toxml(ostream& out)  const
{
	out <<  "\"nogrid\"";
	out << ", \"map_grid_latitude_reference\":";
	niceprint(out,latReference_);
	out << ", \"map_grid_latitude_increment\":";
	niceprint(out,latIncrement_);
	out << ", \"map_grid_longitude_reference\":";
	niceprint(out,lonReference_);
	out << ", \"map_grid_longitude_increment\":";
	niceprint(out,lonIncrement_);
	
}

static MagicsParameter<double> map_grid_latitude_reference("map_grid_latitude_reference", 0);
static MagicsParameter<double> map_grid_latitude_increment("map_grid_latitude_increment", 10);
static MagicsParameter<double> map_grid_longitude_reference("map_grid_longitude_reference", 0);
static MagicsParameter<double> map_grid_longitude_increment("map_grid_longitude_increment", 20);

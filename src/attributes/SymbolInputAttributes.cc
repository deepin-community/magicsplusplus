
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file SymbolInputAttributes.h
    \\brief Definition of SymbolInput Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "SymbolInputAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

SymbolInputAttributes::SymbolInputAttributes():
	x_(ParameterManager::getDoubleArray("symbol_input_x_position")),
	y_(ParameterManager::getDoubleArray("symbol_input_y_position")),
	speed_(ParameterManager::getDoubleArray("symbol_input_wind_speed")),
	direction_(ParameterManager::getDoubleArray("symbol_input_wind_direction")),
	value_(ParameterManager::getDoubleArray("symbol_input_number_list")),
	position_(ParameterManager::getString("symbol_position_mode"))
	
	
{
}


SymbolInputAttributes::~SymbolInputAttributes()
{

}


void SymbolInputAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(2);
	int i = 0;
	prefix[i++] = "symbol";
	prefix[i++] = "symbol_input";
	
	setAttribute(prefix, "symbol_input_x_position", x_, params);
	setAttribute(prefix, "symbol_input_y_position", y_, params);
	setAttribute(prefix, "symbol_input_wind_speed", speed_, params);
	setAttribute(prefix, "symbol_input_wind_direction", direction_, params);
	setAttribute(prefix, "symbol_input_number_list", value_, params);
	setAttribute(prefix, "symbol_position_mode", position_, params);
	
	
}

void SymbolInputAttributes::copy(const SymbolInputAttributes& other)
{
	x_ = other.x_;
	y_ = other.y_;
	speed_ = other.speed_;
	direction_ = other.direction_;
	value_ = other.value_;
	position_ = other.position_;
	
}


bool SymbolInputAttributes::accept(const string& node)
{

	if ( magCompare(node, "input")  )
		return true;
	
	return false;
}

void SymbolInputAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "input")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void SymbolInputAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " x = " <<  x_;
	out << " y = " <<  y_;
	out << " speed = " <<  speed_;
	out << " direction = " <<  direction_;
	out << " value = " <<  value_;
	out << " position = " <<  position_;
	
	out << "]" << "\n";
}

void SymbolInputAttributes::toxml(ostream& out)  const
{
	out <<  "\"input\"";
	out << ", \"symbol_input_x_position\":";
	niceprint(out,x_);
	out << ", \"symbol_input_y_position\":";
	niceprint(out,y_);
	out << ", \"symbol_input_wind_speed\":";
	niceprint(out,speed_);
	out << ", \"symbol_input_wind_direction\":";
	niceprint(out,direction_);
	out << ", \"symbol_input_number_list\":";
	niceprint(out,value_);
	out << ", \"symbol_position_mode\":";
	niceprint(out,position_);
	
}

static MagicsParameter<doublearray> symbol_input_x_position("symbol_input_x_position", floatarray());
static MagicsParameter<doublearray> symbol_input_y_position("symbol_input_y_position", floatarray());
static MagicsParameter<doublearray> symbol_input_wind_speed("symbol_input_wind_speed", floatarray());
static MagicsParameter<doublearray> symbol_input_wind_direction("symbol_input_wind_direction", floatarray());
static MagicsParameter<doublearray> symbol_input_number_list("symbol_input_number_list", floatarray());
static MagicsParameter<string> symbol_position_mode("symbol_position_mode", "geographic");

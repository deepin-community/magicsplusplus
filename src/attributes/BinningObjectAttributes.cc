
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file BinningObjectAttributes.h
    \\brief Definition of BinningObject Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "BinningObjectAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

BinningObjectAttributes::BinningObjectAttributes():
	x_(ParameterManager::getString("binning_x_method")),
	x_min_(ParameterManager::getDouble("binning_x_min_value")),
	x_max_(ParameterManager::getDouble("binning_x_max_value")),
	x_count_(ParameterManager::getInt("binning_x_count")),
	x_list_(ParameterManager::getDoubleArray("binning_x_list")),
	x_interval_(ParameterManager::getDouble("binning_x_interval")),
	x_reference_(ParameterManager::getDouble("binning_x_reference")),
	y_(ParameterManager::getString("binning_y_method")),
	y_min_(ParameterManager::getDouble("binning_y_min_value")),
	y_max_(ParameterManager::getDouble("binning_y_max_value")),
	y_count_(ParameterManager::getInt("binning_y_count")),
	y_list_(ParameterManager::getDoubleArray("binning_y_list")),
	y_interval_(ParameterManager::getDouble("binning_y_interval")),
	y_reference_(ParameterManager::getDouble("binning_y_reference"))
	
	
{
}


BinningObjectAttributes::~BinningObjectAttributes()
{

}


void BinningObjectAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "binning";
	
	setAttribute(prefix, "binning_x_method", x_, params);
	setAttribute(prefix, "binning_x_min_value", x_min_, params);
	setAttribute(prefix, "binning_x_max_value", x_max_, params);
	setAttribute(prefix, "binning_x_count", x_count_, params);
	setAttribute(prefix, "binning_x_list", x_list_, params);
	setAttribute(prefix, "binning_x_interval", x_interval_, params);
	setAttribute(prefix, "binning_x_reference", x_reference_, params);
	setAttribute(prefix, "binning_y_method", y_, params);
	setAttribute(prefix, "binning_y_min_value", y_min_, params);
	setAttribute(prefix, "binning_y_max_value", y_max_, params);
	setAttribute(prefix, "binning_y_count", y_count_, params);
	setAttribute(prefix, "binning_y_list", y_list_, params);
	setAttribute(prefix, "binning_y_interval", y_interval_, params);
	setAttribute(prefix, "binning_y_reference", y_reference_, params);
	
	
}

void BinningObjectAttributes::copy(const BinningObjectAttributes& other)
{
	x_ = other.x_;
	x_min_ = other.x_min_;
	x_max_ = other.x_max_;
	x_count_ = other.x_count_;
	x_list_ = other.x_list_;
	x_interval_ = other.x_interval_;
	x_reference_ = other.x_reference_;
	y_ = other.y_;
	y_min_ = other.y_min_;
	y_max_ = other.y_max_;
	y_count_ = other.y_count_;
	y_list_ = other.y_list_;
	y_interval_ = other.y_interval_;
	y_reference_ = other.y_reference_;
	
}


bool BinningObjectAttributes::accept(const string& node)
{

	if ( magCompare(node, "binning")  )
		return true;
	
	return false;
}

void BinningObjectAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "binning")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void BinningObjectAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " x = " <<  x_;
	out << " x_min = " <<  x_min_;
	out << " x_max = " <<  x_max_;
	out << " x_count = " <<  x_count_;
	out << " x_list = " <<  x_list_;
	out << " x_interval = " <<  x_interval_;
	out << " x_reference = " <<  x_reference_;
	out << " y = " <<  y_;
	out << " y_min = " <<  y_min_;
	out << " y_max = " <<  y_max_;
	out << " y_count = " <<  y_count_;
	out << " y_list = " <<  y_list_;
	out << " y_interval = " <<  y_interval_;
	out << " y_reference = " <<  y_reference_;
	
	out << "]" << "\n";
}

void BinningObjectAttributes::toxml(ostream& out)  const
{
	out <<  "\"binning\"";
	out << ", \"binning_x_method\":";
	niceprint(out,x_);
	out << ", \"binning_x_min_value\":";
	niceprint(out,x_min_);
	out << ", \"binning_x_max_value\":";
	niceprint(out,x_max_);
	out << ", \"binning_x_count\":";
	niceprint(out,x_count_);
	out << ", \"binning_x_list\":";
	niceprint(out,x_list_);
	out << ", \"binning_x_interval\":";
	niceprint(out,x_interval_);
	out << ", \"binning_x_reference\":";
	niceprint(out,x_reference_);
	out << ", \"binning_y_method\":";
	niceprint(out,y_);
	out << ", \"binning_y_min_value\":";
	niceprint(out,y_min_);
	out << ", \"binning_y_max_value\":";
	niceprint(out,y_max_);
	out << ", \"binning_y_count\":";
	niceprint(out,y_count_);
	out << ", \"binning_y_list\":";
	niceprint(out,y_list_);
	out << ", \"binning_y_interval\":";
	niceprint(out,y_interval_);
	out << ", \"binning_y_reference\":";
	niceprint(out,y_reference_);
	
}

static MagicsParameter<string> binning_x_method("binning_x_method", "count");
static MagicsParameter<double> binning_x_min_value("binning_x_min_value", -1.0e+21);
static MagicsParameter<double> binning_x_max_value("binning_x_max_value", 1.0e+21);
static MagicsParameter<int> binning_x_count("binning_x_count", 10);
static MagicsParameter<doublearray> binning_x_list("binning_x_list", floatarray());
static MagicsParameter<double> binning_x_interval("binning_x_interval", 10);
static MagicsParameter<double> binning_x_reference("binning_x_reference", 0);
static MagicsParameter<string> binning_y_method("binning_y_method", "count");
static MagicsParameter<double> binning_y_min_value("binning_y_min_value", -1.0e+21);
static MagicsParameter<double> binning_y_max_value("binning_y_max_value", 1.0e+21);
static MagicsParameter<int> binning_y_count("binning_y_count", 10);
static MagicsParameter<doublearray> binning_y_list("binning_y_list", floatarray());
static MagicsParameter<double> binning_y_interval("binning_y_interval", 10);
static MagicsParameter<double> binning_y_reference("binning_y_reference", 0);

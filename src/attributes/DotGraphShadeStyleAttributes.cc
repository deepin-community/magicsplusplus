
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file DotGraphShadeStyleAttributes.h
    \\brief Definition of DotGraphShadeStyle Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "DotGraphShadeStyleAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

DotGraphShadeStyleAttributes::DotGraphShadeStyleAttributes():
	density_(ParameterManager::getInt("graph_shade_dot_density")),
	size_(ParameterManager::getDouble("graph_shade_dot_size"))
	
	
{
}


DotGraphShadeStyleAttributes::~DotGraphShadeStyleAttributes()
{

}


void DotGraphShadeStyleAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "";
	
	setAttribute(prefix, "graph_shade_dot_density", density_, params);
	setAttribute(prefix, "graph_shade_dot_size", size_, params);
	
	
}

void DotGraphShadeStyleAttributes::copy(const DotGraphShadeStyleAttributes& other)
{
	density_ = other.density_;
	size_ = other.size_;
	
}


bool DotGraphShadeStyleAttributes::accept(const string& node)
{

	if ( magCompare(node, "")  )
		return true;
	
	return false;
}

void DotGraphShadeStyleAttributes::set(const XmlNode& node)
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

void DotGraphShadeStyleAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " density = " <<  density_;
	out << " size = " <<  size_;
	
	out << "]" << "\n";
}

void DotGraphShadeStyleAttributes::toxml(ostream& out)  const
{
	out <<  "\"\"";
	out << ", \"graph_shade_dot_density\":";
	niceprint(out,density_);
	out << ", \"graph_shade_dot_size\":";
	niceprint(out,size_);
	
}

static MagicsParameter<int> graph_shade_dot_density("graph_shade_dot_density", 20);
static MagicsParameter<double> graph_shade_dot_size("graph_shade_dot_size", 0.02);

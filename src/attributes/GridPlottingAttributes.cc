
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file GridPlottingAttributes.h
    \\brief Definition of GridPlotting Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "GridPlottingAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

GridPlottingAttributes::GridPlottingAttributes():
	thickness_(ParameterManager::getInt("map_grid_thickness")),
	grid_frame_(ParameterManager::getBool("map_grid_frame")),
	grid_frame_thickness_(ParameterManager::getInt("map_grid_frame_thickness"))
	,
	style_(MagTranslator<string, LineStyle>().magics("map_grid_line_style")),
	colour_(MagTranslator<string, Colour>().magics("map_grid_colour")),
	grid_frame_style_(MagTranslator<string, LineStyle>().magics("map_grid_frame_line_style")),
	grid_frame_colour_(MagTranslator<string, Colour>().magics("map_grid_frame_colour"))
	
{
}


GridPlottingAttributes::~GridPlottingAttributes()
{

}


void GridPlottingAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(2);
	int i = 0;
	prefix[i++] = "map";
	prefix[i++] = "map_grid";
	
	setAttribute(prefix, "map_grid_thickness", thickness_, params);
	setAttribute(prefix, "map_grid_frame", grid_frame_, params);
	setAttribute(prefix, "map_grid_frame_thickness", grid_frame_thickness_, params);
	
	setAttribute(prefix, "map_grid_line_style", style_, params);
	setMember(prefix, "map_grid_colour", colour_, params);
	setAttribute(prefix, "map_grid_frame_line_style", grid_frame_style_, params);
	setMember(prefix, "map_grid_frame_colour", grid_frame_colour_, params);
	
}

void GridPlottingAttributes::copy(const GridPlottingAttributes& other)
{
	thickness_ = other.thickness_;
	grid_frame_ = other.grid_frame_;
	grid_frame_thickness_ = other.grid_frame_thickness_;
	style_ = other.style_;
	colour_ = unique_ptr<Colour>(other.colour_->clone());
	grid_frame_style_ = other.grid_frame_style_;
	grid_frame_colour_ = unique_ptr<Colour>(other.grid_frame_colour_->clone());
	
}


bool GridPlottingAttributes::accept(const string& node)
{

	if ( magCompare(node, "grid")  )
		return true;
	
	return false;
}

void GridPlottingAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "grid")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void GridPlottingAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " thickness = " <<  thickness_;
	out << " grid_frame = " <<  grid_frame_;
	out << " grid_frame_thickness = " <<  grid_frame_thickness_;
	out << " style = " <<  style_;
	out << " colour = " <<  *colour_;
	out << " grid_frame_style = " <<  grid_frame_style_;
	out << " grid_frame_colour = " <<  *grid_frame_colour_;
	
	out << "]" << "\n";
}

void GridPlottingAttributes::toxml(ostream& out)  const
{
	out <<  "\"grid\"";
	out << ", \"map_grid_thickness\":";
	niceprint(out,thickness_);
	out << ", \"map_grid_frame\":";
	niceprint(out,grid_frame_);
	out << ", \"map_grid_frame_thickness\":";
	niceprint(out,grid_frame_thickness_);
	out << ", \"map_grid_line_style\":";
	niceprint(out, style_);
	out << ", \"map_grid_colour\":";
	niceprint(out, *colour_);
	out << ", \"map_grid_frame_line_style\":";
	niceprint(out, grid_frame_style_);
	out << ", \"map_grid_frame_colour\":";
	niceprint(out, *grid_frame_colour_);
	
}

static MagicsParameter<int> map_grid_thickness("map_grid_thickness", 1);
static MagicsParameter<string> map_grid_frame("map_grid_frame", "off");
static MagicsParameter<int> map_grid_frame_thickness("map_grid_frame_thickness", 1);
static MagicsParameter<string> map_grid_line_style("map_grid_line_style", "solid");
static MagicsParameter<string> map_grid_colour("map_grid_colour", "black");
static MagicsParameter<string> map_grid_frame_line_style("map_grid_frame_line_style", "solid");
static MagicsParameter<string> map_grid_frame_colour("map_grid_frame_colour", "black");

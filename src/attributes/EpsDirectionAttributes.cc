
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file EpsDirectionAttributes.h
    \\brief Definition of EpsDirection Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "EpsDirectionAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

EpsDirectionAttributes::EpsDirectionAttributes():
	keyword_(ParameterManager::getString("eps_direction_keyword")),
	line_thickness_(ParameterManager::getInt("eps_direction_line_thickness"))
	,
	line_colour_(MagTranslator<string, Colour>().magics("eps_direction_line_colour")),
	line_style_(MagTranslator<string, LineStyle>().magics("eps_direction_line_style"))
	
{
}


EpsDirectionAttributes::~EpsDirectionAttributes()
{

}


void EpsDirectionAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(2);
	int i = 0;
	prefix[i++] = "eps";
	prefix[i++] = "eps_direction";
	
	setAttribute(prefix, "eps_direction_keyword", keyword_, params);
	setAttribute(prefix, "eps_direction_line_thickness", line_thickness_, params);
	
	setMember(prefix, "eps_direction_line_colour", line_colour_, params);
	setAttribute(prefix, "eps_direction_line_style", line_style_, params);
	
}

void EpsDirectionAttributes::copy(const EpsDirectionAttributes& other)
{
	keyword_ = other.keyword_;
	line_thickness_ = other.line_thickness_;
	line_colour_ = unique_ptr<Colour>(other.line_colour_->clone());
	line_style_ = other.line_style_;
	
}


bool EpsDirectionAttributes::accept(const string& node)
{

	if ( magCompare(node, "epsdirection")  )
		return true;
	
	return false;
}

void EpsDirectionAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "epsdirection")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void EpsDirectionAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " keyword = " <<  keyword_;
	out << " line_thickness = " <<  line_thickness_;
	out << " line_colour = " <<  *line_colour_;
	out << " line_style = " <<  line_style_;
	
	out << "]" << "\n";
}

void EpsDirectionAttributes::toxml(ostream& out)  const
{
	out <<  "\"epsdirection\"";
	out << ", \"eps_direction_keyword\":";
	niceprint(out,keyword_);
	out << ", \"eps_direction_line_thickness\":";
	niceprint(out,line_thickness_);
	out << ", \"eps_direction_line_colour\":";
	niceprint(out, *line_colour_);
	out << ", \"eps_direction_line_style\":";
	niceprint(out, line_style_);
	
}

static MagicsParameter<string> eps_direction_keyword("eps_direction_keyword", "forecast");
static MagicsParameter<int> eps_direction_line_thickness("eps_direction_line_thickness", 1);
static MagicsParameter<string> eps_direction_line_colour("eps_direction_line_colour", "red");
static MagicsParameter<string> eps_direction_line_style("eps_direction_line_style", "solid");

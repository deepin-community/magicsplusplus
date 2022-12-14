
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file HiLoTextAttributes.h
    \\brief Definition of HiLoText Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "HiLoTextAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

HiLoTextAttributes::HiLoTextAttributes():
	hi_text_(ParameterManager::getString("contour_hi_text")),
	lo_text_(ParameterManager::getString("contour_lo_text")),
	blanking_(ParameterManager::getBool("contour_hilo_blanking"))
	
	
{
}


HiLoTextAttributes::~HiLoTextAttributes()
{

}


void HiLoTextAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "contour";
	
	setAttribute(prefix, "contour_hi_text", hi_text_, params);
	setAttribute(prefix, "contour_lo_text", lo_text_, params);
	setAttribute(prefix, "contour_hilo_blanking", blanking_, params);
	
	
}

void HiLoTextAttributes::copy(const HiLoTextAttributes& other)
{
	hi_text_ = other.hi_text_;
	lo_text_ = other.lo_text_;
	blanking_ = other.blanking_;
	
}


bool HiLoTextAttributes::accept(const string& node)
{

	if ( magCompare(node, "text")  )
		return true;
	
	return false;
}

void HiLoTextAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "text")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void HiLoTextAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " hi_text = " <<  hi_text_;
	out << " lo_text = " <<  lo_text_;
	out << " blanking = " <<  blanking_;
	
	out << "]" << "\n";
}

void HiLoTextAttributes::toxml(ostream& out)  const
{
	out <<  "\"text\"";
	out << ", \"contour_hi_text\":";
	niceprint(out,hi_text_);
	out << ", \"contour_lo_text\":";
	niceprint(out,lo_text_);
	out << ", \"contour_hilo_blanking\":";
	niceprint(out,blanking_);
	
}

static MagicsParameter<string> contour_hi_text("contour_hi_text", "H");
static MagicsParameter<string> contour_lo_text("contour_lo_text", "L");
static MagicsParameter<string> contour_hilo_blanking("contour_hilo_blanking", "off");

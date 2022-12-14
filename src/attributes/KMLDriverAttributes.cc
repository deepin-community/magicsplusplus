
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file KMLDriverAttributes.h
    \\brief Definition of KMLDriver Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "KMLDriverAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

KMLDriverAttributes::KMLDriverAttributes():
	kmz_(ParameterManager::getBool("kml_kmz")),
	description_(ParameterManager::getString("kml_description")),
	author_(ParameterManager::getString("kml_author")),
	link_(ParameterManager::getString("kml_link")),
	height_(ParameterManager::getDouble("kml_height")),
	latitude_(ParameterManager::getDouble("kml_latitude")),
	longitude_(ParameterManager::getDouble("kml_longitude")),
	transparency_(ParameterManager::getInt("kml_transparency")),
	tilt_(ParameterManager::getInt("kml_tilt")),
	range_(ParameterManager::getInt("kml_range")),
	coastlines_(ParameterManager::getBool("kml_coastlines"))
	
	
{
}


KMLDriverAttributes::~KMLDriverAttributes()
{

}


void KMLDriverAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "kml";
	
	setAttribute(prefix, "kml_kmz", kmz_, params);
	setAttribute(prefix, "kml_description", description_, params);
	setAttribute(prefix, "kml_author", author_, params);
	setAttribute(prefix, "kml_link", link_, params);
	setAttribute(prefix, "kml_height", height_, params);
	setAttribute(prefix, "kml_latitude", latitude_, params);
	setAttribute(prefix, "kml_longitude", longitude_, params);
	setAttribute(prefix, "kml_transparency", transparency_, params);
	setAttribute(prefix, "kml_tilt", tilt_, params);
	setAttribute(prefix, "kml_range", range_, params);
	setAttribute(prefix, "kml_coastlines", coastlines_, params);
	
	
}

void KMLDriverAttributes::copy(const KMLDriverAttributes& other)
{
	kmz_ = other.kmz_;
	description_ = other.description_;
	author_ = other.author_;
	link_ = other.link_;
	height_ = other.height_;
	latitude_ = other.latitude_;
	longitude_ = other.longitude_;
	transparency_ = other.transparency_;
	tilt_ = other.tilt_;
	range_ = other.range_;
	coastlines_ = other.coastlines_;
	
}


bool KMLDriverAttributes::accept(const string& node)
{

	if ( magCompare(node, "kml")  )
		return true;
	
	return false;
}

void KMLDriverAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "kml")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void KMLDriverAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " kmz = " <<  kmz_;
	out << " description = " <<  description_;
	out << " author = " <<  author_;
	out << " link = " <<  link_;
	out << " height = " <<  height_;
	out << " latitude = " <<  latitude_;
	out << " longitude = " <<  longitude_;
	out << " transparency = " <<  transparency_;
	out << " tilt = " <<  tilt_;
	out << " range = " <<  range_;
	out << " coastlines = " <<  coastlines_;
	
	out << "]" << "\n";
}

void KMLDriverAttributes::toxml(ostream& out)  const
{
	out <<  "\"kml\"";
	out << ", \"kml_kmz\":";
	niceprint(out,kmz_);
	out << ", \"kml_description\":";
	niceprint(out,description_);
	out << ", \"kml_author\":";
	niceprint(out,author_);
	out << ", \"kml_link\":";
	niceprint(out,link_);
	out << ", \"kml_height\":";
	niceprint(out,height_);
	out << ", \"kml_latitude\":";
	niceprint(out,latitude_);
	out << ", \"kml_longitude\":";
	niceprint(out,longitude_);
	out << ", \"kml_transparency\":";
	niceprint(out,transparency_);
	out << ", \"kml_tilt\":";
	niceprint(out,tilt_);
	out << ", \"kml_range\":";
	niceprint(out,range_);
	out << ", \"kml_coastlines\":";
	niceprint(out,coastlines_);
	
}

static MagicsParameter<string> kml_kmz("kml_kmz", "on");
static MagicsParameter<string> kml_description("kml_description", "Generated by Magics");
static MagicsParameter<string> kml_author("kml_author", "");
static MagicsParameter<string> kml_link("kml_link", "");
static MagicsParameter<double> kml_height("kml_height", 5.0);
static MagicsParameter<double> kml_latitude("kml_latitude", 40.0);
static MagicsParameter<double> kml_longitude("kml_longitude", 0.0);
static MagicsParameter<int> kml_transparency("kml_transparency", 100);
static MagicsParameter<int> kml_tilt("kml_tilt", 0);
static MagicsParameter<int> kml_range("kml_range", 6000);
static MagicsParameter<string> kml_coastlines("kml_coastlines", "off");

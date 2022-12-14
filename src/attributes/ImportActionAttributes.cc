
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file ImportActionAttributes.h
    \\brief Definition of ImportAction Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "ImportActionAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

ImportActionAttributes::ImportActionAttributes():
	path_(ParameterManager::getString("import_file_name")),
	valid_time_(ParameterManager::getString("import_valid_time")),
	service_(ParameterManager::getString("service")),
	url_(ParameterManager::getString("url")),
	short_name_(ParameterManager::getString("layers"))
	
	
{
}


ImportActionAttributes::~ImportActionAttributes()
{

}


void ImportActionAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "import";
	
	setAttribute(prefix, "import_file_name", path_, params);
	setAttribute(prefix, "import_valid_time", valid_time_, params);
	setAttribute(prefix, "service", service_, params);
	setAttribute(prefix, "url", url_, params);
	setAttribute(prefix, "layers", short_name_, params);
	
	
}

void ImportActionAttributes::copy(const ImportActionAttributes& other)
{
	path_ = other.path_;
	valid_time_ = other.valid_time_;
	service_ = other.service_;
	url_ = other.url_;
	short_name_ = other.short_name_;
	
}


bool ImportActionAttributes::accept(const string& node)
{

	if ( magCompare(node, "import")  )
		return true;
	
	return false;
}

void ImportActionAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "import")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void ImportActionAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " path = " <<  path_;
	out << " valid_time = " <<  valid_time_;
	out << " service = " <<  service_;
	out << " url = " <<  url_;
	out << " short_name = " <<  short_name_;
	
	out << "]" << "\n";
}

void ImportActionAttributes::toxml(ostream& out)  const
{
	out <<  "\"import\"";
	out << ", \"import_file_name\":";
	niceprint(out,path_);
	out << ", \"import_valid_time\":";
	niceprint(out,valid_time_);
	out << ", \"service\":";
	niceprint(out,service_);
	out << ", \"url\":";
	niceprint(out,url_);
	out << ", \"layers\":";
	niceprint(out,short_name_);
	
}

static MagicsParameter<string> import_file_name("import_file_name", "");
static MagicsParameter<string> import_valid_time("import_valid_time", "");
static MagicsParameter<string> service("service", "");
static MagicsParameter<string> url("url", "");
static MagicsParameter<string> layers("layers", "");


/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file EfiDataDecoderAttributes.h
    \\brief Definition of EfiDataDecoder Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "EfiDataDecoderAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

EfiDataDecoderAttributes::EfiDataDecoderAttributes():
	path_(ParameterManager::getString("efi_filename")),
	record_(ParameterManager::getInt("efi_record"))
	
	
{
}


EfiDataDecoderAttributes::~EfiDataDecoderAttributes()
{

}


void EfiDataDecoderAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "";
	
	setAttribute(prefix, "efi_filename", path_, params);
	setAttribute(prefix, "efi_record", record_, params);
	
	
}

void EfiDataDecoderAttributes::copy(const EfiDataDecoderAttributes& other)
{
	path_ = other.path_;
	record_ = other.record_;
	
}


bool EfiDataDecoderAttributes::accept(const string& node)
{

	if ( magCompare(node, "")  )
		return true;
	
	return false;
}

void EfiDataDecoderAttributes::set(const XmlNode& node)
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

void EfiDataDecoderAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " path = " <<  path_;
	out << " record = " <<  record_;
	
	out << "]" << "\n";
}

void EfiDataDecoderAttributes::toxml(ostream& out)  const
{
	out <<  "\"\"";
	out << ", \"efi_filename\":";
	niceprint(out,path_);
	out << ", \"efi_record\":";
	niceprint(out,record_);
	
}

static MagicsParameter<string> efi_filename("efi_filename", "");
static MagicsParameter<int> efi_record("efi_record", 0);

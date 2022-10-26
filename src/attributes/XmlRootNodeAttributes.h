
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 * In applying this licence, ECMWF does not waive the privileges and immunities 
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileXmlRootNodeAttributes.h
    \brief Definition of XmlRootNode Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/
   

#ifndef XmlRootNodeAttributes_H
#define XmlRootNodeAttributes_H

#include "magics.h"
#include "Colour.h"
namespace magics {

class XmlNode;
class XmlRootNodeAttributes 
{
public:
//  --  constructor
    XmlRootNodeAttributes();
    
//  --  destructor
    virtual ~XmlRootNodeAttributes();
    
    virtual void set(const std::map<std::string, std::string>&);
    virtual void set(const XmlNode&);
    virtual void copy(const XmlRootNodeAttributes&);
    virtual bool accept(const std::string&);

    void setTag(const std::string& tag) { tag_ = tag; }

public:
	//  --  method
	virtual void print(std::ostream&) const;
	virtual void toxml(std::ostream& out) const;
	//  --  members:
	string tag_;
	string format_;
	string orientation_;
	double width_;
	double height_;
	bool border_;
	int border_thickness_;
	string application_;
	unique_ptr<Colour> border_colour_;
	LineStyle border_style_;
	 

private:
	friend ostream& operator<<(ostream& s,const XmlRootNodeAttributes& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif


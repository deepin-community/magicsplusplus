
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 * In applying this licence, ECMWF does not waive the privileges and immunities 
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileBoxPlotWhiskerBoxAttributes.h
    \brief Definition of BoxPlotWhiskerBox Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/
   

#ifndef BoxPlotWhiskerBoxAttributes_H
#define BoxPlotWhiskerBoxAttributes_H

#include "magics.h"
#include "Colour.h"
#include "BoxPlotBasicItem.h"
namespace magics {

class XmlNode;
class BoxPlotWhiskerBoxAttributes 
{
public:
//  --  constructor
    BoxPlotWhiskerBoxAttributes();
    
//  --  destructor
    virtual ~BoxPlotWhiskerBoxAttributes();
    
    virtual void set(const std::map<std::string, std::string>&);
    virtual void set(const XmlNode&);
    virtual void copy(const BoxPlotWhiskerBoxAttributes&);
    virtual bool accept(const std::string&);

    void setTag(const std::string& tag) { tag_ = tag; }

public:
	//  --  method
	virtual void print(std::ostream&) const;
	virtual void toxml(std::ostream& out) const;
	//  --  members:
	string tag_;
	double width_;
	unique_ptr<Colour> colour_;
	unique_ptr<NoBoxPlotWhiskerBorder> border_;
	 

private:
	friend ostream& operator<<(ostream& s,const BoxPlotWhiskerBoxAttributes& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif



/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 * In applying this licence, ECMWF does not waive the privileges and immunities 
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileImageCalculateColourTechniqueAttributes.h
    \brief Definition of ImageCalculateColourTechnique Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/
   

#ifndef ImageCalculateColourTechniqueAttributes_H
#define ImageCalculateColourTechniqueAttributes_H

#include "magics.h"
#include "ColourTableDefinitionComputeInterface.h"
#include "Colour.h"
namespace magics {

class XmlNode;
class ImageCalculateColourTechniqueAttributes :
    public ColourTableDefinitionComputeInterface
{
public:
//  --  constructor
    ImageCalculateColourTechniqueAttributes();
    
//  --  destructor
    virtual ~ImageCalculateColourTechniqueAttributes();
    
    virtual void set(const std::map<std::string, std::string>&);
    virtual void set(const XmlNode&);
    virtual void copy(const ImageCalculateColourTechniqueAttributes&);
    virtual bool accept(const std::string&);

    void setTag(const std::string& tag) { tag_ = tag; }

public:
	//  --  method
	virtual void print(std::ostream&) const;
	virtual void toxml(std::ostream& out) const;
	//  --  members:
	string tag_;
	string direction_;
	unique_ptr<Colour> max_;
	unique_ptr<Colour> min_;
	 

private:
	friend ostream& operator<<(ostream& s,const ImageCalculateColourTechniqueAttributes& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif


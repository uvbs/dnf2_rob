#ifndef _ALTOVA_INCLUDED_sap_ALTOVA_xs_ALTOVA_CnonNegativeInteger
#define _ALTOVA_INCLUDED_sap_ALTOVA_xs_ALTOVA_CnonNegativeInteger



namespace sap
{

namespace xs
{	

class CnonNegativeInteger : public TypeBase
{
public:
	sap_EXPORT CnonNegativeInteger(xercesc::DOMNode* const& init);
	sap_EXPORT CnonNegativeInteger(CnonNegativeInteger const& init);
	void operator=(CnonNegativeInteger const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CnonNegativeInteger); }
	void operator= (const unsigned __int64& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator unsigned __int64()
	{
		return CastAs<unsigned __int64 >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace sap

#endif // _ALTOVA_INCLUDED_sap_ALTOVA_xs_ALTOVA_CnonNegativeInteger

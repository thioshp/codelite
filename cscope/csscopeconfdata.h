#ifndef __csscopeconfdata__
#define __csscopeconfdata__

#include "serialized_object.h"
#include <wx/string.h>

class CSscopeConfData : public SerializedObject
{
	wxString m_scanScope;

public:
	CSscopeConfData();
	virtual ~CSscopeConfData();

public:
	virtual void DeSerialize(Archive &arch);
	virtual void Serialize(Archive &arch);

	void SetScanScope(const wxString& scanScope) {
		this->m_scanScope = scanScope;
	}
	const wxString& GetScanScope() const {
		return m_scanScope;
	}
};
#endif // __csscopeconfdata__

/* --------------------------------------------------------------------------------------------
 *  ExeCoffSky for BeOS
 *  (C) 2001 �Ƃ悵��
 *  $Id: IUnknown.h,v 1.1 2003/05/01 02:43:55 toyoshim Exp $
 * --------------------------------------------------------------------------------------------
 *  [IUnknown.h]
 * -------------------------------------------------------------------------------------------- */

#if !defined(__IUnknown_h__)
#	define	__IUnknown_h__

#	if !defined(__Common_h__)
#		include "Common.h"
#	endif	// !defined(__Common_h__)

#	if !defined(__COM_h__)
#		include "COM.h"
#	endif	// !defined(__COM_h__)

#	if defined(__cplusplus)
extern "C" {
#	endif	// defined(__cplusplus)

interface IUnknown {
	BEGIN_INTERFACE
	virtual HRESULT STDMETHODCALLTYPE QueryInterface(
		IN REFIID riid,
		OUT LPVOID *ppvObject);
	virtual ULONG STDMETHODCALLTYPE AddRef(
		VOID);
	virtual ULONG STDMETHODCALLTYPE Release(
		VOID);
	END_INTERFACE
};


#	if !defined(__IUnknown__)
#		define	__IUnknown__
#	endif	// !defined(__IUnknown__)

#	if defined(__cplusplus)
};
#	endif	// defined(__cplusplus)

#endif	// !defined(__IUnknown_h__)

/* --------------------------------------------------------------------------------------------
 *  ExeCoffSky for BeOS
 *  (C) 2000 �Ƃ悵��
 *  $Id: Tls.h,v 1.1 2003/05/01 02:57:17 toyoshim Exp $
 * --------------------------------------------------------------------------------------------
 *  [Tls.h]
 * �C���f�b�N�X�̓A�v���P�[�V�����O���[�o���A�C���f�b�N�X�ɑΉ�����l��
 * �X���b�h���ɂ��ꂼ��ʂ̒l����`�ł���B
 * -------------------------------------------------------------------------------------------- */

#if !defined(__Tls_h__)
#	define	__Tls_h__

#	if !defined(__Common_h__)
#		include "Common.h"
#	endif	// !defined(__Common_h__)

class Tls {
private:
#	define	TLS_MAX	256
	static bool used[TLS_MAX];
	static int last_index;
	static bool initialized;
	static BLocker lock;
	LPVOID params[TLS_MAX];
public:
	Tls(void);
	static DWORD Allocate(void);
	BOOL SetValue(DWORD dwIndex, LPVOID lpValue);
	LPVOID GetValue(DWORD dwIndex);
	static BOOL Free(DWORD dwIndex);
private:
	static void Initialize(void);
	static void Lock(void) { lock.Lock(); };
	static void Unlock(void) { lock.Unlock(); };
};

#	if !defined(__Tls__)
#		define	__Tls__
#	endif	// !defined(__Tls__)

#	if defined(__cplusplus)
extern "C" {
#	endif	// defined(__cplusplus)

DWORD WINAPI TlsAlloc(VOID);
BOOL WINAPI TlsFree(DWORD dwTlsIndex);
LPVOID WINAPI TlsGetValue(DWORD dwTlsIndex);
BOOL WINAPI TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue);

#	if defined(__cplusplus)
};
#	endif	// defined(__cplusplus)

#endif	// !defined(__Tls_h__)

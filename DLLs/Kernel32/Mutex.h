/* --------------------------------------------------------------------------------------------
 *  ExeCoffSky for BeOS
 *  (C) 2001 �Ƃ悵��
 *  $Id: Mutex.h,v 1.1 2003/05/01 02:57:17 toyoshim Exp $
 * --------------------------------------------------------------------------------------------
 *  [Mutex.h]
 *   Mutex�I�u�W�F�N�g�B���O�͑��̃I�u�W�F�N�g�Ƌ�Ԃ����L���A�V�X�e���ň�ӁB
 *  ���łɍ쐬����Ă����ꍇ�ɂ��n���h���͖߂邪�ALastError�Ƃ���ERROR_ALREADY_EXIST��
 *  �ݒ肳���B���L���͑ҋ@�֐����g�����A�쐬���Ɏw�����Ď擾����B�J����Release�ɂ��
 *  �s���B�n���h����CloseHandle�ōs���B
 * -------------------------------------------------------------------------------------------- */

#if !defined(__Mutex_h__)
#	define	__Mutex_h__

#	if !defined(__Common_h__)
#		include "Common.h"
#	endif	// !defined(__Common_h__)

#	if !defined(__Win32Structures_h__)
#		include "Win32Structures.h"
#	endif	// !defined(__Win32Structures_h__)

#	if !defined(__Handle_h__)
#		include "Handle.h"
#	endif	// !defined(__Handle_h__)

#	define	MUTEX_MAGIC	'_MTX'

class Mutex: public HandleObject {
public:
	DWORD magic;
private:
	DWORD access;
	BLocker lock;
public:
	Mutex(void);
	~Mutex(void);
	
	bool Wait(DWORD timeout = INFINITE);
	
	bool Create(LPCSTR lpName, BOOL bInitialOwner);
	DWORD SetAccess(DWORD dwAccess);
	BOOL Aquire(void);
	BOOL Release(void);

private:
	inline void Lock(void) { lock.Lock(); };
	inline void Unlock(void) { lock.Unlock(); };

public:
	static Mutex *HandleToMutex(HANDLE hMutex);
};

#	if !defined(__Mutex__)
#		define	__Mutex__
#	endif	// !defined(__Mutex__)

static HANDLE CreateMutexU(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName);
static HANDLE OpenMutexU(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCSTR lpName);

#	if defined(__cplusplus)
extern "C" {
#	endif	// defined(__cplusplus)

HANDLE WINAPI CreateMutexA(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName);
HANDLE WINAPI CreateMutexW(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCWSTR lpName);
HANDLE WINAPI OpenMutexA(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCSTR lpName);
HANDLE WINAPI OpenMutexW(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCWSTR lpName);
BOOL WINAPI ReleaseMutex(HANDLE hMutex);

#	if defined(__cplusplus)
};
#	endif	// defined(__cplusplus)

#endif	// !defined(__Mutex_h__)

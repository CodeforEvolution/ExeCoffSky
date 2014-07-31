/* --------------------------------------------------------------------------------------------
 *  ExeCoffSky for BeOS
 *  (C) 2000 �Ƃ悵��
 *  $Id: Win32String.h,v 1.1 2003/05/01 02:43:55 toyoshim Exp $
 * --------------------------------------------------------------------------------------------
 *  [Win32String.h]
 *  UTF8,ANSI,Unicode�Ԃ̕����R�[�h�̑��ݕϊ����s���BANSI�R�[�h�Ƃ���
 * �ǂ̃G���R�[�f�B���O���̗p���邩�́AWin32�̕W��CodePage�̐ݒ�ɏ]���B
 * �i���݂�Shift_JIS�ɌŒ�j
 * Length�ɂ��ẮAANSI,Unicode�ł͕�������Ԃ��BUTF8�ł̓o�C�g���B
 * -------------------------------------------------------------------------------------------- */

#if !defined(__Win32String_h__)
#	define	__Win32String_h__

#	if !defined(__Common_h__)
#		include "Common.h"
#	endif	// !defined(__Common_h__)

class Win32String {
	static BLocker lock;
	int sourcetype;
	char *buf_a;
	short *buf_w;
	char *buf_u;
	size_t len_a;
	size_t len_w;
	size_t len_u;
public:
	Win32String(VOID);
	Win32String(LPCSTR lpString);	// ANSI
	Win32String(LPCWSTR lpString);	// Unicode
	~Win32String(VOID);
	
	bool SetToA(LPCSTR lpString);
	bool SetToA(LPCSTR lpString, UINT uSize);
	bool SetToW(LPCWSTR lpString);
	bool SetToW(LPCWSTR lpString, UINT uSize);
	bool SetToU(LPCSTR lpString);
	bool SetToU(LPCSTR lpString, UINT uSize);
	
	LPCSTR StringA(VOID);
	LPCWSTR StringW(VOID);
	LPCSTR StringU(VOID);

	size_t LengthA(VOID);
	size_t LengthW(VOID);
	size_t LengthU(VOID);

	static UINT SetCodePage(UINT CodePage);
	static UINT GetCodePage(VOID);

	static size_t strlenW(const short *s);
	static short *strcpyW(short *dest, const short *src);
	static short *strdupW(const short *src);
	static int strncasecmpW(const short *s1, const short *s2, size_t n);
	static inline void Lock(void) { lock.Lock(); };
	static inline void Unlock(void) { lock.Unlock(); };
private:
	void MakeEmpty(void);

	void AtoW(void);
	void AtoU(void);
	void WtoA(void);
	void WtoU(void);
	void UtoA(void);
	void UtoW(void);
};

#	if !defined(__Win32String__)
#		define	__Win32String__
#	endif	// !defined(__Win32String__)

#endif	// !defined(__Win32String_h__)

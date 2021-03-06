#ifndef X_H
#define X_H
#include "stdafx.h"
#include "Xglobals.h"
#include "clock.h"
#define X_VERSION "1.0"
int _tmain(int argc, const wchar_t *argv[]);
extern globalsdefs globals;
void SetTitleBarText();
void Initialize();
inline bool ShouldRunFrame(float dt);
__forceinline void RunFrame();
void HandleDebugKeys();
//void RedXOverlayLoop();
void AsyncSlowLoop();
void AsyncVariableLoop();
void AsyncFastLoop();
inline void GetOverlayDivider();
inline void GetResolutionDivider();
void GetWindowDivider();
int TogglePause();
inline double GetCurTime() {
	return globals.UseRemainderTimer ? globals.realtime : Plat_FloatTime();
}
void DEBUG_PRINT(const char* string, ...);
#endif
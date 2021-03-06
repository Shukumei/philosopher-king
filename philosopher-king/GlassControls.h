#pragma once
#include <thread>

#ifdef WIN32
	#include <winsock2.h>
	#include <ws2bth.h>
#endif

class GlassControls
{
private:
	float pitch;
	float roll;
	std::thread *btReadThread;
	float pitchZero;
	bool fireLasers;
	bool shouldToggleTargetingValue;

	void initiateBluetooth();

#ifdef WIN32
	ULONG bluetoothLoop(SOCKADDR_BTH RemoteAddr);
#endif

public:
	GlassControls();
	~GlassControls();

	void connectToGlass();
	void calibratePitch();

	float getPitch();
	float getRoll();
	
	bool getLasersFired();
	void resetLasers();

	bool shouldToggleTargeting();
	void resetToggleTargeting();

	float getInterpolatedX();
	float getInterpolatedY();
};


#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Boundary
struct Boundary_t2244299850;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerController::speed
	float ___speed_2;
	// Boundary PlayerController::boundary
	Boundary_t2244299850 * ___boundary_3;
	// System.Single PlayerController::tilt
	float ___tilt_4;
	// UnityEngine.GameObject PlayerController::shot
	GameObject_t3674682005 * ___shot_5;
	// UnityEngine.Transform PlayerController::shotSpawn
	Transform_t1659122786 * ___shotSpawn_6;
	// System.Single PlayerController::fireRate
	float ___fireRate_7;
	// System.Single PlayerController::nextFire
	float ___nextFire_8;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t3346577219 * ___rb_9;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_boundary_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___boundary_3)); }
	inline Boundary_t2244299850 * get_boundary_3() const { return ___boundary_3; }
	inline Boundary_t2244299850 ** get_address_of_boundary_3() { return &___boundary_3; }
	inline void set_boundary_3(Boundary_t2244299850 * value)
	{
		___boundary_3 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_3, value);
	}

	inline static int32_t get_offset_of_tilt_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___tilt_4)); }
	inline float get_tilt_4() const { return ___tilt_4; }
	inline float* get_address_of_tilt_4() { return &___tilt_4; }
	inline void set_tilt_4(float value)
	{
		___tilt_4 = value;
	}

	inline static int32_t get_offset_of_shot_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___shot_5)); }
	inline GameObject_t3674682005 * get_shot_5() const { return ___shot_5; }
	inline GameObject_t3674682005 ** get_address_of_shot_5() { return &___shot_5; }
	inline void set_shot_5(GameObject_t3674682005 * value)
	{
		___shot_5 = value;
		Il2CppCodeGenWriteBarrier(&___shot_5, value);
	}

	inline static int32_t get_offset_of_shotSpawn_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___shotSpawn_6)); }
	inline Transform_t1659122786 * get_shotSpawn_6() const { return ___shotSpawn_6; }
	inline Transform_t1659122786 ** get_address_of_shotSpawn_6() { return &___shotSpawn_6; }
	inline void set_shotSpawn_6(Transform_t1659122786 * value)
	{
		___shotSpawn_6 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_6, value);
	}

	inline static int32_t get_offset_of_fireRate_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___fireRate_7)); }
	inline float get_fireRate_7() const { return ___fireRate_7; }
	inline float* get_address_of_fireRate_7() { return &___fireRate_7; }
	inline void set_fireRate_7(float value)
	{
		___fireRate_7 = value;
	}

	inline static int32_t get_offset_of_nextFire_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___nextFire_8)); }
	inline float get_nextFire_8() const { return ___nextFire_8; }
	inline float* get_address_of_nextFire_8() { return &___nextFire_8; }
	inline void set_nextFire_8(float value)
	{
		___nextFire_8 = value;
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_9)); }
	inline Rigidbody_t3346577219 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody_t3346577219 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier(&___rb_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

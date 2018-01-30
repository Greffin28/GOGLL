#pragma once

#ifdef _WIN32
	#ifdef GLWL_EXPORTS
		#define DLLExports __declspec(dllexport)
	#else
		#define DLLExports __declspec(dllimport)
	#endif
#else
	#define DLLExports
#endif

namespace glwl {
	class DLLExports Vector4 {
	private:
		float values[4];
	public:
		Vector4() {};
		Vector4(float f);
		Vector4(float x, float y, float z, float w = 1.0f);

		void setValue(int i, float val);
		float getValue(int i);
		float * getData();

		static float dot(Vector4 & lvec, Vector4 & rvec);

		Vector4 operator+();
		Vector4 operator-();

		Vector4 operator+(Vector4 & rvec);
		Vector4 operator-(Vector4 & rvec);

		Vector4 & operator+=(Vector4 & rvec);
		Vector4 & operator-=(Vector4 & rvec);
	};
}

#endif

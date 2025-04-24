#pragma once
#include <array> // std::array, fixed size vector.
#include <string>
#include <cmath>
namespace math {
	// typedef for vector 2
	using vec2 = std::array<float, 2>;
	// constructs vector 2 from arguments
	inline vec2 vec(float x, float y) { return vec2({ x, y }); }

	// typedef for vector 3
	using vec3 = std::array<float, 3>;
	// constructs vector 3 from arguments
	inline vec3 vec(float x, float y, float z) { return vec3({ x, y, z }); }

	// typedef for vector 4 
	using vec4 = std::array<float, 4>;
	// constructs vector 4 from arguments
	inline vec4 vec(float x, float y, float z, float w) { return vec4({ x, y, z, w }); }

	// typedef for 3x3 (row) matrix
	using mat3 = std::array<vec3, 3>;
	// constructs matrix 3 from 3 vector arguments (rows)
	inline mat3 mat(const vec3& r0, const vec3& r1, const vec3& r2) { return mat3({ r0, r1, r2 }); }

	// typedef for 4x4 (row) matrix
	using mat4 = std::array<vec4, 4>;
	// constructs matrix 4 from 4 vector arguments (rows)
	inline mat4 mat(const vec4& r0, const vec4& r1, const vec4& r2, const vec4& r3) { return mat4({ r0, r1, r2, r3 }); }

	// to_string utility functions:
	// vector to string
	template<typename t, int n>
	inline std::string to_string(const std::array<t, n>& v) {
		std::string res = "(";
		for (size_t i = 0; i < v.size(); ++i) {
			res += std::to_string(v[i]);
			if ((i + 1) != v.size()) {
				res += " ";
			}
		}
		res += ")";
		return res;
	}

	// matrix to string
	template<typename t, int n>
	inline std::string to_string(const std::array<std::array<t, n>, n>& m) {
		std::string res = "(";
		for (size_t i = 0; i < m.size(); ++i) {
			res += to_string(m[i]);
			if ((i + 1) != m.size()) {
				res += " ";
			}
		}
		res += ")";
		return res;
	}


	//
	//
	// student todo: implement following functions to .cpp file:
	//

	// vector 2 operations:
	
	vec2 add(const vec2& lhs, const vec2& rhs);
	// substraction
	vec2 sub(const vec2& lhs, const vec2& rhs);
	// multiplication with scalar
	vec2 mul(const vec2& lhs, const float rhs);
	vec2 mul(const float lhs, const vec2& rhs);
	// division (by scalar)
	vec2 div(const vec2& lhs, float rhs);
	// dot product
	float dot(const vec2& lhs, const vec2& rhs);
	// cross product
	float cross(const vec2& lhs, const vec2& rhs);
	// vector length.
	float length(const vec2& vec);


	// vector 3 operations:
	// addition
	vec3 add(const vec3& lhs, const vec3& rhs);
	// substraction, multiplication with scalar, division(by scalar), dot product, cross product and vector length.
	vec3 sub(const vec3& lhs, const vec3& rhs);
	// multiplication with scalar
	vec3 mul(float lhs, const vec3& rhs);
	vec3 mul(const vec3& lhs, float rhs);
	// division (by scalar)
	vec3 div(const vec3& lhs, float rhs);
	// dot product
	float dot(const vec3& lhs, const vec3& rhs);
	// cross product
	vec3 cross(const vec3& lhs, const vec3& rhs);
	// vector length.
	float length(const vec3& vec);


	// vector 4 operations:
	// addition
	vec4 add(const vec4& lhs, const vec4& rhs);
	// substraction
	vec4 sub(const vec4& lhs, const vec4& rhs);
	// multiplication with scalar
	vec4 mul(float lhs, const vec4& rhs);
	vec4 mul(const vec4& lhs, float rhs);
	// division (by scalar)
	vec4 div(const vec4& lhs, float rhs);
	// dot product
	float dot(const vec4& lhs, const vec4& rhs);
	// vector length.
	float length(const vec4& vec);

	// matrix 3x3 operations:
	// determinant
	float det(const mat3& mat);
	// transpose matrix
	mat3 transpose(const mat3& mat);
	// inverse matrix
	mat3 inverse(const mat3& mat);
	// matrix - matrix multiplication
	mat3 mul(const mat3& lhs, const mat3& rhs);
	// matrix vector 2 multiplication (homogeneous coordinates)
	vec2 mul(const mat3& lhs, const vec2& rhs);
	// matrix vector 3 multiplication.
	vec3 mul(const mat3& lhs, const vec3& rhs);
	// scale matrix (each x and y can have different scale).
	mat3 scaling(const vec2& scale);
	// translation matrix
	mat3 translation(const vec2& position);
	// rotation around z axis, angle in radians
	mat3 rotation(float radians);

	// matrix 4x4 operations:
	// detarminant
	float det(const mat4& mat);
	// transpose matrix
	mat4 transpose(const mat4& mat);
	// inverse matrix
	mat4 inverse(const mat4& mat);
	// matrix - matrix multiplication
	mat4 mul(const mat4& lhs, const mat4& rhs);
	// matrix vector 3 multiplication (homogeneous coordinates)
	vec3 mul(const mat4& lhs, const vec3& rhs);
	// matrix vector 4 multiplication.
	vec4 mul(const mat4& lhs, const vec4& rhs);
	// uniform scale matrix (all x,y,z coordinates have same scale).
	mat4 scaling(float uniformscale);
	// scale matrix (each x, y and z can have different scale).
	mat4 scaling(const vec3& scale);
	// translation matrix
	mat4 translation(const vec3& position);
	// rotation around x axis, angle in radians
	mat4 rotationx(float radians);
	// rotation around y axis, angle in radians
	mat4 rotationy(float radians);
	// rotation around z axis, angle in radians
	mat4 rotationz(float radians);

	// converts radians to degrees.
	float degrees(float radians);

	// converts degrees to radians.
	float radians(float degrees);
}


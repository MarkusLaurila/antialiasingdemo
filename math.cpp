#include "include/math_make.h"
#include <stdexcept>
namespace math {
	float PII = 3.141592653589793238463;
		vec2 add(const vec2& lhs, const vec2& rhs) {
			vec2 x;
			x[0] = lhs[0] + rhs[0];
			x[1] = lhs[1] + rhs[1];
			return x;
		}
		vec2 sub(const vec2& lhs, const vec2& rhs) {
			vec2 x;
			x[0] = lhs[0] - rhs[0];
			x[1] = lhs[1] - rhs[1];
			return x;
		}
		vec2 mul(const float lhs,const vec2& rhs)
		{
			vec2 x;
			x[0] = rhs[0] * lhs;
			x[1] = rhs[1] * lhs;
			return x;
		}
		vec2 mul(const vec2& lhs, const float rhs)
		{
			vec2 x;
			x[0] = lhs[0] * rhs;
			x[1] = lhs[1] * rhs;
			return x;
		}
		
		vec2 div(const vec2& lhs, float rhs)
		{
			vec2 x;
			x[0] = lhs[0] / rhs;
			x[1] = lhs[1] / rhs;
			return x;
		}
		float dot(const vec2& lhs, const vec2& rhs)
		{
			float x;
			x = lhs[0] * rhs[0] + lhs[1] * rhs[1];
			return x;
		}
		float cross(const vec2& lhs, const vec2& rhs) {
			float x;
			x = sqrtf(pow(lhs[0], 2) * sqrtf(pow(rhs[0], 2)));
			x += sqrtf(pow(lhs[1], 2) * sqrtf(pow(rhs[1], 2)));
			return x;
		}
		float length(const vec2& vec)
		{
			float x;
			x = sqrtf(vec[0] * vec[0] + vec[1] * vec[1]);
			return x;
		}
		vec3 add(const vec3& lhs, const vec3& rhs)
		{
			vec3 x;

			x[0] = lhs[0] + rhs[0];
			x[1] = lhs[1] + rhs[1];
			x[2] = lhs[2] + rhs[2];

			return x;
		}
		// substraction, multiplication with scalar, division(by scalar), dot product, cross product and vector length.
		vec3 sub(const vec3& lhs, const vec3& rhs)
		{
			vec3 x;
			x[0] = lhs[0] - rhs[0];
			x[1] = lhs[1] - rhs[1];
			x[2] = lhs[2] - rhs[2];
			return x;

		}
		// multiplication with scalar
		vec3 mul(float lhs, const vec3& rhs)
		{
			vec3 x;
			x[0] = lhs * rhs[0];
			x[1] = lhs * rhs[1];
			x[2] = lhs * rhs[2];
			return x;
		}
		vec3 mul(const vec3& lhs, float rhs)
		{
			vec3 x;
			x[0] = lhs[0] * rhs;
			x[1] = lhs[1] * rhs;
			x[2] = lhs[2] * rhs;
			return x;
		}
		// division (by scalar)
		vec3 div(const vec3& lhs, float rhs)
		{
			vec3 x;
			x[0] = lhs[0] / rhs;
			x[1] = lhs[1] / rhs;
			x[2] = lhs[2] / rhs;
			return x;
		}
		// dot product
		float dot(const vec3& lhs, const vec3& rhs)
		{
			float x;
			x = lhs[0] * rhs[0] + lhs[1] * rhs[1] + lhs[2] * rhs[2];
			return x;
		}
		// cross product
		vec3 cross(const vec3& lhs, const vec3& rhs) {
			vec3 x;
			x[0] = sqrtf(pow(lhs[0], 2) * sqrtf(pow(rhs[0], 2)));
			x[1] = sqrtf(pow(lhs[1], 2) * sqrtf(pow(rhs[1], 2)));
			x[2] = sqrtf(pow(lhs[2], 2) * sqrtf(pow(rhs[2], 2)));
			return x;
		}
		// vector length.
		float length(const vec3& vec)
		{
			float x;

			x = sqrtf((vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2]));
			return x;
		}
		// vector 4 operations:
		// addition
		vec4 add(const vec4& lhs, const vec4& rhs)
		{
			vec4 x;

			x[0] = lhs[0] + rhs[0];
			x[1] = lhs[1] + rhs[1];
			x[2] = lhs[2] + rhs[2];
			x[3] = lhs[3] + rhs[3];

			return x;
		}
		// substraction
		vec4 sub(const vec4& lhs, const vec4& rhs)
		{
			vec4 x;

			x[0] = lhs[0] - rhs[0];
			x[1] = lhs[1] - rhs[1];
			x[2] = lhs[2] - rhs[2];
			x[3] = lhs[3] - rhs[3];

			return x;
		}
		// multiplication with scalar
		vec4 mul(float lhs, const vec4& rhs)
		{
			vec4 x;
			x[0] = lhs * rhs[0];
			x[1] = lhs * rhs[1];
			x[2] = lhs * rhs[2];
			x[3] = lhs * rhs[3];
			return x;
		}
		vec4 mul(const vec4& lhs, float rhs)
		{
			vec4 x;
			x[0] = lhs[0] * rhs;
			x[1] = lhs[1] * rhs;
			x[2] = lhs[2] * rhs;
			x[3] = lhs[3] * rhs;
			return x;
		}
		// division (by scalar)
		vec4 div(const vec4& lhs, float rhs)
		{
			vec4 x;
			x[0] = lhs[0] / rhs;
			x[1] = lhs[1] / rhs;
			x[2] = lhs[2] / rhs;
			x[3] = lhs[3] / rhs;
			return x;
		}
		// dot product
		float dot(const vec4& lhs, const vec4& rhs)
		{
			float x;
			x = lhs[0] * rhs[0] + lhs[1] * rhs[1] + lhs[2] * rhs[2] + lhs[3] * rhs[3];
			return x;
		}
		// vector length.
		float length(const vec4& vec)
		{
			float x;

			x = sqrtf((vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2] + vec[3] * vec[3]));
			return x;
		}
		float det(const mat3& mat)
		{
			
			
			float x
			  = mat[0][0] * (mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2])
			  + mat[0][1] * (mat[1][0] * mat[2][2] - mat[2][0] * mat[1][2])
			  + mat[0][2] * (mat[1][0] * mat[2][1] - mat[2][0] * mat[1][1]);
			return x;
		}
		mat3 transpose(const mat3& mat)
		{
			mat3 trans_mat;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					trans_mat[j][i] = mat[i][j];
				}
			}
			return trans_mat;
		}
		mat3 inverse(const mat3& mat)
		{
		float determinant;
		determinant = det(mat);
		if (determinant == 0)
		{
			std::runtime_error error("The matrix is singular, it cannot be inverted!");
			return mat3();
		}
		mat3 inverse;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				inverse[i][j] = ((mat[(j + 1) % 3][(i + 1) % 3] * mat[(j + 2) % 3]
					[(i + 2) % 3]) - (mat[(j + 1) % 3][(i + 2) % 3] * mat[(j + 2) % 3][(i + 1) % 3])) / determinant;

			}
		}
			return inverse;
		}
		mat3 mul(const mat3& lhs, const mat3& rhs)
		{
			mat3 result;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					for (int k = 0; k < 3; k++)
					{
						result[i][j] = lhs[i][k] * rhs[k][j];
					}
				}
			}
			return result;
		}
		vec2 mul(const mat3& lhs, const vec2& rhs)
		{
			vec2 result;

			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					result[i] = lhs[i][j] * rhs[j];
				}
			}
			return result;
		}
		vec3 mul(const mat3& lhs, const vec3& rhs)
		{
			vec3 result;

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					result[i] = lhs[i][j] * rhs[j];
				}
			}
			return result;
		}
		mat3 scaling(const vec2& scale)
		{
			mat3 matrix = { 1,0,0,
							0,1,0,
							0,0,1 };
			mat3 scaleVector = { scale[0],0,0,
							0,scale[1],0,
							0,0,1 };

			mat3 result = { 0 };
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					for (int k = 0; k < 3; k++)
					{
						result[i][j] += matrix[i][k] * scaleVector[k][j];
					}
				}
			}
			return result;
		}
		mat3 translation(const vec2& position)
		{
			mat3 matrix = { 1,0,0,
							0,1,0,
							0,0,1 };

			mat3 translation = { 1,0,position[0],
							0,1,position[1],
							0,0,1 };

			mat3 result = {0,0,0,
							0,0,0,
							0,0,0};
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					for (int k = 0; k < 3; k++)
					{
						result[i][j] += matrix[i][k] * translation[k][j];
					}
				}
			}

			return result;
		}
		mat3 rotation(float radians)
		{
			float degrees = radians * (180.0 / PII);
			mat3 rotation{ cos(degrees), -sin(degrees),0,sin(degrees),cos(degrees),0,0,0,1 };
			return rotation;
		}
		float det(const mat4& mat)
		{
			//:DDDD ei vois menn� en�� hankalammaksi yks 4x4 lasku
			float a11 = mat[0][0], a12 = mat[0][1], a13 = mat[0][2], a14 = mat[0][3];
			float x = 
				a11* (mat[1][1], mat[1][2], mat[1][3],
				mat[2][1], mat[2][2], mat[2][3],
				mat[3][1], mat[3][2], mat[3][3]) 

				-a12 * (mat[1][0], mat[1][2], mat[1][3],
					mat[2][0], mat[2][2], mat[2][3],
					mat[3][0], mat[3][2], mat[3][3])

				+ a13 * (mat[1][0], mat[1][1], mat[1][3],
					mat[2][0], mat[2][1], mat[2][3],
					mat[3][0], mat[3][1], mat[3][3])

				- a14 * (mat[1][0], mat[1][1], mat[1][2],
					mat[2][0], mat[2][1], mat[2][2],
					mat[3][0], mat[3][1], mat[3][2]);
			return x;
			
		}
		mat4 transpose(const mat4& mat)
		{
			mat4 trans_mat;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					trans_mat[j][i] = mat[i][j];
				}
			}
			return trans_mat;
			
		}
		mat4 inverse(const mat4& mat)
		{
			float determinant;
			determinant = det(mat);
			if (determinant == 0)
			{
				std::runtime_error error("The matrix is singular, it cannot be inverted!");
				return mat4();
			}
			mat4 inverse;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					inverse[i][j] = ((mat[(j + 1) % 4][(i + 1) % 4] * mat[(j + 2) % 4]
						[(i + 2) % 4]) - (mat[(j + 1) % 4][(i + 2) % 4] * mat[(j + 2) % 4][(i + 1) % 4])) / determinant;

				}
			}
			return inverse;
		}
		mat4 mul(const mat4& lhs, const mat4& rhs)
		{
			mat4 result;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					for (int k = 0; k < 4; k++)
					{
						result[i][j] += lhs[i][k] * rhs[k][j];
					}
				}
			}
			return result;
			
		}
		vec3 mul(const mat4& lhs, const vec3& rhs)
		{
			vec3 result;

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					result[i] += lhs[i][j] * rhs[j];
				}
			}
			return result;
			
		}
		vec4 mul(const mat4& lhs, const vec4& rhs)
		{
			vec4 result;

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					result[i] += lhs[i][j] * rhs[j];
				}
			}
			return result;
		}
		mat4 scaling(float uniformscale)
		{
			mat4 scaleMatrix = { uniformscale,0,0,1,
								0,uniformscale,0,1,
								0,0,uniformscale,1,
								0,0,0,uniformscale };
								
			return scaleMatrix;
		}
		mat4 scaling(const vec3& scale)
		{
			mat4 scalingMatrix = { scale[0],scale[1],scale[2],1,
								 scale[0],scale[1],scale[2],1,
								scale[0],scale[1],scale[2],1,
								scale[0],scale[1],scale[2],1 };
			return scalingMatrix;
		}
		mat4 translation(const vec3& position)
		{
			mat4 translationMat = { 1,0,0,position[0],
								0,1,0,position[1],
								0,0,1,position[2],
								0,0,0,1 };
			return translationMat;
		}
		mat4 rotationx(float radians)
		{
		
			mat4 rotationX = { 0,0,0,0
							,0,cos(radians),sin(radians),0
							,-sin(radians),rotationX[1][1],0,0
							,0,0,0,0
							};
			return rotationX;
		}
		mat4 rotationy(float radians)
		{
			mat4 rotationY = {cos(radians),0,-sin(radians),0
							,0,0,0,0
							,sin(radians),0,rotationY[0][0],0
							,0,0,0,0};
			return rotationY;
		}
		mat4 rotationz(float radians)
		{
			mat4 rotationZ = {cos(radians),-sin(radians),0,0
							,sin(radians),rotationZ[0][0],0,0
							,0,0,0,0
							,0,0,0,0};
			return rotationZ;
		}
		float degrees(float radians)
		{
			return radians * 180 / PII;
		}
		float radians(float degrees)
		{
			return degrees * PII/180;
		}
	}

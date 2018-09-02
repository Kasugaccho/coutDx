#pragma once
#include <string>

#ifdef __DXLIB
#ifndef DX_NON_NAMESPACE
namespace DxLib
{
#endif // DX_NON_NAMESPACE

	struct EndlDx {
		EndlDx() = default;
		~EndlDx() = default;
	};
	constexpr EndlDx endlDx;

	struct ClearDx {
		ClearDx() = default;
		~ClearDx() = default;
	};
	constexpr ClearDx clearDx;

	class CoutDx {
	public:

		const CoutDx& operator<<(const char var_) const {
			printfDx("%c", var_);
			return *this;
		}
		const CoutDx& operator<<(const signed char var_) const {
			printfDx("%c", (char)var_);
			return *this;
		}
		const CoutDx& operator<<(const unsigned char var_) const {
			printfDx("%c", (char)var_);
			return *this;
		}
		const CoutDx& operator<<(const short var_) const {
			printfDx("%d", var_);
			return *this;
		}
		const CoutDx& operator<<(const unsigned short var_) const {
			printfDx("%u", var_);
			return *this;
		}
		const CoutDx& operator<<(const int var_) const {
			printfDx("%d", var_);
			return *this;
		}
		const CoutDx& operator<<(const unsigned int var_) const {
			printfDx("%u", var_);
			return *this;
		}
		const CoutDx& operator<<(const long var_) const {
			printfDx("%ld", var_);
			return *this;
		}
		const CoutDx& operator<<(const unsigned long var_) const {
			printfDx("%lu", var_);
			return *this;
		}
		const CoutDx& operator<<(const long long var_) const {
			printfDx("%lld", var_);
			return *this;
		}
		const CoutDx& operator<<(const unsigned long long var_) const {
			printfDx("%llu", var_);
			return *this;
		}

		const CoutDx& operator<<(const float var_) const {
			printfDx("%f", var_);
			return *this;
		}
		const CoutDx& operator<<(const double var_) const {
			printfDx("%f", var_);
			return *this;
		}
		const CoutDx& operator<<(const long double var_) const {
			printfDx("%lf", var_);
			return *this;
		}

		const CoutDx& operator<<(const char* const var_) const {
			printfDx("%s", var_);
			return *this;
		}
		const CoutDx& operator<<(const std::string& var_) const {
			printfDx("%s", var_.c_str());
			return *this;
		}

		const CoutDx& operator<<(const EndlDx& var_) const {
			printfDx("\n");
			return *this;
		}
		const CoutDx& operator<<(const ClearDx& var_) const {
			clsDx();
			return *this;
		}
		const CoutDx& endl() const {
			printfDx("\n");
			return *this;
		}
		const CoutDx& clear() const {
			clsDx();
			return *this;
		}
	};
	constexpr CoutDx coutDx;

#ifndef DX_NON_NAMESPACE
}
#endif // DX_NON_NAMESPACE
#endif
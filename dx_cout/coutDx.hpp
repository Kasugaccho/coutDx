#pragma once
#include <string>

#ifdef __DXLIB
#ifndef DX_NON_NAMESPACE
namespace DxLib
{
#endif // DX_NON_NAMESPACE

	enum CoutGraphId :size_t {
		cout_graph_empty,
		cout_graph_default,
	};

	struct CoutGraph {
		CoutGraphId id = cout_graph_empty;
		int handle = -1;
		//ˆÊ’u
		int pos_x = 0;
		int pos_y = 0;

		CoutGraph() = default;
		constexpr CoutGraph(const int handle_) :handle(handle_) {}
		constexpr void open(const CoutGraphId id_) { id = id_; }
		constexpr const int data() const {
			return handle;
		}
		constexpr const CoutGraphId type() const {
			return id;
		}
		constexpr void setX(const int x_) { pos_x = x_; }
		constexpr void setY(const int y_) { pos_y = y_; }
		constexpr const int x() const { return pos_x; }
		constexpr const int y() const { return pos_y; }
	};

	struct Graph {
		CoutGraph graph;
		
		Graph(const char* const str_) :graph(LoadGraph(str_)) {}
		const CoutGraph draw() {
			graph.setX(0);
			graph.setY(0);
			graph.open(cout_graph_empty);
			return graph;
		}

		const CoutGraph draw(const int x_, const int y_) {
			graph.setX(x_);
			graph.setY(y_);
			graph.open(cout_graph_default);
			return graph;
		}
	};

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

		const CoutDx& operator<<(const CoutGraph& var_) const {
			switch (var_.type())
			{
			case cout_graph_empty:
				DrawGraph(0, 0, var_.data(), TRUE);
				break;
			case cout_graph_default:
				DrawGraph(var_.x(), var_.y(), var_.data(), TRUE);
				break;
			}
			return *this;
		}

	};
	constexpr CoutDx coutDx;

#ifndef DX_NON_NAMESPACE
}
#endif // DX_NON_NAMESPACE
#endif
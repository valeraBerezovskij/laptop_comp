#include <iostream>
using namespace std;

class CPU {
	string model_;
	double hz_;
public:
	CPU() = default;
	CPU(const string& model, const double hz) : model_(model), hz_(hz) {}
	void output() const {
		cout << "Model: " << model_ << "\nhz: " << hz_;
	}
};

class GPU {
	string model_;
	double mgHz_;
public:
	GPU() = default;
	GPU(const string& model, const double mgHz) : model_(model), mgHz_(mgHz) {}
	void output() const {
		cout << "Model: " << model_ << "\nmgHz: " << mgHz_;
	}
};

class SSD {
	string model_;
	double val_;
public:
	SSD() = default;
	SSD(const string& model, const double val) : model_(model), val_(val) {}
	void output() const {
		cout << "Model: " << model_ << "\vVal: " << val_;
	}
};

class RAM {
	string model_;
	double val_;
public:
	RAM() = default;
	RAM(const string& model, const double val) : model_(model), val_(val) {}
	void output() const {
		cout << "Model: " << model_ << "\vVal: " << val_;
	}
};

class Mouse {
	string model_;
	double dpi_;
public:
	Mouse() = default;
	Mouse(const string& model, const double dpi) : model_(model), dpi_(dpi) {}
	void output() const {
		cout << "Model: " << model_ << "\Dpi: " << dpi_;
	}
};

class Laptop {
private:
	string model_;
	CPU cpu_;
	SSD ssd_;
	GPU gpu_;
	RAM ram_;
	Mouse* mouse_;
public:

	Laptop(Mouse* mouse, const string& model)
		: mouse_(mouse), model_(model), cpu_("intel", 1014), ssd_("asus",  8), gpu_("omen", 800000), ram_("hyperX", 9.1)
	{ }
	void output() {
		cout << "Model: " << model_ << endl;
		cpu_.output();
		ssd_.output();
		gpu_.output();
		ram_.output();
		mouse_->output();
	}
};

int main()
{
	Mouse* m = new Mouse("dd", 2);
	Laptop l(m, "ddd");
	l.output();
}
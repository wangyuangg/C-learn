#include<iostream>


using namespace std;

class Screen {
	public:
		typedef string::size_type pos;
		Screen() = default;
		Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
		char get() const { return contents[cursor]; }
		inline char get(pos ht, pos wd) const;
		Screen &move(pos r, pos c);
		void some_member() const;
};
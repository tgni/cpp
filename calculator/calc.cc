//#include "std_lib_facilities.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

using namespace std;

inline void error(const string& errormessage)
{
    throw runtime_error(errormessage);
}

class Token {
public:
    char kind;
    double value;
    Token(char ch)
        :kind(ch), value(0) { }    
    Token(char ch, double val)
        :kind(ch), value(val) { }
};

class Token_stream {
public:
	Token_stream();
	Token get();
	void putback(Token t);
private:
	bool full; 
	Token buffer;
};

Token_stream::Token_stream()
	:full(false), buffer(0)
{ }

void Token_stream::putback(Token t)
{
	if (full) error("putback() into a full buffer");
	buffer = t;
	full = true;
}

Token Token_stream::get()
{
	if (full) {
		full = false;	
		return buffer;
	}

	char ch;
	cin >> ch;
	switch (ch) {
	case ';': case 'q': case '!':
	case '(': case ')': case '{': case '}': 
	case '+': case '-': case '*': case '/':
		return Token(ch);

	case '.':
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
	{
		cin.putback(ch);
		double val;
		cin >> val;
		return Token('8', val);
	}

	default:
		error("Bad token");
	}
}

Token_stream ts;

double expression();
int factorial(int num);

double primary()
{
	Token t = ts.get();

	switch (t.kind) {
	case '(':
	{
		double d = expression();
		t = ts.get();
		if (t.kind != ')') error("')' expected");
		return d;
	}
	case '{':
	{
		double d = expression();
		t = ts.get();
		if (t.kind != '}') error("'}' expected");
		return d;
	}
	case '8':
	{
		Token tok = ts.get();
		if (tok.kind == '!') {
			if ((t.value - (int)t.value) != 0) error ("integer factorial expected");
			return factorial((int)t.value);	
		} else {
			ts.putback(tok);	
			return t.value;
		}
	}
	default:
		error("primary expected");
	}
}

int factorial(int num)
{
	int factor = 1;

	if (num == 0)
		return 1;

	for (int i = 1; i <= num; ++i) {
		factor *= i;
	}

	return factor;
}

double term()
{
	double left = primary();
	Token t = ts.get();

	while (true) {
		switch (t.kind) {	
		case '*':
			left *= primary();
			t = ts.get();
			break;
		case '/':
		{
			double d = primary();
			if (d == 0) error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);
			return left;
		}
	}
}

double expression()
{
	double left = term();	
	Token t = ts.get();

	while (true) {
		switch (t.kind) {
		case '+':	
			left += term();
			t = ts.get();
			break;
		case '-':
			left -= term();
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;
		}
	}
}

int main(void)
try {
	double val = 0;

	cout << "Please Enter Expression:\n";
	while (cin) {
		Token t = ts.get();
		if (t.kind == 'q') break;
		if (t.kind == ';') {
			cout << val << endl;
		} else {
			ts.putback(t);
		}
		val = expression();
	}
}
catch (exception &e) {
	cerr << e.what() << '\n';
	return 1;
} 
catch (...) {
	cerr << "exception\n";
	return 2;
}

#if 0
int main(void)
{
	vector<Token> v;

	while (cin) {
		Token t = ts.get(); 
		if (t.kind == 'q') {
			break;
		} else {
			v.push_back(t);
		}
	}

	for (int i; i < v.size(); ++i) {
		if (v[i].kind != '8') {
			cout << v[i].kind;	
		} else {
			cout << v[i].value;	
		}
	}
	cout << endl;

	return 0;
}
#endif

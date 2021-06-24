#pragma once

class Cookie {
private:
	double _sugarPercent;
	char* _brashno;

public:
	bool _izpechena;

	Cookie(double sugarPercent = 0, const char* barshno = "null", bool izpechena = 0);
	~Cookie();

	//getters
	double getSugar() const { return _sugarPercent; };
	char* getBrashno() const { return _brashno; };

	//setters
	void setSugar(double pcnt);
	void setBrashno(const char* tipBrashno);
	void setIzpechena(bool izpech);

	void print() const;

};
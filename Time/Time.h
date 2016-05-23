/* Header for the Time class (Time.h) */
#ifndef TIME_H // Include this "block" only if TIME_H is NOT defined
#define TIME_H // Upon the first inclusion, define TIME_H so that
			   // this header will not get included more than once
class Time {
private: // private section
	// private data members
	int hour;	// 0 - 23
	int minute; // 0 - 59
	int second; // 0 - 59

public: // public section
	// public member function prototypes
	Time(int h = 0, int m = 0, int s = 0); // Constructor with default values
	int getHour() const;
	void setHour(int h); 
	int getMinute() const;
	void setMinute(int m);
	int getSecond() const;
	void setSecond(int s);
	void setTime(int h, int m, int s);
	void print() const;
	void nextSecond(); 
};

#endif // end of "#ifndef" block
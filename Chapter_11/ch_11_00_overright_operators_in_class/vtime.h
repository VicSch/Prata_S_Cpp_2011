#ifndef VTIME_H
#define VTIME_H

class Vtime {

private:
    int minutes;
    int hours;
    
public:
    Vtime();
    Vtime(int h, int m = 0);
    ~Vtime();
    
    void addHour(int h);
    void addMinute(int m);
    void reset();
    void show() const;
    Vtime operator +(const Vtime &vt) const;
    Vtime operator -(const Vtime &vt) const;
    Vtime operator *(double n) const;
    
};

#endif  // VTIME_H
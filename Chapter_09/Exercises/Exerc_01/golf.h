#ifndef GOLF_H
#define GOLF_H

const int Len = 40;
struct golf {char fullname[Len]; int handicap;};

// set structure golf
void setgolf(golf& g, const char* name, int hc);
// set golf, return 1 if name is entred, else 0
int setgolf(golf& g);


// set value of structure's field handicap
void handicap(golf& g, int hc);
// show golf structure
void showgolf(const golf& g);

#endif // GOLF_H

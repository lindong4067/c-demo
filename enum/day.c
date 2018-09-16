#include <stdio.h>

#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
#define SUN 7

enum DAY{
	MON=1, TUE, WED, THU, FRI, SAT, SUN
};
enum DAY day;

enum DAY{
	MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;


enum {
	MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;

int main(){
	enum DAY day;
	day = WED;
	printf("%d", day);
	return 0;
}

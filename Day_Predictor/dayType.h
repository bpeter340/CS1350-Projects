using namespace std;

class dayType
{
public:
	string getDay(int option);
	string nextDay(int next);
	string prevDay(int prev);
	void predictDay(int current_day, int prediction);
	void menu();
	dayType(string day_1, string day_2, string day_3, string day_4, string day_5, string day_6, string day_7);
	~dayType();
private:
	string week[7];
	string xday;
};

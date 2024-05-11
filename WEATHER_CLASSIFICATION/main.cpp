#include <iostream>
using namespace std;

int main() {
	int year_rain; //연 강수량
	int min_month_rain; //월 강수량 체크
	int most_hot, most_cold; //최난월, 최한월
	string location; //동안vs서안
	string type; //쾨펜의 기후구분

	cout << "쾨펜의 기후구분 알고리즘 테스트 프로그램입니다 -- Made by 권민기" << endl;
	cout << "-----------------------------------------" << endl;
	cout << endl;
	
	cout << "연 강수량을 입력하시오 : ";
	cin >> year_rain;
	cout << endl;
	
	cout << "최난월 평균 기온을 입력하시오 : ";
	cin >> most_hot;
	cout << endl;
	
	cout << "최한월 평균 기온을 입력하시오 : ";
	cin >> most_cold;
	cout << endl;
	
	cout << "가장 적은 비가 내린 달의 강수량을 입력하시오 : ";
	cin >> min_month_rain;

	if (year_rain < 500) {
		if (year_rain >= 250) {
			type = "스텝 (BS)";

		}
		else if (year_rain < 250) {
			type = "사막 (BW)";
		}
	}
	else if (most_hot < 10 and most_cold <= -3) {
		if (most_hot <= 0) {
			type = "빙설 (EF)";
		}
		else if (most_hot > 0 and most_hot < 10) {
			type = "툰드라 (ET)";
		}
	}
	else if (most_cold >= 18) {
		if (min_month_rain >= 60) {
			type = "열대 우림 (Af)";
		}
		else {
			type = "열대 사바나 (Aw) 혹은 열대 몬순 (Am)";
		}
	}
	else if (most_cold < 18 and most_cold >= -3) {
		cout << endl;
		cout << "대륙의 어디에 위치해 있는지 입력하시오 (동안/서안) : ";
		cin >> location;
		cout << endl;
		
		if (location == "서안") {
			if (min_month_rain > 30 and most_hot < 22) {
				type = "서안 해양성 (Cfb)";
			}
			else {
				type = "지중해성 (Cs)";
			}
		}
		else if (location == "동안") {
			if (min_month_rain > 30 and most_hot >= 22) {
				type = "온난 습윤 (Cfa)";
			}
			else {
				type = "온대 겨울 건조 (Cw)";
			}
		}
	}
	else if (most_cold < -3 and most_hot >= 10) {
		if (min_month_rain > 20) {
			type = "냉대 습윤 (Df)";
		}
		else {
			type = "냉대 겨울 건조 (Dw)";
		}
	}

	cout << "----------------------------------------------------------" << endl;
	cout << "해당 지역은 쾨펜의 기후구분 알고리즘에 따라 " << type << " 기후입니다." << endl;

}
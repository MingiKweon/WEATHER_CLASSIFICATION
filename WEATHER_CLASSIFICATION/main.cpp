#include <iostream>
using namespace std;

int main() {
	int year_rain; //�� ������
	int min_month_rain; //�� ������ üũ
	int most_hot, most_cold; //�ֳ���, ���ѿ�
	string location; //����vs����
	string type; //������ ���ı���

	cout << "������ ���ı��� �˰��� �׽�Ʈ ���α׷��Դϴ� -- Made by �ǹα�" << endl;
	cout << "-----------------------------------------" << endl;
	cout << endl;
	
	cout << "�� �������� �Է��Ͻÿ� : ";
	cin >> year_rain;
	cout << endl;
	
	cout << "�ֳ��� ��� ����� �Է��Ͻÿ� : ";
	cin >> most_hot;
	cout << endl;
	
	cout << "���ѿ� ��� ����� �Է��Ͻÿ� : ";
	cin >> most_cold;
	cout << endl;
	
	cout << "���� ���� �� ���� ���� �������� �Է��Ͻÿ� : ";
	cin >> min_month_rain;

	if (year_rain < 500) {
		if (year_rain >= 250) {
			type = "���� (BS)";

		}
		else if (year_rain < 250) {
			type = "�縷 (BW)";
		}
	}
	else if (most_hot < 10 and most_cold <= -3) {
		if (most_hot <= 0) {
			type = "���� (EF)";
		}
		else if (most_hot > 0 and most_hot < 10) {
			type = "����� (ET)";
		}
	}
	else if (most_cold >= 18) {
		if (min_month_rain >= 60) {
			type = "���� �츲 (Af)";
		}
		else {
			type = "���� ��ٳ� (Aw) Ȥ�� ���� ��� (Am)";
		}
	}
	else if (most_cold < 18 and most_cold >= -3) {
		cout << endl;
		cout << "����� ��� ��ġ�� �ִ��� �Է��Ͻÿ� (����/����) : ";
		cin >> location;
		cout << endl;
		
		if (location == "����") {
			if (min_month_rain > 30 and most_hot < 22) {
				type = "���� �ؾ缺 (Cfb)";
			}
			else {
				type = "�����ؼ� (Cs)";
			}
		}
		else if (location == "����") {
			if (min_month_rain > 30 and most_hot >= 22) {
				type = "�³� ���� (Cfa)";
			}
			else {
				type = "�´� �ܿ� ���� (Cw)";
			}
		}
	}
	else if (most_cold < -3 and most_hot >= 10) {
		if (min_month_rain > 20) {
			type = "�ô� ���� (Df)";
		}
		else {
			type = "�ô� �ܿ� ���� (Dw)";
		}
	}

	cout << "----------------------------------------------------------" << endl;
	cout << "�ش� ������ ������ ���ı��� �˰��� ���� " << type << " �����Դϴ�." << endl;

}
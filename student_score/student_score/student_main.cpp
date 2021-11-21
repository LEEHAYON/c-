#include "student.h"

void insert();
void listall();
void select();
void remove();
int main() {
	while (true) {
		system("cls");
		//메뉴 출력
		cout << "1. 학생 등록" << endl;
		cout << "2. 학생 목록" << endl;
		cout << "3. 학생 검색" << endl;
		cout << "4. 학생 삭제" << endl;
		cout << "5. 종료" << endl;
		cout << "메뉴를 선택하세요 : ";

		int menu; //= enum MENU menu - 열겨형 상수
		cin >> menu; //무한 반복일때 멈추게 하고 싶을때 쓰기

		//문자를 입력할 경우 에러 발생 -> 에러 버퍼를 비워줌
		//입력 버퍼에 있는 '\n'
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1024, '\n');
		}

		if (menu == MENU_EXIT) break; //5번 종료
			
		switch (menu) {
		case MENU_INSERT:
			insert();
			break;
		case MENU_LIST:
			listall();
			break;
		case MENU_SELECT:
			select();
			break;
		case MENU_DELETE:
			remove();
			break;
		default:
			cout << "메뉴를 잘못 눌렀습니다." << endl;
			break;
		}
		system("pause");
	}

	return 0;
}
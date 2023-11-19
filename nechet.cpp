#include <iostream>
#include <math.h>
#include <cmath> 
#include <stdlib.h>
//1. Вычислить площадь трапеции с основаниями b1 и b2 и высотой h.
void ploshadTrapec(double b1, double b2, double h)
{
	double ploshad = (b1 + b2) / 2 * h;
	std::cout << "ploshad  = " << ploshad;
}
//3. Вычислить площадь прямоугольного треугольника и гипотенузу.
void ploshadPryamTreyg(double a1, double a2)
{
	double ploshad = a1 * a2 / 2;
	double gipotenyza = sqrt(a1 * a1 + a2 * a2);
	std::cout << "ploshad = " << ploshad << ", a gipotenyza = " << gipotenyza;
}
//5. Выполнить переход от декартовых координат к полярным.
void perexodKoordinat(double x1, double y1)
{
	double radius = sqrt((x1 * x1) + (y1 * y1));
	double angle = std::atan2(y1, x1);
	std::cout << "v polyarnoy sisteme x,y = " << radius << " " << angle;
}
//7. Найти корни квадратного уравнения.
void korniKvadrat(double a, double b, double c) 
{
	double discr = b * b - 4 * a * c;
	double xx, x1, x2;
	if (discr < 0) {
		std::cout << "korney net :( ";
	}
	else if (discr == 0) {
		xx = -b / 2*a;
		std::cout << "x = " << xx;
	}
	else {
		x1 = -b + sqrt(discr) / 2 * a;
		x2 = -b - sqrt(discr) / 2 * a;
		std::cout << "x1 = " << x1 << " x2 = " << x2;
	}
}
//9. Идет k-я секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток.
void poschetVremeni(int k)
{	
	if (k > 86400) {
		std::cout << "eto drygoi den :(";
	}
	else {
		int chasov = k / 3600;
		int minut = k / 60;
		std::cout << "proshlo chasov - " << chasov << " proshlo minut - " << minut;
	}
}
//11. Вычислить стоимость покупки с учётом скидки. Скидка в 10% предоставляется, если сумма покупки превышает 1000 рублей.
void summaSoSkidkoy(double price) 
{
	double newprice;
	if (price > 1000) {
		std::cout << "Posdravlyem, vasha novaya cena so skidkoy = " << price * 0.9;
	}
	else if (price < 0) {
		std::cout << "Besplatno!!!";
	}
	else {
		std::cout << "Cena bydet = " << price;
	}
}
//13. Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат произведения этих чисел. Программа сообщает тестируемому ошибся он или нет.
void proverkaUmnosheniya(int num1, int num2, int proizv) {
	int trueProizv = num1 * num2;
	if (proizv == trueProizv) std::cout << " Verno, molochik! ";
	else std::cout << " Nepravilno :( ";
}
//15. Ввести с клавиатуры номер месяца.Выдать сообщение о названии месяца и времени года.
void monthOpredelenie(int monthNumber) {
	if (monthNumber == 1) {
		std::cout << "January";
	}
	else if (monthNumber == 2) {
		std::cout << "February";
	}
	else if (monthNumber == 3) {
		std::cout << "March";
	}
	else if (monthNumber == 4) {
		std::cout << "April";
	}
	else if (monthNumber == 5) {
		std::cout << "May";
	}
	else if (monthNumber == 6) {
		std::cout << "June";
	}
	else if (monthNumber == 7) {
		std::cout << "July";
	}
	else if (monthNumber == 8) {
		std::cout << "August";
	}
	else if (monthNumber == 9) {
		std::cout << "September";
	}
	else if (monthNumber == 10) {
		std::cout << "October";
	}
	else if (monthNumber == 11) {
		std::cout << "November";
	}
	else {
		std::cout << "December";
	}
	std::cout << "\n";

	if (monthNumber == 1 || monthNumber == 2 || monthNumber == 12) {
		std::cout << "Zima";
	}
	else if (monthNumber >= 3 && monthNumber <= 5) {
		std::cout << "Vesna";
	}
	else if (monthNumber >= 6 && monthNumber <= 8) {
		std::cout << "Leto";
	}
	else {
		std::cout << "Osen";
	}
}
//17. Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово "копейка" в правильной форме.
void kopeikiOpredelenie(int k) {
	if (k%10==1) std::cout << k << " kopeyka";
	if (k % 10 == 0 || k % 10 == 5 || k % 10 == 6 || k % 10 == 7 || k % 10 == 8 || k % 10 == 9) std::cout << k << " kopeek";
	if (k % 10 == 2 || k % 10 == 3 || k % 10 == 4) std::cout << k << " kopeyki";
}
//19. Дано трёхзначное число. Определить: 19.1 является ли произведение его цифр больше числа b 19.2 кратна ли 7 сумма его цифр.

void summaCifrChisla(int trex) {
	int f = trex;
	int summa = 0;
	int proizved=1;
	while (f > 0) {
		summa += f % 10;
		proizved *= f % 10;
		f = f / 10;
	}
	std::cout << "\n \n";
	if (proizved > trex) std::cout << "proizvedenie bolshe chisla";  //19.1
	else std::cout << "proizvedenie menshe chisla";
	std::cout << "\n \n";
	if (proizved % 7 == 0) std::cout << "summa chisel kratna 7"; //19.2
	else std::cout << "summa chisel ne kratna 7";
}

int main()
{
	//1
	double b1, b2, h;
	std::cout << "1. vvedite b1,b2,h cherez probel = ";
	std::cin >> b1 >> b2 >> h;
	ploshadTrapec(b1, b2, h);
	std::cout << "\n \n";

	//3
	double c1, c2;
	std::cout << "3. vvedite kateti c1,c2 cherez probel = ";
	std::cin >> c1 >> c2;
	ploshadPryamTreyg(c1, c2);
	std::cout << "\n \n";

	//5
	double x1, y1;
	std::cout << "5. vvedite dekartovy koordinaty x1,y1 cherez probel = ";
	std::cin >> x1 >> y1;
	perexodKoordinat(x1,y1);
	std::cout << "\n \n";

	//7
	double a, b, c;
	std::cout << "7. vvedite a,b,c korni yravneniya cherez probel = ";
	std::cin >> a >> b >> c;
	korniKvadrat(a, b, c);
	std::cout << "\n \n";

	//9
	int k;
	std::cout << "9. vvedite k sekynd (menee 86400) = ";
	std::cin >> k;
	poschetVremeni(k);
	std::cout << "\n \n";

	//11
	double price;
	std::cout << "11. vvedite summy pokypki bez skidki = ";
	std::cin >> price;
	summaSoSkidkoy(price);
	std::cout << "\n \n";

	//13
	int proizv;
	int num1 = rand() % 9 + 1;
	int num2 = rand() % 9 + 1;
	std::cout << "13. vvedite proizvedenie chisel " << num1 << " * " << num2 << std::endl;
	std::cin >> proizv;
	proverkaUmnosheniya(num1,num2,proizv);
	std::cout << "\n \n";

	//15
	int monthNumber;
	std::cout << "15. vvedite nomer mesyatsa = ";
	std::cin >> monthNumber;
	monthOpredelenie(monthNumber);
	std::cout << "\n \n";

	//17
	int kop;
	std::cout << "17. vvedite kolvo kopeek = ";
	std::cin >> kop;
	kopeikiOpredelenie(kop);
	std::cout << "\n \n";

	//19
	int trex;
	std::cout << "19. vvedite 3 zhachnoe chislo = ";
	std::cin >> trex;
	summaCifrChisla(trex);
	std::cout << "\n \n";

}
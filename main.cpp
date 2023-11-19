#include <iostream>
#include <cmath>


void dlinaAndRadius(double r){ // функция вывода радиуса и длины
    double pi = 22 / 7;
    std:: cout << "Dlina = ";
    std:: cout << 2 * pi * r << std:: endl;
    std:: cout << "Ploshad = ";
    std:: cout << pi * r * r;
}

void summaCifr(int chislo){ // вывод суммы цифр четырехзначного числа
    int a;
    int b;
    int c;
    int d;
    a = chislo / 1000;
    b = chislo % 1000 / 100;
    c = chislo % 100 / 10;
    d = chislo % 10;
    std:: cout << "Summa cifr = ";
    std:: cout << a+b+c+d;
}

void perevodPolyarnToDecart(double r, double theta) { // Перевод координат из полярных в Декартовы 
    double x = r * std::cos(theta);
    double y = r * std::sin(theta);
    std::cout << "Decatrovi coordinati: x = " << x << ", y = " << y;    
}

void uznatMediani(double a, double b, double c){ // узнать медианы треугольника, где стороны - медианы из прошлого треугольника
    double ma, ma1;
    double mb, mb1;
    double mc, mc1;
    
    ma = 0.5 * (sqrt(2*c*c+2*b*b-a*a));
    mb = 0.5 * (sqrt(2*c*c+2*a*a-b*b));
    mc = 0.5 * (sqrt(2*a*a+2*b*b-c*c));
    
    ma1 = 0.5 * (sqrt(2*mc*mc+2*mb*mb-ma*ma));
    mb1 = 0.5 * (sqrt(2*mc*mc+2*ma*ma-mb*mb));
    mc1 = 0.5 * (sqrt(2*ma*ma+2*mb*mb-mc*mc));
    
    std:: cout << "Storoni a, b, c: " << std:: endl;
    std:: cout << ma1 << std:: endl << mb1 << std:: endl << mc1 << std:: endl;
}

void IsRavnobren(double a, double b, double c){ // функция определяет равнобедренный ли треугольника
    if (a==b){
        std:: cout << "Yes";
    } else if (a==c){
        std:: cout << "Yes";
    } else if (b==c){
        std:: cout << "Yes";
    } else {
        std:: cout << "No";
    }
}

void recomendacii(double ves, double rost){ // функция дает советы по весу
    double ideal = rost - 100;
    
    if (ves == ideal){
        std:: cout << "Ti idealen";
    } else if (ves > ideal){
        std:: cout << "Zaimis sportom";
    } else if (ves < ideal){
        std:: cout << "Bolshe kushai";
    }
}

void stoimost(double den, double dlit){ // функция определяет стоимость переговоров
    int summa = den + dlit - 1; // абстрактное число
    double cena = 0; // стоимость переговоров
    for(int i {summa}; i >= den; i--) {
        if (summa / 7.0 == 1 || summa / 6.0 == 1){
            cena = cena + 80;
        } else {
            cena = cena + 100;
        }
        summa = summa - 1;
    } std:: cout << "Stoimost: "<< cena;
}

void isChastlivoe(int chislo6){ // функция определяет счастливый ли билет
    int a = chislo6 / 100000;
    int b = chislo6 / 10000 % 10;  
    int c = chislo6 / 1000 % 10;   
    int d = chislo6 / 100 % 10;   
    int e = chislo6 / 10 % 10;  
    int g = chislo6 % 10;
    if (a+b+c == d+e+g){
        std:: cout << "Bilet is chastlivii ";
    } else{
        std:: cout << "Bilet is not chastlivii ";
    }
}

void isPalindrom(int chislo6){ // функция определяет счастливый ли билет
    int a = chislo6 / 1000;
    int b = chislo6 / 100 % 10;  
    int c = chislo6 / 10 % 10;   
    int d = chislo6 % 10;
    if (a==d and c==b){
        std:: cout << "Chislo is Palindrom";
    } else{
        std:: cout << "Chislo is not Palindrom";
    }
}

void IsParallel(double s1,double s2,double s3,double s4){ // функция определяет помещается ли квадрат в квадрат
    if ((s1 < s3 and s2 < s4) || (s1 < s4 and s2 < s3)){
       std:: cout << "Yes"; 
    } else {
       std:: cout << "No"; 
    }
}

int main()
{
    // 2 задача
    std:: cout << "2 задача" << std:: endl;
    double r;
    std:: cout << "Vvedite radius = ";
    std:: cin >> r;
    dlinaAndRadius(r);
    std:: cout << "\n \n";
    
    // 4 задача
    std:: cout << "4 задача" << std:: endl;
    int number;
    std:: cout << "Vvedite 4znachnoe chislo = ";
    std:: cin >> number;
    summaCifr(number);
    std:: cout << "\n \n";
    
    // 6 задача
    std:: cout << "6 задача" << std:: endl;
    double r1, theta;
    std::cout << "Vvedite r: ";
    std::cin >> r1;
    std::cout << "Vvedite theta: ";
    std::cin >> theta;
    perevodPolyarnToDecart(r1, theta);
    std:: cout << "\n \n";
    
    // 8 задача
    std:: cout << "8 задача" << std:: endl;
    double a;
    double b;
    double c;
    std:: cout << "Vvedite storoni a, b, c: ";
    std:: cin >> a >> b >> c;
    uznatMediani(a,b,c);
    std:: cout << "\n \n";
    
    // 10 задача
    std:: cout << "10 задача" << std:: endl;
    double a1;
    double b1;
    double c1;
    std:: cout << "Vvedite storoni a, b, c: ";
    std:: cin >> a1 >> b1 >> c1;
    IsRavnobren(a1,b1,c1);
    std:: cout << "\n \n";
    
    
    // 12 задача
    std:: cout << "12 задача" << std:: endl;
    double ves;
    double rost;
    std:: cout << "Vvedite vash ves i rost: ";
    std:: cin >> ves >> rost;
    recomendacii(ves, rost);
    std:: cout << "\n \n";
    
    // 14 задача
    std:: cout << "14 задача" << std:: endl;
    double dlit;
    double den;
    std:: cout << "Bazovay plata = 100rub/den " << std:: endl;
    std:: cout << "Vvedite nomer dnya i dlitelnost: ";
    std:: cin >> den >> dlit;
    stoimost(den, dlit);
    std:: cout << "\n \n";
    
    // 16 задача
    std:: cout << "16 задача" << std:: endl;
    int chislo6;
    std:: cout << "Vvedite 6znachnoe chislo: ";
    std:: cin >> chislo6;
    isChastlivoe(chislo6);
    std:: cout << "\n \n";  
    
    // 18 задача
    std:: cout << "18 задача" << std:: endl;
    int chislo4;
    std:: cout << "Vvedite 4znachnoe chislo: ";
    std:: cin >> chislo4;
    isPalindrom(chislo4);
    std:: cout << "\n \n";      
    
    
    // 20 задача
    std:: cout << "20 задача" << std:: endl;
    double s1,s2,s3,s4;
    std:: cout << "Vvedite 4 chisla: ";
    std:: cin >> s1 >> s2 >> s3 >> s4;
    IsParallel(s1,s2,s3,s4);
    std:: cout << "\n \n"; 
    
    return 0;
    
    
}


#include <iostream>
#include <string>

enum Months {
    Stop,
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

std::string displayMonth2String(Months &month) {
    switch (month) {
    case Stop:
        return "До свидания";
    case January:
        return "Январь";
    case February:
        return "Февраль";
    case March:
        return "Март";
    case April:
        return "Апрель";
    case May:
        return "Май";
    case June:
        return "Июнь";
    case July:
        return "Июль";
    case August:
        return "Август";
    case September:
        return "Сентябрь";
    case October:
        return "Октябрь";
    case November:
        return "Ноябрь";
    case December:
        return "Декабрь";
    default:
        break;
    }
    return "Не правильный номер!";
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    Months month = January;
    while (month != Stop) {
        int monthInt;
        std::cout << "Введите номер месяца: ";
        std::cin >> monthInt;
        Months month = static_cast<Months>(monthInt);
        std::cout << displayMonth2String(month) << std::endl;
    }
    return 0;
}
#include <vector>
#include <list>
#include "MPi.h"
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include "NewShapes.h"

int firstTask() {
    vector<float> sequence;
    vector<float> dop;
    srand(time(0));
    cout << "The initial sequence of float: " << endl;
    for (int i = 0; i < 20; i++) {
        float randomValue = (float)(rand() % 100)/100;
        sequence.push_back(randomValue);
        printf("%1.3f ", sequence.at(i));
    }
    printf("\n");
    MPi mPi;
    transform(sequence.begin(), sequence.end(), sequence.begin(), mPi);
    cout << "After multiplying by PI: " << endl;
    for (int i = 0; i < 20; i++) {
        printf("%1.3f ", sequence.at(i));
    }
    cout << endl;

    return 0;
}

vector<Shape*> getRandomShapes() {
    vector<Shape*> shapes;
    for (int i = 0; i < 10; i++) {
        int choice = rand() % 3;
        switch (choice) {
            case 0:
                shapes.push_back(new Circle(rand() % 10, rand() % 10));
                break;
            case 1:
                shapes.push_back(new Triangle(rand() % 10, rand() % 10));
                break;
            default:
                shapes.push_back(new Square(rand() % 10, rand() % 10));
                break;
        }
    }
    return shapes;
}

int secondTask() {
    // Содержит список, заполенный указателями на различные фигуры
    vector<Shape*> shapes = getRandomShapes();
    // С помощью стандартных алгоритмов и адаптеров выводит (Draw) все фигуры

    cout << "\t\t\t\tInitial list" << endl;
    for_each(shapes.begin(),shapes.end(),mem_fun(&Shape::draw));

    // С помощью стандартных алгоритмов и адаптеров сортирует список по положению центра слева-направо
    shapes = getRandomShapes();
    cout << "\t\t\t\tFrom left to right" << endl;
    sort(shapes.begin(), shapes.end(), mem_fun(&Shape::isMoreLeft));
    for_each(shapes.begin(),shapes.end(),mem_fun(&Shape::draw));

    // С помощью стандартных алгоритмов и адаптеров сортирует список по положению центра справа-налево
    shapes = getRandomShapes();
    cout << "\t\t\t\tFrom right to left" << endl;
    sort(shapes.begin(), shapes.end(), mem_fun(&Shape::isMoreRight));
    for_each(shapes.begin(),shapes.end(),mem_fun(&Shape::draw));

    // С помощью стандартных алгоритмов и адаптеров сортирует список по положению центра сверху-внизу
    shapes = getRandomShapes();
    cout << "\t\t\t\tFrom up to down" << endl;
    sort(shapes.begin(), shapes.end(), mem_fun(&Shape::isUpper));
    for_each(shapes.begin(),shapes.end(),mem_fun(&Shape::draw));

    // С помощью стандартных алгоритмов и адаптеров сортирует список по положению центра снизу-вверх
    shapes = getRandomShapes();
    cout << "\t\t\t\tFrom down to up" << endl;
    sort(shapes.begin(), shapes.end(), mem_fun(&Shape::isMoreDown));
    for_each(shapes.begin(),shapes.end(),mem_fun(&Shape::draw));

    return 0;
}

int main(int argc, const char * argv[]) {
    cout << "*********First task*********" << endl;
    firstTask();
    cout << "*********Second task*********" << endl;
    secondTask();
    return 0;
}

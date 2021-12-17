#include <iostream>
#include <thread>
#include <mutex>
#include "student.hpp"
#include "persoana.hpp"

using namespace std;

class Lock {
private:
    mutex mLock;

public:
    Lock() {
        mLock.lock();
    }

    ~Lock() {
        mLock.unlock();
    }

    Lock& operator=(const Lock& lock) = delete;

    Lock(const Lock& lock) = delete;
};

void printMesaj(string mesaj) {
    cout << mesaj << endl;
    cout << mesaj << endl;
}

int main() {

    Student student1(123, 555);
    student1.afisare();

    shared_ptr<Student> student2(new Student(111, 500));
    student2->afisare();

    cout << student2.use_count() << endl;

    shared_ptr<Student> student3;
    student3 = student2;

    student3->afisare();

    cout << student2.use_count() << endl;

    unique_ptr<Persoana> persoana1(new Persoana(1000));

    persoana1->afisare();


    thread th1(printMesaj, "thread 1");
    thread th2(printMesaj, "thread 2");

    th1.join();
    th2.join();
}

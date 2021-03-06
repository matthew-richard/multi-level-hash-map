#include "Record.h"
#include "Hybrid.h"
#include "Motorcycle.h"

Record::~Record() {
    delete v;
}

void Record::add_task(const Task &t) {
    tasks.Insert(t);
    cost += t.parts_cost + t.labor_cost;
}

ostream& operator<<(ostream& out, Record &r) {
    out << endl
        << "VEHICLE:" << endl
        << *r.v
        << "TASKS:" << endl
        << r.tasks
        << "TOTAL COST: $" << r.cost << endl;

    return out;
}


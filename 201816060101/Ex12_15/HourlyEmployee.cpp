#include "HourlyEmployee.h"

double HourlyWorker::earnings() {
	return wage * hours + max(0, hours - 40) * 0.5 * wage;
}

#include <stdio.h>

double calculateBodyMassIndex(double weight, double height) {
    return weight / (height * height / 10000.0);
}

double calculateMaleBasalMetabolicRate(double weight, double height, int age) {
    return 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age);
}

double calculateFemaleBasalMetabolicRate(double weight, double height, int age) {
    return 447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age);
}

double calculateRecommendedCalorieIntake(double basalMetabolicRate, double bodyMassIndex) {
    if (bodyMassIndex < 18.5) {
        return basalMetabolicRate * 1.5;
    } else if (bodyMassIndex >= 18.5 && bodyMassIndex <= 24.9) {
        return basalMetabolicRate * 1.3;
    } else if (bodyMassIndex > 24.9 && bodyMassIndex <= 29.9) {
        return basalMetabolicRate;
    } else {
        return basalMetabolicRate * 0.8;
    }
}

int main() {
    int numClients;
    scanf("%d", &numClients);

    for (int i = 0; i < numClients; ++i) {
        double clientWeight, clientHeight;
        int clientAge;
        char clientGender;

        if (scanf("%lf %lf %d %c", &clientWeight, &clientHeight, &clientAge, &clientGender) != 4) {
            printf("Invalid input\n");
            continue;
        }

        if (clientHeight <= 0 || clientAge <= 0 || clientWeight<=0 || (clientGender != 'M' && clientGender != 'F')) {
            printf("Invalid input\n");
            continue;
        }

        double clientBodyMassIndex = calculateBodyMassIndex(clientWeight, clientHeight);
        double clientBasalMetabolicRate;
        if (clientGender == 'M') {
            clientBasalMetabolicRate = calculateMaleBasalMetabolicRate(clientWeight, clientHeight, clientAge);
        } else if (clientGender == 'F') {
            clientBasalMetabolicRate = calculateFemaleBasalMetabolicRate(clientWeight, clientHeight, clientAge);
        } else {
            printf("Invalid input\n");
            continue;
        }

        double clientCalorieIntake = calculateRecommendedCalorieIntake(clientBasalMetabolicRate, clientBodyMassIndex);

        printf("%.2lf\n", clientCalorieIntake);
    }

    return 0;
}

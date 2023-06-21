#include <stdio.h>

// Model
typedef struct {
    int data;
} Model;

// View
void display(Model *model) {
    printf("Data: %d\n", model->data);
}

// Controller
typedef struct {
    Model *model;
    void (*changeData)(struct controller_struct *, int newData);
} Controller;

void changeData(Controller *controller, int newData) {
    controller->model->data = newData;
    display(controller->model);
}

int main() {
    // Initialize model
    Model model = { .data = 0 };

    // Initialize controller
    Controller controller = { .model = &model, .changeData = changeData };

    // Change data using controller
    controller.changeData(&controller, 5);

    return 0;
}

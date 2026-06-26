//works fine on online javascript compiler but not on local machine due to prompt function
var tasks = [];
function addTask (task) {
    tasks.push(task);
    console.log("Task added: " + task);
}
function removeTask (i) {
    if (i<0 || i>=tasks.length) {
        console.log("Invalid index: " + i);
        return;
    }
    var removed = tasks.splice(i, 1);
    console.log("Task removed: " + removed);
}
function displayTasks () {
    console.log("Tasks:");
    for (let i=0; i<tasks.length; i++) {
        console.log(i+1 + ":", tasks[i]);
    }
}
function clearTasks () {
    tasks = [];
    console.log("All tasks cleared.");
}

let choice = prompt("Choose an option:\n1. Add Task\n2. Remove Task\n3. View Tasks\n4. Clear Tasks\n5. Exit\n");
while (choice !== "5") {
    switch (choice) {
        case "1": 
            let taskToAdd = prompt("Enter the task to add:");
            addTask(taskToAdd);
            break; 
        case "2":
            let indexToRemove = parseInt(prompt("Enter the index of the task to remove (starting from 1):")) - 1;
            removeTask(indexToRemove);
            break;  
        case "3":
            displayTasks();
            break;
        case "4":
            clearTasks();
            break;  
        default:
            console.log("Invalid choice. Please try again.");
    }
    choice = prompt("Choose an option:\n1. Add Task\n2. Remove Task\n3. View Tasks\n4. Clear Tasks\n5. Exit\n");
}
console.log("Exiting to-do list");
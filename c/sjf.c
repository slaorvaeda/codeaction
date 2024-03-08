#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int pid[100];
    int arrival_time[100];
    int burst_time[100];
    int start_time[100];
    int completion_time[100];
    int turnaround_time[100];
    int waiting_time[100];
    int response_time[100];

    float avg_turnaround_time;
    float avg_waiting_time;
    float avg_response_time;
    float cpu_utilisation;
    int total_turnaround_time = 0;
    int total_waiting_time = 0;
    int total_response_time = 0;
    int total_idle_time = 0;
    float throughput;
    int is_completed[100];
    memset(is_completed, 0, sizeof(is_completed));

    printf("%.2f");

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter arrival time of process %d: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("Enter burst time of process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
        pid[i] = i + 1;
        printf("\n");
    }

    int current_time = 0;
    int completed = 0;
    int prev = 0;

    while (completed != n) {
        int idx = -1;
        int mn = 10000000;
        for (int i = 0; i < n; i++) {
            if (arrival_time[i] <= current_time && is_completed[i] == 0) {
                if (burst_time[i] < mn) {
                    mn = burst_time[i];
                    idx = i;
                }
                if (burst_time[i] == mn) {
                    if (arrival_time[i] < arrival_time[idx]) {
                        mn = burst_time[i];
                        idx = i;
                    }
                }
            }
        }
        if (idx != -1) {
            start_time[idx] = current_time;
            completion_time[idx] = start_time[idx] + burst_time[idx];
            turnaround_time[idx] = completion_time[idx] - arrival_time[idx];
            waiting_time[idx] = turnaround_time[idx] - burst_time[idx];
            response_time[idx] = start_time[idx] - arrival_time[idx];

            total_turnaround_time += turnaround_time[idx];
            total_waiting_time += waiting_time[idx];
            total_response_time += response_time[idx];
            total_idle_time += start_time[idx] - prev;

            is_completed[idx] = 1;
            completed++;
            current_time = completion_time[idx];
            prev = current_time;
        } else {
            current_time++;
        }
    }

    int min_arrival_time = 10000000;
    int max_completion_time = -1;
    for (int i = 0; i < n; i++) {
        min_arrival_time = (min_arrival_time < arrival_time[i]) ? min_arrival_time : arrival_time[i];
        max_completion_time = (max_completion_time > completion_time[i]) ? max_completion_time : completion_time[i];
    }

    avg_turnaround_time = (float)total_turnaround_time / n;
    avg_waiting_time = (float)total_waiting_time / n;
    avg_response_time = (float)total_response_time / n;
    cpu_utilisation = ((max_completion_time - total_idle_time) / (float)max_completion_time) * 100;
    throughput = (float)n / (max_completion_time - min_arrival_time);

    printf("\n\n");
    printf("#P\tAT\tBT\tST\tCT\tTAT\tWT\tRT\t\n\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n\n", pid[i], arrival_time[i], burst_time[i], start_time[i], completion_time[i], turnaround_time[i], waiting_time[i], response_time[i]);
    }
    printf("Average Turnaround Time = %.2f\n", avg_turnaround_time);
    printf("Average Waiting Time = %.2f\n", avg_waiting_time);
    printf("Average Response Time = %.2f\n", avg_response_time);
    printf("CPU Utilization = %.2f%%\n", cpu_utilisation);
    printf("Throughput = %.2f process/unit time\n", throughput);

    return 0;
}

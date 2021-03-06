/*
    CHANGE ME 
*/

#pragma once

#include "results.h"
#include "file_system.h"
#include "main.h"

/* ============================ PROTOTYPES ============================== */

void start_scan(All_Results *results, Args *args);
void scan_file_for_issues(Thread_Pool_Args *thread_pool_args);

int suid_bit_scan(File_Info *fi, All_Results *ar, Args *cmdline);
int guid_bit_scan(File_Info *fi, All_Results *ar, Args *cmdline);
int capabilities_scan(File_Info *fi, All_Results *ar, Args *cmdline);
int intresting_files_scan(File_Info *fi, All_Results *ar, Args *cmdline);
int core_dump_scan(File_Info *fi, All_Results *ar, Args *cmdline);
int break_out_binary_scan(File_Info *fi, All_Results *ar, Args *cmdline);
int rpath_scan(File_Info *fi, All_Results *ar, Args *cmdline);
void sys_scan(All_Results *ar, Args *cmdline);
void lotl_scan(File_Info *fi, All_Results *ar, Args *cmdline);
void current_user_scan();
void sshd_conf_scan();
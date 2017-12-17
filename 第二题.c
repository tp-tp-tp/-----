#include <stdio.h>
#include "mpi.h"
main(int argc,char *argv[])
{
int myid,numprocs;
double startwtime,endwtime;
MPI_Init(&argc,&argv);
MPI_Comm_rank(MPI_COMM_WORLD,&myid);
MPI_Comm_size(MPI_COMM_WORLD,&numprocs);
{startwtime = MPI_Wtime();
printf("I am %d of %d\n",myid,numprocs);
endwtime = MPI_Wtime();
printf("wall clock time = %f\n",endwtime-startwtime);  }
MPI_Finalize();
}

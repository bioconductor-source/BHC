#include "header.h"
//Routine to ˚output the BHC dendrogram information
void OutputDendrogramInformation(NODE* tr_node, int dim, int obs){
  //----------------------------------------------------------------------
  // DECLARATIONS --------------------------------------------------------
  //----------------------------------------------------------------------	
  int     i;
  //----------------------------------------------------------------------
  // PRINT THE DENDROGRAM INFO TO SCREEN ---------------------------------
  //----------------------------------------------------------------------
  cout<<endl;
  for (i=obs;i<obs*2-1;i++)
    cout<<"node1: "<<tr_node[i].pleft+1<<"\tnode2: "<<tr_node[i].pright+1<<"\torder of merge: "<<i-obs+1<<"\tweight: "<<tr_node[i].wt[i]<<endl;

}
//*****************************************************************************
//*****************************************************************************
//----------------------------------------------------------------------
// ----------------------------------------
//----------------------------------------------------------------------

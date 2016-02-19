#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <vector>
#include <map>
#include "Ccouples.h"
#include "Cdemes.h"
#include "Cnodes.h"
#include "CAlleles.h"

std::vector<std::vector<Cdemes> > Finitialisation(unsigned long& Key);
std::map<long,Cnodes> FfullNodes(int const& GeneType);
int Fncoalescent(std::map<long,Cnodes>& Nodes, double& Ploidy);
int FMutations(std::map<long,Cnodes>& Nodes);
int FAddMutations(std::map<long,Cnodes>& Nodes, int& Ancestor, int& MuNumber);
long double FFactorial(int const& length);
int FAllelesStates(std::map<long,Cnodes>& Nodes,std::map<int,CAlleles>& AllelesGeneG);
int Ftransfer(std::map<long,Cnodes>& Nodes, std::vector<std::vector<Cdemes> >& Demes, int& Genetype, int const& gene);
int FMigrations(std::vector<std::vector<double> >& MigRates);
int FAcceptanceRate(double AcceptanceRate[3][3]);
int FInvasion(unsigned int const& years,std::vector<std::vector<Cdemes> >&NextGeneration, int& MovingLimit,double& SlideCompteur,int& FixedHabitatSlideDepth);
int FFiliation(std::vector<std::vector<Cdemes> >& Demes, unsigned int const& x, unsigned int const&y, unsigned int const& years,unsigned long& Key, std::vector<std::vector<Cdemes> >& NextGeneration, std::vector<std::vector<double> > const& MigRates, double const AcceptanceRate[3][3],int& MovingHybridNb,std::vector<std::map<int,CAlleles> >& Alleles);
double FChoosy(double& choosy,Ccouples& YoungCouples,double const AcceptanceRate[3][3]);
int FTranslateFitness(std::vector<long double>& Fecundity);
long double FFitness(std::vector<std::vector<Cdemes> >const& Demes,unsigned int const& c,unsigned int const& OrigineX, unsigned int const& OrigineY,bool sex);
int FHangover(Ccouples& Parents,Cindividus& Spouse,int& sex,std::vector<std::map<int,CAlleles> >& Alleles);
Ccouples FRecombination(Ccouples& Parents);
int FForwardMutation(Cindividus& Spouse, int& sex,std::vector<std::map<int,CAlleles> >& Alleles);
std::vector<std::vector<std::vector<std::vector<std::vector<int> > > > > FSampling(std::vector<std::vector<Cdemes> >& Demes,std::vector<std::map<int,CAlleles> >& Alleles);
int FCorrectBounds(int& MovingLimit);
int FProbaID(std::vector<std::map<int,CAlleles> >& Alleles, std::vector<std::vector<std::vector<std::vector<std::vector<int> > > > >& NodesGrid, unsigned int const& RUN, std::vector<std::vector<double> >& RunQIBD );
int FGenepopFile(std::vector<std::map<int,CAlleles> >& Alleles, std::vector<std::vector<std::vector<std::vector<std::vector<int> > > > >& NodesGrid, unsigned int const& RUN, bool const& PreContact);
int FIntrogressionStats(std::vector<std::map<int,CAlleles> >& Alleles, std::vector<std::vector<std::vector<std::vector<std::vector<int> > > > >& NodesGrid, unsigned int const& RUN);

#endif // MAIN_H_INCLUDED

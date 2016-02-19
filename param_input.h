
#ifndef PARAM_INPUT_H_INCLUDED
#define PARAM_INPUT_H_INCLUDED
#include <vector>


//Cdemography demo;
extern unsigned int DemeSize;//demo.DemeSize;
extern double SexeRatio;//demo.SexeRatio; N'intervient pas pour le moment
extern double DemeSamplingRatio;//proportion de demes echantillonnes pour la coalescence
extern double IndMeanSample;//nombre moyen d'individus echantillonnes par demes echantillonnes
extern unsigned long GenerationNumber;//demo.GenerationNumber;
extern unsigned int DimX;//demo.DimX;
extern unsigned int DimY;//demo.DimY;
extern unsigned int Xlimit;
extern unsigned int HabitatSlideBegin; //
extern unsigned int HabitatSlideEnd; // si ==0, pas de changement d'habitat
extern int HabitatSlideDepth;
extern int DispMax;
extern std::vector<long double> FitnessNormal;
extern std::vector<long double> FitnessMaladaptation;
extern std::vector<long double> FitnessHybridFemale;
extern std::vector<long double> FitnessHybridMale;
extern long double FitnessMt;
extern int HybridNb;
extern double mFemale;//taux de migration sur une dimension pour les femelles
extern double geomFemale;//raison geometrique pour les femelles
extern double mMale;//taux de migration sur une dimension pour les males
extern double geomMale;//raison geometrique pour les males
extern bool HomogamyAllLoci;
extern double ChoosyFemale;
extern double MuRate;
extern double InterRecombiRate;
extern double IntraRecombiRate;
extern int AutLociNumber;
extern std::vector<double> AcceptRates;
extern long AllopatryLast;//temps entre la divergence et le contact secondaire, en nombre de generations
extern unsigned int RunNumber;
extern double LowHybridBound;
extern double HighHybridBound;
extern bool MigRatesCorrection;
extern bool WriteIdMatrix;
extern bool WriteIdentitiesProba;
extern bool WriteFstHe;
extern bool WriteGenepopFile;
extern bool WriteGenepopIntrog;
extern bool WriteGenepopOrigin;
extern bool WriteGenepopAlsoPreContact;
extern bool WriteIntrogProfile;
extern bool WriteIntrogStats;
extern bool EdgeEffects;
extern unsigned long int _ptSamplingSeed;
extern bool pauseGP;
extern bool cinGetOnError;



int cmp_nocase(const std::string& s, const std::string& s2);
void rtrim(std::string *s);
int evaluateBool(bool &boolean, std::string buf);
int seeks_settings_file_name(const std::string cmdlinefilename,std::string& settingsfilename);
int read_settings_file(const std::string filename);





#endif // PARAM_INPUT_H_INCLUDED

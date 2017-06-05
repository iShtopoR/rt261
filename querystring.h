//---------------------------------------------------------------------------

#ifndef querystringH
#define querystringH

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
class QueryString {
private:
	char *searchPattern;
	void allocateMemoryForArray(void);
	unsigned int ptrToStartOfFoundedLine(char *bufferOfRawData, char *searchPattern);
	unsigned int ptrToEndOfFoundedLine(char *bufferOfRawData, char *searchPattern);
	char *extractStringFromData(char *bufferOfRawData, char *searchPattern);
	char *getNumberArrayFromLine(char *lineOfArray, unsigned int *index);
	char *getStringArrayFromLine(char *lineOfArray, unsigned int *index);
	char *getDiameterArrayFromLine(char *lineOfArray, unsigned int *index);
	char *getResidueArrayFromLine(char *lineOfArray, unsigned int *index);
	char *getDimensionArrayFromLine(char *lineOfArray, unsigned int *index);
	char **getArrayFromLine(char *lineOfArray);
	unsigned int sizeOfTwinArray;
	char *rawData;
	char **arrayData;
	char **arrayDataTwin;
	char *rawDataArray;
public:
	void loadDataToArray(FILE *stream);
	void getDoubleDataArray(void);
	void getArrayFromArray(void);
	char ***complexArray;
	unsigned int sizeOfRawData;
	QueryString();
	~QueryString();
};
//---------------------------------------------------------------------------
#endif

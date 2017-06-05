//---------------------------------------------------------------------------


#pragma hdrstop

#include "querystring.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

QueryString::QueryString() {
	searchPattern = "\\par";
	arrayData = NULL;
	sizeOfTwinArray = 1;
}

QueryString::~QueryString() {
	unsigned int counterForDelete, counterForDeleteSec;
	free(rawData);
	free(rawDataArray);
	free(searchPattern);
	for (counterForDelete = 0; counterForDelete < sizeOfTwinArray - 1; counterForDelete++) {
		free(arrayData[counterForDelete]);
	}
	free(arrayData);
	free(arrayDataTwin);
	for (counterForDelete = 0; counterForDelete < sizeOfTwinArray - 1; counterForDelete++) {
		for (counterForDeleteSec = 0; counterForDeleteSec < 6; counterForDeleteSec++) {
			free(complexArray[counterForDelete][counterForDeleteSec]);
		}
		free(complexArray[counterForDelete]);
	}
	free(complexArray);
}

void QueryString::loadDataToArray(FILE *stream) {
	fseek(stream,0,SEEK_END);
	sizeOfRawData = ftell(stream);
	rewind(stream);
	allocateMemoryForArray();
	fread(rawData, 1, sizeOfRawData, stream);
}

void QueryString::allocateMemoryForArray(void) {
	rawData = (char*)malloc(sizeof(char)*sizeOfRawData);
}
void QueryString::getDoubleDataArray(void) {
	rawDataArray = extractStringFromData(rawData, searchPattern);
	while(strlen(rawDataArray)) {
		arrayDataTwin = (char**)realloc(arrayData, (sizeOfTwinArray + 1)*sizeof(char*));
		arrayData = arrayDataTwin;
		arrayData[sizeOfTwinArray - 1] = (char*)calloc(strlen(rawDataArray) + 1, sizeof(char));
		strcpy(arrayData[sizeOfTwinArray - 1],rawDataArray);
		sizeOfTwinArray++;
		rawDataArray = extractStringFromData(rawData, searchPattern);
	}
}

void QueryString::getArrayFromArray(void) {
	unsigned int i;
	complexArray = (char***)calloc(sizeOfTwinArray, sizeof(char**));
	for(i = 0; i < sizeOfTwinArray - 1; i++) {
		complexArray[i] = getArrayFromLine(arrayData[i]);
	}
}

unsigned int QueryString::ptrToStartOfFoundedLine(char *bufferOfRawData, char *searchPattern) {
	unsigned int offset;
	unsigned int index;
	char *ptrToSymbol;
	while(1) {
		ptrToSymbol = strstr(bufferOfRawData,searchPattern);
		if(ptrToSymbol) {
			index = (unsigned int)(ptrToSymbol - bufferOfRawData - 1);
    		for(offset = 0; offset < index + 4; offset++) {
    			bufferOfRawData[offset] = '*';
    		}
			offset = 11;
    		while(1) {
    			if(isdigit(bufferOfRawData[index + offset])) {
    				if(bufferOfRawData[index + offset + 1] == ' ') {
    					return index + 11;
					}
    				else {
    					offset++;
    				}
    			}
				else {
    				break;
    			}
    		}
		}
		else {
    		return 0;
   		}
	}
}

unsigned int QueryString::ptrToEndOfFoundedLine(char *bufferOfRawData, char *searchPattern) {
	unsigned int index;
	char *ptrToSymbol = strstr(bufferOfRawData,searchPattern);
	if(ptrToSymbol) {
		index = (unsigned int)(ptrToSymbol - bufferOfRawData - 1);
		return index;
	}
   	else {
    	return 0;
	}
}
char *QueryString::extractStringFromData(char *bufferOfRawData, char *searchPattern) {
	unsigned int i,endPosition,startPosition;
 	startPosition = ptrToStartOfFoundedLine(bufferOfRawData,searchPattern);
	endPosition = ptrToEndOfFoundedLine(bufferOfRawData,searchPattern) - startPosition;
 	char *extractingArray = (char*)calloc(endPosition + 1,sizeof(char));

 	for(i = 0; i < endPosition; i++) {
 		extractingArray[i] = bufferOfRawData[i + startPosition];
	}

 	return extractingArray;
}

char *QueryString::getNumberArrayFromLine(char *lineOfArray, unsigned int *index) {
	char *numberArrayFromLine;
	unsigned int lengthOfString = 0;
	unsigned int i;
	while(!(isdigit(lineOfArray[*index + lengthOfString]))) {
		*index += 1;
	}
	while(isdigit(lineOfArray[*index + lengthOfString])) {
		lengthOfString++;
	}
	//printf("ooo%d\n",lengthOfString);
	numberArrayFromLine = (char*)calloc(lengthOfString + 1, sizeof(char));
		//printf("%d\n",*i + size - 1);
	for(i = 0; i < lengthOfString; i++) {
		numberArrayFromLine[i] = lineOfArray[*index + i];
	}
	*index += lengthOfString;
	return numberArrayFromLine;
}
char *QueryString::getStringArrayFromLine(char *lineOfArray, unsigned int *index) {
	char *stringArrayFromLine;
	unsigned int lengthOfString = 0;
	unsigned int i;
	while(lineOfArray[*index + lengthOfString] == ' ' || lineOfArray[*index + lengthOfString] == 'x') {
		*index += 1;
	}
	while(!(isdigit(lineOfArray[*index + lengthOfString]))) {
		//printf("%c",lineOfArray[*index + lengthOfString]);
		lengthOfString++;
	}
	//printf("%c",lineOfArray[*index + lengthOfString]);
	while(!isalpha(lineOfArray[*index + lengthOfString])) {
		//printf("%c",lineOfArray[*index + lengthOfString]);
		lengthOfString--;
	}
	stringArrayFromLine = (char*)calloc(lengthOfString + 2, sizeof(char));
	//printf("%c",lineOfArray[*index + lengthOfString]);
	for(i = 0; i < lengthOfString + 1; i++) {
		stringArrayFromLine[i] = lineOfArray[*index + i];
	}
	*index += lengthOfString;
	return stringArrayFromLine;
}
char *QueryString::getDiameterArrayFromLine(char *lineOfArray, unsigned int *index) {
	char *numberArrayFromLine;
	unsigned int lengthOfString = 0;
	unsigned int i;
	while(!(isdigit(lineOfArray[*index + lengthOfString]))) {
		*index += 1;
	}
	//printf("%c",lineOfArray[*index + lengthOfString]);
	while(isdigit(lineOfArray[*index + lengthOfString]) || lineOfArray[*index + lengthOfString] == ',') {
		//printf("%c ",lineOfArray[*index + lengthOfString]);
		lengthOfString++;
	}
	numberArrayFromLine = (char*)calloc(lengthOfString + 1, sizeof(char));
		//printf("%d\n",*i + lengthOfString - 1);
	for(i = 0; i < lengthOfString; i++) {
		numberArrayFromLine[i] = lineOfArray[*index + i];
	}
	*index += lengthOfString;
	return numberArrayFromLine;
}
char *QueryString::getResidueArrayFromLine(char *lineOfArray, unsigned int *index) {
	char *numberArrayFromLine;
	unsigned int lengthOfString = 0;
	unsigned int i;
	while(!(isdigit(lineOfArray[*index + lengthOfString]))) {
		*index += 1;
	}
	while(isdigit(lineOfArray[*index + lengthOfString]) || lineOfArray[*index + lengthOfString] == ',') {
		lengthOfString++;
	}
	numberArrayFromLine = (char*)calloc(lengthOfString + 1, sizeof(char));
	for(i = 0; i < lengthOfString; i++) {
		numberArrayFromLine[i] = lineOfArray[*index + i];
	}
	*index += lengthOfString;
	return numberArrayFromLine;
}
char *QueryString::getDimensionArrayFromLine(char *lineOfArray, unsigned int *index) {
	char *stringArrayFromLine;
	unsigned int lengthOfString = 0;
	unsigned int i;
	while(lineOfArray[*index + lengthOfString] == ' ') {
		*index += 1;
	}
	while(isalpha(lineOfArray[*index + lengthOfString])) {
		lengthOfString++;
	}
	stringArrayFromLine = (char*)calloc(lengthOfString + 1, sizeof(char));
	for(i = 0; i < lengthOfString + 1; i++) {
		stringArrayFromLine[i] = lineOfArray[*index + i];
	}
	*index += lengthOfString;
	return stringArrayFromLine;
}

char **QueryString::getArrayFromLine(char *lineOfArray) {
	unsigned int indexIterator = 0;
	char **dualArray = (char**)calloc(6, sizeof(char*));
	indexIterator = 0;
	dualArray[0] = (char*)calloc(strlen(getNumberArrayFromLine(lineOfArray, &indexIterator)) + 1, sizeof(char));
	dualArray[1] = (char*)calloc(strlen(getStringArrayFromLine(lineOfArray, &indexIterator)) + 1, sizeof(char));
	dualArray[2] = (char*)calloc(strlen(getDiameterArrayFromLine(lineOfArray, &indexIterator)) + 1, sizeof(char));
	dualArray[3] = (char*)calloc(strlen(getResidueArrayFromLine(lineOfArray, &indexIterator)) + 1, sizeof(char));
	dualArray[4] = (char*)calloc(strlen(getDimensionArrayFromLine(lineOfArray, &indexIterator)) + 1, sizeof(char));
	indexIterator = 0;
	dualArray[0] = getNumberArrayFromLine(lineOfArray, &indexIterator);
	dualArray[1] = getStringArrayFromLine(lineOfArray, &indexIterator);
	dualArray[2] = getDiameterArrayFromLine(lineOfArray, &indexIterator);
	dualArray[3] = getResidueArrayFromLine(lineOfArray, &indexIterator);
	dualArray[4] = getDimensionArrayFromLine(lineOfArray, &indexIterator);
	return dualArray;
}

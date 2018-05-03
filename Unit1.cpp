// ---------------------------------------------------------------------------

#include <vcl.h>
#include <vector>
#include <sstream>
#include <iostream>
#include <string>
#include <iterator>
#include "HTMLHelpViewer.hpp"
#pragma hdrstop
#pragma link "HTMLHelpViewer"

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
using namespace std;
TForm1 *Form1;
int myGlobalCounter = 0;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {
	AnsiString fileName = "";
	if (!OpenDialog1->Execute())
		return;
	TStringList *list = new TStringList;
	list->LoadFromFile(OpenDialog1->FileName);
	fileName = OpenDialog1->FileName;
	Memo1->Lines->Clear();
	Memo1->Lines->LoadFromFile(fileName);
}

void exch(vector<int> &data, int i, int j) {
	int s = data[i];
	data[i] = data[j];
	data[j] = s;
}

int partition(vector<int> &a, int low, int high) {
	int left = low;
	int right = high;
	int v = a[left];
	while (left < right) {
		while (a[left] <= v)
			left++;
		while (a[right] > v)
			right--;
		if (left < right) {
			exch(a, left, right);
			myGlobalCounter++;
		}
	}

	exch(a, low, right);
	return right;

}

void quick(vector<int> &data, int left, int right) {
	if (right <= left)
		return;
	int pivot = partition(data, left, right);
	quick(data, left, pivot - 1);
	quick(data, pivot + 1, right);
}

void quickSorting(vector<int>numbers) {
	myGlobalCounter = 0;
	unsigned int starttime = clock();
	quick(numbers, 0, numbers.size());
	unsigned int endtime = clock();
	unsigned int search_time = endtime - starttime;
	Form1->Memo2->Lines->Add(
		"===================================================");
	Form1->Memo2->Lines->Add("Сортировка QuickSort");
	Form1->Memo2->Lines->Add("Коливество выполненных операций: " + IntToStr
		(myGlobalCounter));
	Form1->Memo2->Lines->Add("Время затраченное на сортировку:" + UIntToStr
		(search_time) + " ms.");
	Form2->Chart1->Series[0]->Add(myGlobalCounter,
		"Сортировка QuickSort (" + UIntToStr(search_time) + " ms)", clGreen);

}

// ---------------------------------------------------------------------------
void bubleSorting(vector<int>numbers) {
	bool swapElement = true; // выход из цикла, если не было свапа
	myGlobalCounter = 0;
	unsigned int start_time = clock();
	while (swapElement) {
		swapElement = false;
		for (size_t index = 0; index < numbers.size(); index++) {
			if (numbers[index] > numbers[index + 1]) {
				swap(numbers[index], numbers[index + 1]);
				myGlobalCounter++;
				swapElement = true;
			}
		}
	}
	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;
	Form1->Memo2->Lines->Add("Сортировка методом пузырька");
	Form1->Memo2->Lines->Add("Коливество выполненных операций: " + IntToStr
		(myGlobalCounter));
	Form1->Memo2->Lines->Add
		("Время затраченное на сортировку методов пузырька:" + UIntToStr(search_time) + " ms.");
	Form2->Chart1->Series[0]->Add(myGlobalCounter,
		"Сортировка пузырьком (" + UIntToStr(search_time) + " ms)", clBlue);
}

void insertionSorting(vector<int>numbers) {
	myGlobalCounter = 0;
	int temp, item;
	unsigned int starttime = clock();
	for (int counter = 1; counter < numbers.size(); counter++) {
		temp = numbers[counter];
		item = counter - 1;
		while (item >= 0 && numbers[item] > temp) {
			numbers[item + 1] = numbers[item];
			myGlobalCounter++;
			numbers[item] = temp;
			item--;
		}
	}
	unsigned int endtime = clock();
	unsigned int search_time = clock() - starttime;
	Form1->Memo2->Lines->Add(
		"===================================================");
	Form1->Memo2->Lines->Add("Сортировка вставками");
	Form1->Memo2->Lines->Add("Коливество выполненных операций: " + IntToStr
		(myGlobalCounter));
	Form1->Memo2->Lines->Add("Время затраченное на сортировку:" + UIntToStr
		(search_time) + " ms.");
	Form2->Chart1->Series[0]->Add(myGlobalCounter,
		"Сортировка вставками (" + UIntToStr(search_time) + " ms)", clYellow);

}

void choicesSorting(vector<int>numbers) {
	myGlobalCounter = 0;
	unsigned int starttime = clock();
	for (int repeat_counter = 0; repeat_counter < numbers.size();
		repeat_counter++) {
		int temp = numbers[0]; // временная переменная для хранения значения перестановки
		for (int element_counter = repeat_counter + 1;
			element_counter < numbers.size(); element_counter++) {
			if (numbers[repeat_counter] > numbers[element_counter]) {
				temp = numbers[repeat_counter];
				numbers[repeat_counter] = numbers[element_counter];
				numbers[element_counter] = temp;
				myGlobalCounter++;
			}
		}
	}
	unsigned int endtime = clock();
	unsigned int search_time = endtime - starttime;
	Form1->Memo2->Lines->Add(
		"===================================================");
	Form1->Memo2->Lines->Add("Сортировка выбором");
	Form1->Memo2->Lines->Add("Коливество выполненных операций: " + IntToStr
		(myGlobalCounter));
	Form1->Memo2->Lines->Add("Время затраченное на сортировку:" + UIntToStr
		(search_time) + " ms.");
	Form2->Chart1->Series[0]->Add(myGlobalCounter,
		"Сортировка выбором (" + UIntToStr(search_time) + " ms)", clPurple);
}

vector<int>getNumbers() {
	AnsiString sourceNumbers = Form1->Memo1->Lines->GetText();
	istringstream is(sourceNumbers.c_str());
	vector<int>numbers;
	int number;
	while (is >> number) {
		numbers.push_back(number);
	}
	return numbers;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender) {
	Form1->Memo2->Lines->Clear();
	Form2->Chart1->Series[0]->Clear();
	int size = getNumbers().size();
	ShowMessage("Всего для сортировки: " + IntToStr(size) + " элементов");
	bubleSorting(getNumbers());
	quickSorting(getNumbers());
	insertionSorting(getNumbers());
	choicesSorting(getNumbers());
	Form2->Show();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::N1Click(TObject *Sender) {
	AnsiString fileName = "";
	if (!OpenDialog1->Execute())
		return;
	TStringList *list = new TStringList;
	list->LoadFromFile(OpenDialog1->FileName);
	fileName = OpenDialog1->FileName;
	Memo1->Lines->Clear();
	Memo1->Lines->LoadFromFile(fileName);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::N4Click(TObject *Sender) {
	Form1->Close();
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender) {
	Form1->Close();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender) {
	if (Form2->Chart1->Series[0]->Count() > 0) {
		Form2->Show();
	}
	else {
		ShowMessage
			("В графиках пока нету данных, выполните операции сортировки");
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::N3Click(TObject *Sender) {
	Form3->Show();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender) {
	Application->HelpCommand(HELP_CONTENTS, 1);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::FormActivate(TObject *Sender) {
	Application->HelpFile = "SortingApp.chm";
}
// ---------------------------------------------------------------------------

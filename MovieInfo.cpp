#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class MovieInfo
{
private:
	string title;
	string category;
	int year;
	int mins;

public:
	MovieInfo()
	{
		title = "";
		category = "";
		year = 0;
		mins = 0;
	}

	MovieInfo(string _title,string _category,long _year, int _mins)
	{
		title = _title;
		category = _category;
		year = _year;
		mins = _mins;
	}

	string getTitle()
	{
		return title;
	}

	string getCategory()
	{
		return category;
	}

	int getYear()
	{
		return year;
	}

	int getMins()
	{
		return mins;
	}

	void setTitle(string newTitle)
	{
		title = newTitle;
	}

	void setCategory(string newCategory)
	{
		category = newCategory;
	}

	void setYear(int newYear)
	{
		year = newYear;
	}

	void setMins(int newMins)
	{
		mins = newMins;
	}
};
void print(MovieInfo& movie)
{
	cout << left << setw(20) << "LABEL" << "VALUE" << endl;
	cout << left << setw(20) << "Title" << movie.getTitle() << endl;
	cout << left << setw(20) << "Category" << movie.getCategory() << endl;
	cout << left << setw(20) << "Year" << movie.getYear() << endl;
	cout << left << setw(20) << "Mins" << movie.getMins() << endl;

}
int main()
{
	MovieInfo movie1("The book of Life", "Animation|Adventure|Comedy", 2014, 95), 
		movie2("Roman Holiday", "Comedy|Drama|Romance", 1953, 118);
	cout << "\nMovie 1:\n\n";
	print(movie1);
	cout << "\nMovie 2:\n\n";
	print(movie2);
	return 0;
}
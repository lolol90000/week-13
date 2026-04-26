#include <iostream>
#include <string>
using namespace std;

// Movie class
class Movie
{
private:
    string title;
    int year;
    double rating;

public:
    Movie()
    {
        title = "";
        year = 0;
        rating = 0.0;
    }

    Movie(string t, int y, double r)
    {
        title = t;
        year = y;
        rating = r;
    }

    string getTitle()
    {
        return title;
    }

    int getYear()
    {
        return year;
    }

    double getRating()
    {
        return rating;
    }

    void setRating(double r)
    {
        rating = r;
    }

    void print()
    {
        cout << title << " (" << year << ") - Rating: " << rating << endl;
    }
};

// MovieList class
class MovieList
{
private:
    static const int capacity = 10;
    Movie movies[capacity];
    int count;

public:
    MovieList()
    {
        count = 0;
    }

    void addMovie(const Movie& m)
    {
        if (count < capacity)
        {
            movies[count] = m;
            count++;
        }
        else
        {
            cout << "List is full!" << endl;
        }
    }

    int getCount()
    {
        return count;
    }

    void printAll()
    {
        for (int i = 0; i < count; i++)
        {
            movies[i].print();
        }
    }

    double getAverageRating()
    {
        if (count == 0)
            return 0.0;

        double sum = 0;

        for (int i = 0; i < count; i++)
        {
            sum += movies[i].getRating();
        }

        return sum / count;
    }
};

int main()
{
    MovieList list1;

    Movie m1("Avengers", 2012, 8.5);
    Movie m2("Titanic", 1997, 9.0);
    Movie m3("Batman", 2022, 8.2);

    list1.addMovie(m1);
    list1.addMovie(m2);
    list1.addMovie(m3);

    cout << "Movie List:" << endl;
    list1.printAll();

    cout << "Average Rating: " << list1.getAverageRating() << endl;

    return 0;
}
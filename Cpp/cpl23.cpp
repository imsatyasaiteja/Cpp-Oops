// Getters and Setters in C++
#include<iostream>
using namespace std;

class Movie
{
    private :
        string rating;
    public :
        string title;
        string director;

        Movie(string t, string d, string r)
        {
            title = t;
            director = d;
            setRating(r);
        }

        void setRating(string r)
        {
            if(r == "G" || r == "PG" || r == "PG-13" || r == "R" || r == "NR")
            {
                rating = r;
            }
            else
            {
                rating = "NR";
            }
        }

        string getRating()
        {
            return rating;
        }
};

int main()
{
    Movie movie1("The Avengers", "Joss Whedon", "PG-13"), movie2("Inception", "Nolan", "PG-13");

    movie1.setRating("Cats&Dogs");

    cout << movie2.title << " : " << movie2.getRating() << endl;
    cout << movie1.title << " : " << movie1.getRating() << endl;
}

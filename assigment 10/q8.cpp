#include<iostream>
#include<string.h>
using namespace std;
class Actor
{
    private:
    string name;    int age;
    public:
    void set_name(string set)
        {   
            name=set; 
              cout<<endl;
        }
     
    void set_age(int a)
        {   
            age=a;
            cout<<endl;
        }

    string get_name()
        {   
                return name;
        }

    int get_age()
        {   
            return age;
        }
};
class TVActor:public Actor
{
    private:
    int project_done;
    public:

    void set_project_done(int a)
        {   
            project_done=a;    
        }

    int get_project_done()
    {   return project_done; }

    void setTVActor()
        {
                    
                   set_name(" aditya ");       
                   set_age(30);  
                   set_project_done(15);                    
        }
    
    void showTVActor()
    {
        cout<<"TV Actor: "<<get_name();
        cout<<endl;
        cout<<"TV Actor age: "<<get_age();
        cout<<endl;
        cout<<"project done: "<<get_project_done();
        cout<<endl;
    }
};

class MovieActor:public Actor
{
int movies_done;
    
    public:
    void set_movie_done(int a)
    {   
        movies_done=a;   
    }
    int get_movie_done()
    {   
        return movies_done;
    }

    void setMovieActor()
    {
                    set_movie_done(55);
                   set_name("shahrukh");     
                   set_age(55);                      
    }

    void getMovieActor()
    {
        cout<<"Movie Actor name: "<<get_name();
        cout<<endl;
        cout<<"Movie Actor age: "<<get_age();
        cout<<endl;
        cout<<"Movie done: "<<get_movie_done();
        cout<<endl;
    }
    };
    class AllscreenActor:public MovieActor,public TVActor
    {
        public:
        void setActor_data()
    {
        cout<<"entre tv actor details: ";
        setTVActor();
        cout<<"entre Movie actor details: ";
        setMovieActor();
     
    }
    void showActor_data()
    {
        showTVActor();
        
        getMovieActor();
        
    }
    };
    int main()
    {
        AllscreenActor obj;
        obj.setActor_data();
        obj.showActor_data();
    return 0;
    }
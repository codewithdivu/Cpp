class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display(){}
};


class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    


class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};


int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}


/*
As shown in a code snippet 4,

We created a string variable “title”, float variables “rating”, “vlen” and integer variable “words”
For the code with harry video class, we have assigned “Django tutorial” to the string “title”, “4.56” to the float “vlen” and “4.89” to the float “rating”.
An object “djVideo” is created of the data type “CWHVideo” and the variables “title”, “rating” and “vlen” are passed to it.
For the code with harry text class, we have assigned “Django tutorial text” to the string “title”, “433” to the integer “words” and “4.19” to the float “rating”.
An object “djText” is created of the data type “CWHText” and the variables “title”, “rating” and “words” are passed to it.
Two pointers array “tuts” is created of the “CWH” type
The address of the “djVideo” is assigned to “tuts[0]” and the address of the “djText” is assigned to “tuts[1]”
The function “display” is called using pointers “tuts[0]” and “tuts[1]”
*/
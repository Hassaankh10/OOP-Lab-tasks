#include <iostream>
using namespace std;
class MediaFile
{
private:
    string name;
    int size;
    string extension;

public:
    friend class MediaFileConverter;
    MediaFile(string name, int size, string exten)
    {
        this->name = name;
        this->size = size;
        this->extension = exten;
    }
    string getName()
    {
        return name;
    }
    int getSize()
    {
        return size;
    }
    string getExtension()
    {
        return extension;
    }
   
};
class Images : public MediaFile
{
private:
    int resolution;

public:
    Images(string name, int size, int resolution, string ext) : MediaFile(name, size, ext)
    {
        this->resolution = resolution;
    }
    int getResolution()
    {
        return resolution;
    }
     void Display(){
        cout<<"------------------------"<<endl;
        cout<<"the name of the file is: "<<getName()<<endl;
        cout<<"the size of the file is: "<<getSize()<<endl;
        cout<<"the extension of the file is: "<<getExtension()<<endl;
        cout<<"the resolution of the file is: "<<getResolution()<<endl;        
    }
};
class Videos : public MediaFile
{
private:
    int duration;

public:
    Videos(string name, int size, int duration, string ext) : MediaFile(name, size,ext)
    {
        this->duration = duration;
    }
       void Display(){
        cout<<"------------------------"<<endl;
        cout<<"the name of the file is: "<<getName()<<endl;
        cout<<"the size of the file is: "<<getSize()<<endl;
        cout<<"the extension of the file is: "<<getExtension()<<endl;
        cout<<"the duration of the file is: "<<duration<<endl;        
    }
};
class Audio : public MediaFile
{
private:
    int duration;

public:
    Audio(string name, int size, int duration, string ext) : MediaFile(name, size,ext)
    {
        this->duration = duration;
    }
         void Display(){
            cout<<"------------------------"<<endl;
        cout<<"the name of the file is: "<<getName()<<endl;
        cout<<"the size of the file is: "<<getSize()<<endl;
        cout<<"the extension of the file is: "<<getExtension()<<endl;
        cout<<"the duration of the file is: "<<duration<<endl;        
    }
};
class MediaFileConverter
{
    public:
    static void convert(MediaFile &mediaFile)
    {
        cout<<"enter the format you want to convert to: "<<endl;
        cin>>mediaFile.extension;
        cout<<"Media file converted to "<<mediaFile.extension<<endl;

}

};
int main()
{
    Images i("image", 100, 10, "jpg");
    i.Display();
    MediaFileConverter::convert(i);
    i.Display();
    Videos v("video", 100, 100000, "mp4");
    v.Display();
    MediaFileConverter::convert(v);
    v.Display();
    Audio a("audio", 100, 15, "mp3");
    a.Display();
    MediaFileConverter::convert(a);
    a.Display();
    return 0;
}
//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int wylosowanyObiekt;
TImage * obiekty[30];
int dziesiatePoczatkowe = 0;
int setnePoczatkowe = 0;
bool pierwszeLosowanie = true;
bool czyWyswietlono = true;
int trafione = 0;
int nietrafione = 0;
int czas = 0;

void wylosuj()
{
    for (int i = 0; i < 30; i++)
    {
        if (obiekty[i] -> Visible == false)
        {
            czyWyswietlono = false;
            continue;
        }
        else if (obiekty[i] -> Visible == true)
        {
            czyWyswietlono = true;
            break;
        }
    }

    if (!czyWyswietlono)
    {
        wylosowanyObiekt = random(30);

        obiekty[wylosowanyObiekt] -> Visible = true;
        Form1 -> Timer2 -> Enabled = true;
    }
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
    obiekty[0] = Image1;   obiekty[10] = Image11;   obiekty[20] = Image21;
    obiekty[1] = Image2;   obiekty[11] = Image12;   obiekty[21] = Image22;
    obiekty[2] = Image3;   obiekty[12] = Image13;   obiekty[22] = Image23;
    obiekty[3] = Image4;   obiekty[13] = Image14;   obiekty[23] = Image24;
    obiekty[4] = Image5;   obiekty[14] = Image15;   obiekty[24] = Image25;
    obiekty[5] = Image6;   obiekty[15] = Image16;   obiekty[25] = Image26;
    obiekty[6] = Image7;   obiekty[16] = Image17;   obiekty[26] = Image27;
    obiekty[7] = Image8;   obiekty[17] = Image18;   obiekty[27] = Image28;
    obiekty[8] = Image9;   obiekty[18] = Image19;   obiekty[28] = Image29;
    obiekty[9] = Image10;   obiekty[19] = Image20;   obiekty[29] = Image30;

    randomize();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{
    Form1 -> Timer2 -> Enabled = false;
    Image1 -> Visible = false;
    trafione++;
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image2Click(TObject *Sender)
{    
    Form1 -> Timer2 -> Enabled = false;
    Image2 -> Visible = false;
    trafione++;  
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image3Click(TObject *Sender)
{      
    Form1 -> Timer2 -> Enabled = false;
    Image3 -> Visible = false;  
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image4Click(TObject *Sender)
{      
    Form1 -> Timer2 -> Enabled = false;
    Image4 -> Visible = false;
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image5Click(TObject *Sender)
{      
    Form1 -> Timer2 -> Enabled = false;
    Image5 -> Visible = false;
    trafione++;  
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image6Click(TObject *Sender)
{           
    Form1 -> Timer2 -> Enabled = false;
    Image6 -> Visible = false;
    trafione++;  
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image7Click(TObject *Sender)
{       
    Form1 -> Timer2 -> Enabled = false;
    Image7 -> Visible = false;  
    trafione++;    
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image8Click(TObject *Sender)
{
    Form1 -> Timer2 -> Enabled = false;
    Image8 -> Visible = false; 
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image9Click(TObject *Sender)
{      
    Form1 -> Timer2 -> Enabled = false;
    Image9 -> Visible = false;  
    trafione++; 
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image10Click(TObject *Sender)
{        
    Form1 -> Timer2 -> Enabled = false;
    Image10 -> Visible = false;    
    trafione++;    
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image11Click(TObject *Sender)
{        
    Form1 -> Timer2 -> Enabled = false;
    Image11 -> Visible = false;   
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image12Click(TObject *Sender)
{         
    Form1 -> Timer2 -> Enabled = false;
    Image12 -> Visible = false;  
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image13Click(TObject *Sender)
{       
    Form1 -> Timer2 -> Enabled = false;
    Image13 -> Visible = false;  
    trafione++;  
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image14Click(TObject *Sender)
{       
    Form1 -> Timer2 -> Enabled = false;
    Image14 -> Visible = false;     
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image15Click(TObject *Sender)
{          
    Form1 -> Timer2 -> Enabled = false;
    Image15 -> Visible = false;     
    trafione++;  
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image16Click(TObject *Sender)
{       
    Form1 -> Timer2 -> Enabled = false;
    Image16 -> Visible = false;     
    trafione++;    
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image17Click(TObject *Sender)
{        
    Form1 -> Timer2 -> Enabled = false;
    Image17 -> Visible = false;   
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image18Click(TObject *Sender)
{          
    Form1 -> Timer2 -> Enabled = false;
    Image18 -> Visible = false;     
    trafione++;  
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image19Click(TObject *Sender)
{           
    Form1 -> Timer2 -> Enabled = false;
    Image19 -> Visible = false;    
    trafione++;  
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image20Click(TObject *Sender)
{      
    Form1 -> Timer2 -> Enabled = false;
    dziesiatePoczatkowe = 0;
    if (pierwszeLosowanie)
    {
        Timer1 -> Enabled = true;
        pierwszeLosowanie = false;
    }

    Image20 -> Visible = false; 
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image21Click(TObject *Sender)
{       
    Form1 -> Timer2 -> Enabled = false;
    Image21 -> Visible = false;  
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image22Click(TObject *Sender)
{         
    Form1 -> Timer2 -> Enabled = false;
    Image22 -> Visible = false;  
    trafione++;  
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image23Click(TObject *Sender)
{         
    Form1 -> Timer2 -> Enabled = false;
    Image23 -> Visible = false;  
    trafione++;    
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image24Click(TObject *Sender)
{          
    Form1 -> Timer2 -> Enabled = false;
    Image24 -> Visible = false; 
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image25Click(TObject *Sender)
{         
    Form1 -> Timer2 -> Enabled = false;
    Image25 -> Visible = false;    
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image26Click(TObject *Sender)
{         
    Form1 -> Timer2 -> Enabled = false;
    Image26 -> Visible = false;    
    trafione++;    
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image27Click(TObject *Sender)
{        
    Form1 -> Timer2 -> Enabled = false;
    Image27 -> Visible = false;   
    trafione++;     
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image28Click(TObject *Sender)
{         
    Form1 -> Timer2 -> Enabled = false;
    Image28 -> Visible = false;   
    trafione++;     
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image29Click(TObject *Sender)
{        
    Form1 -> Timer2 -> Enabled = false;
    Image29 -> Visible = false; 
    trafione++;   
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image30Click(TObject *Sender)
{        
    Form1 -> Timer2 -> Enabled = false;
    Image30 -> Visible = false;  
    trafione++;    
    Form1 -> Label2 -> Caption = "On target: " + IntToStr(trafione);
    wylosuj();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        dziesiatePoczatkowe++;

        int minuty, sekundy, dziesiate;
        AnsiString min, sek, dzies;

        minuty = dziesiatePoczatkowe / 600;
        min = IntToStr(minuty);
        if (minuty < 10) min = "0" + min;

        sekundy = (dziesiatePoczatkowe - minuty * 600) / 10;
        sek = IntToStr(sekundy);
        if (sekundy < 10) sek = "0" + sek;

        dziesiate = dziesiatePoczatkowe - minuty * 600 - sekundy * 10;
        dzies = IntToStr(dziesiate);

        Label1 -> Caption = min + ":" + sek + ":" + dzies;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
    Timer2 -> Enabled = false;
    obiekty[wylosowanyObiekt] -> Visible = false;
    nietrafione++; 
    Form1 -> Label3 -> Caption = "Off target: " + IntToStr(nietrafione);
    wylosuj();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    Shape2 -> Visible = false;
    Label4 -> Visible = false;
    Label5 -> Visible = false;
    Button1 -> Visible = false;
    Button2 -> Visible = false;
    Label1 -> Visible = true;
    Label2 -> Visible = true;
    Label3 -> Visible = true;

    obiekty[19] ->  Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
    Shape2 -> Visible = false;
    Label4 -> Visible = false;
    Label5 -> Visible = false;
    Button1 -> Visible = false;
    Button2 -> Visible = false;
    Label6 -> Visible = true;
    Label1 -> Visible = false;
    Label2 -> Visible = false;
    Label3 -> Visible = false;
    Image20 -> Visible = false;

    czas = random(3000) + 250;
    Timer3 -> Interval = czas;
    Timer3 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
    Image31 -> Visible = true;
    Timer4 -> Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image31Click(TObject *Sender)
{
    Timer4 -> Enabled = false;
    Image31 -> Visible = false;
    setnePoczatkowe = 0;

    czas = random(3000) + 250;
    Timer3 -> Interval = czas;
    Timer3 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer4Timer(TObject *Sender)
{
    setnePoczatkowe++;

    int sekundyR, setneR;
    AnsiString sekR, setR;

    sekundyR = setnePoczatkowe / 100;
    sekR = IntToStr(sekundyR);
    if (sekundyR < 10) sekR = "0" + sekR;

    setneR = setnePoczatkowe - sekundyR * 100;
    setR = IntToStr(setneR);
    if (setneR < 10) setR = "0" + setR;

    Label6 -> Caption = "Reaction time: " + sekR + ":" + setR;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if (Key == VK_ESCAPE)
    {
        for (int i = 0; i < 30; i++)
        {
            obiekty[i] -> Visible = false;
        }

        pierwszeLosowanie = true;
        trafione = 0;
        nietrafione = 0;
        Label1 -> Caption = "00:00:0";
        Label2 ->  Caption = "On target: 0";
        Label3 -> Caption = "Off target: 0";

        Label6 -> Caption = "Reaction time: 00:00";

        Shape2 -> Visible = true;
        Label4 -> Visible = true;
        Label5 -> Visible = true;
        Button1 -> Visible = true;
        Button2 -> Visible = true;
        Image31 -> Visible = false;
        Label6 -> Visible = false;
        Label1 -> Visible = false;
        Label2 -> Visible = false;
        Label3 -> Visible = false;
        Image20 -> Visible = false;

        Timer1 -> Enabled = false;
        Timer2 -> Enabled = false;
        Timer3 -> Enabled = false;
        Timer4 -> Enabled = false;
    }
}
//---------------------------------------------------------------------------


Program CamilaLab2B;


var 
    sum1: integer=0;
    ave1: integer=0;
    mylow: integer=0;
    myhigh: integer=0;
    
    numarray: array[0..4] of integer = (2,5,1,4,3);
   
function GetSumNumbers():integer;

begin
    GetSumNumbers:= numarray[0]+numarray[1]+numarray[2]+numarray[3]+numarray[4];
end;

function GetAveNumbers(): integer;
var 
sumave1:integer;
mydivisor:double=5;
mydivision:integer;

begin
   sumave1:= GetSumNumbers();
   mydivision:= round( sumave1 / mydivisor);
   GetAveNumbers:= mydivision;
end;

function GetMinNumbers(): integer;
var
temp1:integer;

begin
    if numarray[0] < numarray[1] then 
        temp1:=numarray[0]
    else 
        temp1:=numarray[1];
        
    if numarray[2] < temp1 then
        temp1:=numarray[2];
    if numarray[3] < temp1 then
        temp1:=numarray[3];
    if numarray[4] < temp1 then
        temp1:=numarray[4];
        
    GetMinNumbers:=temp1;
        
end;
function GetMaxNumbers(): integer;
var
temp2:integer;

begin
    if numarray[0] > numarray[1] then 
        temp2:=numarray[0]
    else 
        temp2:=numarray[1];
        
    if numarray[2] > temp2 then
        temp2:=numarray[2];
    if numarray[3] > temp2 then
        temp2:=numarray[3];
    if numarray[4] > temp2 then
        temp2:=numarray[4];
        
    GetMaxNumbers:=temp2;
        
end;

var 
    choice: char;

    
    label menu;
begin 
    menu:
     Writeln('---- CAMILA, DEXTER B. LAB EXER 2B ----');
     Writeln('WHAT DO YOU WANT TO DO?');
     Writeln('[1] SUM');
     Writeln('[2] AVERAGE');
     Writeln('[3] MINIMUM');
     Writeln('[4] MAXIMUM');
     Writeln('[5] EXIT');
     Writeln('MAKE YOUR CHOICE: ');
     read(choice);
    case(choice) of
        '1': Begin
            sum1:= GetSumNumbers();
            Writeln('YOU PRESSED 1(SUM)!');
            Writeln('THE SUM OF THE INTEGERS IS: ',sum1);
            readln;
            goto menu;
            end;
        '2': Begin
            ave1:= GetAveNumbers();
            Writeln('YOU PRESSED 2(AVERAGE)!');
            Writeln('THE AVERAGE OF THE INTEGERS IS: ', ave1);
            readln;
            goto menu;
            end;
        '3': Begin
            mylow:= GetMinNumbers();
            Writeln('YOU PRESSED 3(MINIMUM)!');
            Writeln('THE MINIMUM OF THE INTEGERS IS: ', mylow);
            goto menu;
            end;
        '4': Begin
            myhigh:= GetMaxNumbers();
            Writeln('YOU PRESSED 4(MAXIMUM)!');
            Writeln('THE MAXIMUM OF THE INTEGERS IS: ', myhigh);
            goto menu;
            end;
        '5': Begin 
            Writeln('YOU PRESSED 5(END)!');
            Writeln('THIS IS THE END! THANK YOU!');
            readln;
            end;
    end;
end.

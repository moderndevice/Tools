/* bomdefaults.h used by pcbom.ulp

   Sets default configurations for the dialog box settings
   and file extensions
   See each section for description of what to set each variable to.
   
   Paul Carpenter, PC Services

   August 2015
*/
/* File additions and extensions
   File name format is
      schematic name + modifier + extension

   for example on a Text format
       schematic-BOM.txt
       
   where modifier is "-BOM"
         extension is "txt"   
*/
string CSVext = ".csv";
string HTMLext = ".html";
string TEXText = ".txt";
string FileModifier = "-BOM";

// Set type value by default
//  0 = Parts
//  1 = Values
int     ListType = 1;

// File Format
//  0 = Text
//  1 = CSV
//  2 = HTML
int     OutputFormat = 0;

// CSV Separator type
// 0 = ','
// 1 = ';'
// 2 = TAB ( '\t' )
int UseSeparator = 0;

// Text Mode wrap at columns set columns to wrap text at for easier printing
// set to sensible value between 70 and 200
int WrapText = 85;
int WrapMin = 70;
int WrapMax = 200;
int COLMIN = 6;      // Minimum width for last column wrap

// Columns to display set each variable to 
// 1 = use
// 0 = don't list
// List Attributes
int UseAttributes = 0;
// List Device
int UseDevice = 1;
// List Package
int UsePackage = 0;
// List Description
int UseDescription = 0;


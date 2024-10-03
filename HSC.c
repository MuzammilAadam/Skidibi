#include<stdio.h>
void
main ()
{
  char name[50], branch[50], college[50];
  int roll, phy, chem, mat, bio, eng, urd;
  float sum = phy + chem + mat + bio + eng + urd;
  float per = sum / 6;

  printf ("ENTER YOUR NAME:");
  gets (name);
  printf ("ENTER YOUR BRANCH:");
  gets (branch);
  printf ("COLLEGE NAME:");
  gets (college);

  printf ("ENTER YOUR ENGLSIH MARKS:");
  scanf ("%d", &eng);
  printf ("ENTER YOUR URDU MARKS:");
  scanf ("%d", &urd);
  printf ("ENTER YOUR PHYSICS MARKS:");
  scanf ("%d", &phy);
  printf ("ENTER YOUR CHEMISTRY MARKS:");
  scanf ("%d", &chem);
  printf ("ENTER YOUR MATHS MARKS:");
  scanf ("%d", &mat);
  printf ("ENTER YOUR BIOLOGY MARKS:");
  scanf ("%d", &bio);
  if (phy > 100 || chem > 100 || mat > 100 || bio > 100 || eng > 100
	  || urd > 100)
	{
	  printf ("Error!\nPlease check your marks");
	}
  else
	{
	  printf ("\t\t-:YOUR RESULT:-");
	  printf ("\nNAME:%s", name);
	  printf ("\nBRANCH:%s", branch);
	  printf ("\nCOLLEGE:%s", college);
	  printf ("\nENGLISH:%d", eng);
	  printf ("\nURDU:%d", urd);
	  printf ("\nPHYSICS:%d", phy);
	  printf ("\nCHEMISTRY:%d", chem);
	  printf ("\nMATHS:%d", mat);
	  printf ("\nBIOLOGY:%d", bio);
	  sum = phy + chem + mat + bio + eng + urd;
	  printf ("\nTOTAL:%f", sum);
	  per = sum / 6;
	  printf ("\nPERCENTAGE:%f", per);

	  if (per >= 35 && per <= 100)
		{
		  printf ("\nRESULT:PASS");
		}
	  else
		{
		  printf ("\nRESULT:FAIL");
		}
	}

}

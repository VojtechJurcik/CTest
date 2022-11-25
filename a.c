char *banner;

void
output_report (int nr)
{
  puts (banner);
  printf ("Number: %d\n", nr);
  printf ("\n");
}

int
main
{
  banner = create_banner ();
  for (int i = 1; i <= 3; i++)
    output_report (i);

  return 0;
}


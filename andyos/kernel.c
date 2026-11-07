void kmain()
{
  volatile char* vidmen = (char*)0xB8000;

  vidmen[0] = 'A';
  vidmen[1] = 0x04;
 }
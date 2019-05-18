struct Animal
{

  char *name;
  int leg_count;
};

struct Animal *create_animal(char *name, int leg_count)
{
  struct Animal *animal = malloc(sizeof(struct Animal));

  animal->name = malloc(strnlen(name) + 1);
  strcpy(animal->name, name);

  animal->leg_count = leg_count;

  return animal;
}

void free_animal(struct Animal *animal)
{
  free(animal->name);
  free(animal);
}

void set_animal_name(struct Animal *animal, char *name)
{
  free(animal->name);

  animal->name = malloc(strnlen(name) + 1);
  strcpy(animal->name, name);
}
int main(void)
{
  struct Animal *goat;

  goat = create_animal("goat", 4);

  printf("%s %d\n", goat->name, goat->leg_count);
  free_animal(goat);
  return 0;
}
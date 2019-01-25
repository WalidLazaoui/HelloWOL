struct Animal {
	int muerde;
};

typedef struct Animal Animal;

Animal* Animal_Create(Animal* a, int muerde) {
	a->muerde = muerde;
	return a;
}


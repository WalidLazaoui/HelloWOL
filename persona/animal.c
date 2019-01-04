struct Animal {
	int muerde;
}

Animal_Create(Animal* a, int muerde) {
	a->muerde = muerde;
	return a;
}

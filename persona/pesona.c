struct Persona {
	char* nombre;
	int edad;
}

Persona* Persona_Create(Persona* p, char* nombre, int edad) {
	p->nombre = nombre;
	p->edad = edad;
	
	return p;
}

Persona* Persona_Create_Inutil() {
	return NULL;
}

void Persona_Destroy() {
	return;
}

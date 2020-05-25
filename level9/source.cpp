class N {

private:
	unsigned int n;
	char annotation[100];

public:

	unsigned int operator+(N& arg) {
		return (self.n + N(arg).n);
	}

	unsigned int operator-(N& arg) {
		return (self.n - N(arg).n);
	}

	void Annotation(char *str) {
		memcpy(annotation, str, strlen(str))
	}
}



main(int argc, char **arg) {
	if (argc <= 1)
		_exit(1);

	N *a = new N(5);
	N *b = new N(6);

	a->setAnnotation(argv[1]);
	return (*a+*b);
}